#pragma once

// Dumped with Dumper-7!


#include "pch.h"

namespace SDK
{
	void* FName::GNames = nullptr;

	bool InitSDK(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset)
	{
		auto mBaseAddress = reinterpret_cast<uintptr_t>(LI_FN(GetModuleHandleW).safe()(moduleName.c_str()));
		if (!mBaseAddress)
			return false;

		UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + gObjectsOffset);
		FName::GNames = reinterpret_cast<void*>(mBaseAddress + gNamesOffset);
		UWorld::GWorld = reinterpret_cast<SDK::UWorld**>(mBaseAddress + gWorldOffset);
	}

	bool InitSDK()
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


