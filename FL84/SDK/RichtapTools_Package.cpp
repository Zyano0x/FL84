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
	 * 		RVA    -> 0x00B756A0
	 * 		Name   -> Function RichtapTools.RichtapController.SetRichtapEnable
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichtapController::SetRichtapEnable(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function RichtapTools.RichtapController.SetRichtapEnable"));
		
		URichtapController_SetRichtapEnable_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B75620
	 * 		Name   -> Function RichtapTools.RichtapController.SetEnableWinRichtap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnableWinRichtap                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichtapController::STATIC_SetEnableWinRichtap(bool bIsEnableWinRichtap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function RichtapTools.RichtapController.SetEnableWinRichtap"));
		
		URichtapController_SetEnableWinRichtap_Params params {};
		params.bIsEnableWinRichtap = bIsEnableWinRichtap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B755A0
	 * 		Name   -> Function RichtapTools.RichtapController.SetEnableRichtap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsEnableRichtap                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URichtapController::STATIC_SetEnableRichtap(bool bIsEnableRichtap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function RichtapTools.RichtapController.SetEnableRichtap"));
		
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
			ptr = UObject::FindClass(xorstr_("Class RichtapTools.RichtapController"));
		return ptr;
	}

}


