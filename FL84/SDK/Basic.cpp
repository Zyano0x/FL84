#pragma once

// Dumped with Dumper-7!


#include "pch.h"

namespace SDK
{
	FNamePool* FName::GNames = nullptr;

	void InitSDK(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset)
	{
		auto mBaseAddress = reinterpret_cast<uintptr_t>(LI_FN(GetModuleHandleW).safe()(moduleName.c_str()));
		if (!mBaseAddress)
			return;

		UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + gObjectsOffset);
		FName::GNames = reinterpret_cast<FNamePool*>(mBaseAddress + gNamesOffset);
		UWorld::GWorld = reinterpret_cast<SDK::UWorld**>(mBaseAddress + gWorldOffset);
	}

	void InitSDK()
	{
		return InitSDK(xorstr_(L"SolarlandClient-Win64-Shipping.exe"), 0x6ED40F0, 0x6EBB780, 0x7033498);
	}

	void InitGObjects()
	{
		UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + Offsets::GObjects);
	}

	FString FSoftObjectPtr::GetSubPathString()
	{
		return ObjectID.SubPathString;
	}

	std::string FSoftObjectPtr::GetSubPathStringStr()
	{
		return ObjectID.SubPathString.ToString();
	}

	template<class SoftObjectPath>
	SoftObjectPath& FSoftObjectPtr::GetObjectPath()
	{
		static_assert(std::is_same_v<SoftObjectPath, SoftObjPathWrapper::FSoftObjectPath>, "Only use this with FSoftObjectPath. This function is only templated as a workaround to C++ type-checks.");

		return reinterpret_cast<SoftObjPathWrapper::FSoftObjectPath&>(ObjectID);
	}

	void Dummy() { FSoftObjectPtr().GetObjectPath(); }

	int32_t FNameEntry::GetLength() const
	{
		return Header.Len;
	}

	bool FNameEntry::IsWide() const
	{
		return Header.bIsWide;
	}

	int32_t FNameEntry::GetId() const
	{
		throw std::exception("This game doesn't use 'FNAME_POOL_WITH_CASE_PRESERVING_NAME' so 'ComparisonId' not stored in 'FNameEntry'");
	}

	std::string FNameEntry::GetAnsiName() const
	{
		uint32_t len = GetLength();
		if (len > 1024) return "[Error: Overflow]";
		return std::string((const char*)AnsiName, len);
	}

	std::wstring FNameEntry::GetWideName() const
	{
		uint32_t len = GetLength();
		return std::wstring((const wchar_t*)WideName, len);
	}

	std::string FNameEntry::GetName() const
	{
		return GetAnsiName();
	}

	int32_t FNameEntryAllocator::NumBlocks() const
	{
		return CurrentBlock + 1;
	}

	FNameEntry* FNameEntryAllocator::GetById(int32_t key) const
	{
		int block = key >> 16;
		int offset = (uint16_t)key;
		if (!IsValidIndex(key, block, offset))
			return reinterpret_cast<FNameEntry*>(Blocks[0] + 0); // "None"
		return reinterpret_cast<FNameEntry*>(Blocks[block] + ((uint64_t)offset * Stride));
	}

	bool FNameEntryAllocator::IsValidIndex(int32_t key) const
	{
		uint32_t block = key >> 16;
		uint16_t offset = key;
		return IsValidIndex(key, block, offset);
	}

	bool FNameEntryAllocator::IsValidIndex(int32_t key, uint32_t block, uint16_t offset) const
	{
		return (key >= 0 && block < static_cast<uint32_t>(NumBlocks()) && offset * Stride < MaxOffset);
	}

	FNameEntry* FNamePool::GetNext(uintptr_t& nextFNameAddress, uint32_t* comparisonId) const
	{
		static int lastBlock = 0;
		if (!nextFNameAddress)
		{
			lastBlock = 0;
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[0]);
		}
	RePlay:
		int32_t nextFNameComparisonId = MAKELONG((uint16_t)((nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock])) / 2), (uint16_t)lastBlock);
		int32_t block = nextFNameComparisonId >> 16;
		int32_t offset = (uint16_t)nextFNameComparisonId;
		int32_t offsetFromBlock = static_cast<int32_t>(nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock]));

		// Get entry information
		const uintptr_t entryOffset = nextFNameAddress;
		const int toAdd = 0x00 + 0x02; // HeaderOffset + HeaderSize
		const uint16_t nameHeader = *reinterpret_cast<uint16_t*>(entryOffset);
		int nameLength = nameHeader >> 6;
		bool isWide = (nameHeader & 1) != 0;
		if (isWide)
			nameLength += nameLength;

		// if odd number (odd numbers are aligned with 0x00)
		if (!isWide && nameLength % 2 != 0)
			nameLength += 1;

		// Block end ?
		if (offsetFromBlock + toAdd + (nameLength * 2) >= 0xFFFF * FNameEntryAllocator::Stride || nameHeader == 0x00 || block == Allocator.CurrentBlock && offset >= Allocator.CurrentByteCursor)
		{
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[++lastBlock]);
			goto RePlay;
		}

		// We hit last Name in last Block
		if (lastBlock > Allocator.CurrentBlock)
			return nullptr;

		// Get next name address
		nextFNameAddress = entryOffset + toAdd + nameLength;

		// Get name
		FNameEntry* ret = Allocator.GetById(nextFNameComparisonId);

		if (comparisonId)
			*comparisonId = nextFNameComparisonId;

		return ret;
	}

	int32_t FNamePool::Count() const
	{
		return AnsiCount;
	}

	bool FNamePool::IsValidIndex(int32_t index) const
	{
		return Allocator.IsValidIndex(static_cast<int32_t>(index));
	}

	FNameEntry* FNamePool::GetById(int32_t id) const
	{
		return Allocator.GetById(id);
	}

	FNameEntry* FNamePool::operator[](int32_t id) const
	{
		return GetById(id);
	}

	FName::FName()
	{
		ComparisonIndex = 0;
		Number = 0;
	}

	FName::FName(int32 i)
	{
		ComparisonIndex = i;
		Number = 0;
	}

	FName::FName(const char* nameToFind)
	{
		Number = 0;
		static std::unordered_set<int> cache;
		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				ComparisonIndex = i;
#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
#endif
				return;
			}
		}

