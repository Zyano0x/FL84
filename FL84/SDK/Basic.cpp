#pragma once

// Dumped with Dumper-7!


#include "pch.h"

namespace SDK
{
	FNamePool* FName::GNames = nullptr;

	void InitSDK(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset)
	{
		auto mBaseAddress = reinterpret_cast<uintptr_t>(LI_FN(GetModuleHandleW)(moduleName.c_str()));
		if (!mBaseAddress)
			return;

		UObject::GObjects = reinterpret_cast<TUObjectArray*>(uintptr_t(GetModuleHandle(0)) + gObjectsOffset);
		FName::GNames = reinterpret_cast<FNamePool*>(mBaseAddress + gNamesOffset);
		UWorld::GWorld = reinterpret_cast<SDK::UWorld**>(mBaseAddress + gWorldOffset);
	}

	void InitSDK()
	{
		return InitSDK(xorstr_(L"SolarlandClient-Win64-Shipping.exe"), 0x6ED40E0, 0x6EBB780, 0x7033488);
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


