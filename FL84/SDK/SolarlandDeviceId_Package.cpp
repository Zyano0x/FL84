/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02A53F50
	 * 		Name   -> Function SolarlandDeviceId.SolarlandDeviceInfoSettings.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class USolarlandDeviceInfoSettings* USolarlandDeviceInfoSettings::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarlandDeviceId.SolarlandDeviceInfoSettings.GetInstance"));
		
		USolarlandDeviceInfoSettings_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarlandDeviceInfoSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarlandDeviceInfoSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SolarlandDeviceId.SolarlandDeviceInfoSettings"));
		return ptr;
	}

}


