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
		return InitSDK(xorstr_(L"SolarlandClient-Win64-Shipping.exe"), 0x066B0680, 0x6697E00, 0x6807900);
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetLength
	 * 		Flags  -> ()
	 */
	int32_t FNameEntry::GetLength() const
	{
		return Header.Len;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.IsWide
	 * 		Flags  -> ()
	 */
	bool FNameEntry::IsWide() const
	{
		return Header.bIsWide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetId
	 * 		Flags  -> ()
	 */
	int32_t FNameEntry::GetId() const
	{
		throw std::exception("This game doesn't use 'FNAME_POOL_WITH_CASE_PRESERVING_NAME' so 'ComparisonId' not stored in 'FNameEntry'");
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetAnsiName
	 * 		Flags  -> ()
	 */
	std::string FNameEntry::GetAnsiName() const
	{
		uint32_t len = GetLength();
		if (len > 1024) return "[Error: Overflow]";
		return std::string((const char*)AnsiName, len);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetWideName
	 * 		Flags  -> ()
	 */
	std::wstring FNameEntry::GetWideName() const
	{
		uint32_t len = GetLength();
		return std::wstring((const wchar_t*)WideName, len);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntry.GetName
	 * 		Flags  -> ()
	 */
	std::string FNameEntry::GetName() const
	{
		return GetAnsiName();
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.NumBlocks
	 * 		Flags  -> ()
	 */
	int32_t FNameEntryAllocator::NumBlocks() const
	{
		return CurrentBlock + 1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.GetById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            key
	 */
	FNameEntry* FNameEntryAllocator::GetById(int32_t key) const
	{
		int block = key >> 16;
		int offset = (uint16_t)key;
		if (!IsValidIndex(key, block, offset))
			return reinterpret_cast<FNameEntry*>(Blocks[0] + 0); // "None"
		return reinterpret_cast<FNameEntry*>(Blocks[block] + ((uint64_t)offset * Stride));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            key
	 */
	bool FNameEntryAllocator::IsValidIndex(int32_t key) const
	{
		uint32_t block = key >> 16;
		uint16_t offset = key;
		return IsValidIndex(key, block, offset);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNameEntryAllocator.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            key
	 * 		uint32_t                                           block
	 * 		uint16_t                                           offset
	 */
	bool FNameEntryAllocator::IsValidIndex(int32_t key, uint32_t block, uint16_t offset) const
	{
		return (key >= 0 && block < static_cast<uint32_t>(NumBlocks()) && offset * Stride < MaxOffset);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.GetNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		uintptr_t&                                         nextFNameAddress
	 * 		uint32_t*                                          comparisonId
	 */
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

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.Count
	 * 		Flags  -> ()
	 */
	int32_t FNamePool::Count() const
	{
		return AnsiCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            index
	 */
	bool FNamePool::IsValidIndex(int32_t index) const
	{
		return Allocator.IsValidIndex(static_cast<int32_t>(index));
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.GetById
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            id
	 */
	FNameEntry* FNamePool::GetById(int32_t id) const
	{
		return Allocator.GetById(id);
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction BasicTypes.FNamePool.operator[]
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            id
	 */
	FNameEntry* FNamePool::operator[](int32_t id) const
	{
		return GetById(id);
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