#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		uint32_t curComparisonId = 0;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress, &curComparisonId); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress, &curComparisonId))
		{
			if (name->GetAnsiName() == nameToFind)
			{
				cache.insert(curComparisonId);
				ComparisonIndex = curComparisonId;
#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = curComparisonId;
#endif
				return;
			}
		}
#else
		for (int32_t i = 0; i < GetGlobalNames().Count(); ++i)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
#endif
	}

	FName::FName(const wchar_t* nameToFind)
	{
		Number = 0;
		static std::unordered_set<int> cache;
		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				ComparisonIndex = i;
#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
#endif
				return;
			}
		}

#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		uint32_t curComparisonId = 0;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress, &curComparisonId); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress, &curComparisonId))
		{
			if (name->GetWideName() == nameToFind)
			{
				cache.insert(curComparisonId);
				ComparisonIndex = curComparisonId;
#ifdef FNAME_POOL_WITH_CASE_PRESERVING_NAME
				DisplayIndex = curComparisonId;
#endif
				return;
			}
		}
#else
		for (int32_t i = 0; i < GetGlobalNames().Count(); ++i)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
#endif
	}

	void FName::InitGNames()
	{
		GNames = reinterpret_cast<FNamePool*>(uint64(GetModuleHandle(0)) + Offsets::GNames);
	}

	int32 FName::GetDisplayIndex() const
	{
		return ComparisonIndex;
	}

	std::string FName::GetRawString() const
	{
		thread_local FString TempString(1024);
		static void(*AppendString)(const FName*, FString&) = nullptr;

		if (!AppendString)
			AppendString = reinterpret_cast<void(*)(const FName*, FString&)>(uintptr_t(GetModuleHandle(0)) + Offsets::AppendString);

		AppendString(this, TempString);

		std::string OutputString = TempString.ToString();
		TempString.ResetNum();

		return OutputString;
	}

	std::string FName::ToString() const
	{
		std::string OutputString = GetRawString();

		size_t pos = OutputString.rfind('/');

		if (pos == std::string::npos)
			return OutputString;

		return OutputString.substr(pos + 1);
	}

	FNamePool& FName::GetGlobalNames()
	{
		return *GNames;
	}

	std::string FName::GetNameA() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}

	std::wstring FName::GetNameW() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetWideName();
	}

	std::string FName::GetName() const
	{
		return GetNameA();
	}

	class UObject* FWeakObjectPtr::Get() const
	{
		return UObject::GObjects->GetByIndex(ObjectIndex);
	}

	class UObject* FWeakObjectPtr::operator->() const
	{
		return UObject::GObjects->GetByIndex(ObjectIndex);
	}

	bool FWeakObjectPtr::operator==(const FWeakObjectPtr& Other) const
	{
		return ObjectIndex == Other.ObjectIndex;
	}
	bool FWeakObjectPtr::operator!=(const FWeakObjectPtr& Other) const
	{
		return ObjectIndex != Other.ObjectIndex;
	}

	bool FWeakObjectPtr::operator==(const class UObject* Other) const
	{
		return ObjectIndex == Other->Index;
	}
	bool FWeakObjectPtr::operator!=(const class UObject* Other) const
	{
		return ObjectIndex != Other->Index;
	}
}


