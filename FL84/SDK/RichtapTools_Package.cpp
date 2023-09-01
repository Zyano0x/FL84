/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00B34D90
	 * 		Name   -> Function RichtapTools.RichtapController.SetRichtapEnable
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichtapController::SetRichtapEnable(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RichtapTools.RichtapController.SetRichtapEnable");
		
		URichtapController_SetRichtapEnable_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B34D10
	 * 		Name   -> Function RichtapTools.RichtapController.SetEnableRichtap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnableRichtap                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichtapController::STATIC_SetEnableRichtap(bool bIsEnableRichtap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RichtapTools.RichtapController.SetEnableRichtap");
		
		URichtapController_SetEnableRichtap_Params params {};
		params.bIsEnableRichtap = bIsEnableRichtap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URichtapController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URichtapController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RichtapTools.RichtapController");
		return ptr;
	}

}


