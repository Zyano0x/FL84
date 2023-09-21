#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SolarlandDeviceId.SolarlandDeviceInfoSettings
// (None)

class UClass* USolarlandDeviceInfoSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarlandDeviceInfoSettings");

	return Clss;
}


// SolarlandDeviceInfoSettings SolarlandDeviceId.Default__SolarlandDeviceInfoSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarlandDeviceInfoSettings* USolarlandDeviceInfoSettings::GetDefaultObj()
{
	static class USolarlandDeviceInfoSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarlandDeviceInfoSettings*>(USolarlandDeviceInfoSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarlandDeviceId.SolarlandDeviceInfoSettings.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USolarlandDeviceInfoSettings*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USolarlandDeviceInfoSettings* USolarlandDeviceInfoSettings::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarlandDeviceInfoSettings", "GetInstance");

	Params::USolarlandDeviceInfoSettings_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


