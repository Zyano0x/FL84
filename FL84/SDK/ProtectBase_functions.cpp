#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ProtectBase.ProtectBaseComponent
// (None)

class UClass* UProtectBaseComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProtectBaseComponent");

	return Clss;
}


// ProtectBaseComponent ProtectBase.Default__ProtectBaseComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UProtectBaseComponent* UProtectBaseComponent::GetDefaultObj()
{
	static class UProtectBaseComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UProtectBaseComponent*>(UProtectBaseComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ProtectBase.ProtectBaseComponent.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UProtectBaseComponent*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UProtectBaseComponent* UProtectBaseComponent::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProtectBaseComponent", "GetInstance");

	Params::UProtectBaseComponent_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ProtectBase.ProtectBaseManager
// (None)

class UClass* UProtectBaseManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProtectBaseManager");

	return Clss;
}


// ProtectBaseManager ProtectBase.Default__ProtectBaseManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UProtectBaseManager* UProtectBaseManager::GetDefaultObj()
{
	static class UProtectBaseManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UProtectBaseManager*>(UProtectBaseManager::StaticClass()->DefaultObject);

	return Default;
}


// Class ProtectBase.SecDSComponent
// (None)

class UClass* USecDSComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SecDSComponent");

	return Clss;
}


// SecDSComponent ProtectBase.Default__SecDSComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USecDSComponent* USecDSComponent::GetDefaultObj()
{
	static class USecDSComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USecDSComponent*>(USecDSComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ProtectBase.SecDSComponent.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USecDSComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USecDSComponent* USecDSComponent::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SecDSComponent", "GetInstance");

	Params::USecDSComponent_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


