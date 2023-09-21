#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RichtapTools.RichtapController
// (None)

class UClass* URichtapController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichtapController");

	return Clss;
}


// RichtapController RichtapTools.Default__RichtapController
// (Public, ClassDefaultObject, ArchetypeObject)

class URichtapController* URichtapController::GetDefaultObj()
{
	static class URichtapController* Default = nullptr;

	if (!Default)
		Default = static_cast<URichtapController*>(URichtapController::StaticClass()->DefaultObject);

	return Default;
}


// Function RichtapTools.RichtapController.SetRichtapEnable
// (Final, Native, Public)
// Parameters:
// bool                               On                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichtapController::SetRichtapEnable(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichtapController", "SetRichtapEnable");

	Params::URichtapController_SetRichtapEnable_Params Parms{};

	Parms.On = On;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RichtapTools.RichtapController.SetEnableRichtap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnableRichtap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichtapController::SetEnableRichtap(bool bIsEnableRichtap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichtapController", "SetEnableRichtap");

	Params::URichtapController_SetEnableRichtap_Params Parms{};

	Parms.bIsEnableRichtap = bIsEnableRichtap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


