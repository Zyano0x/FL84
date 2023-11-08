﻿/**
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
	 * 		RVA    -> 0x03DAECC0
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEyeTrackerFunctionLibrary::STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer"));
		
		UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DAEC90
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UEyeTrackerFunctionLibrary::STATIC_IsStereoGazeDataAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable"));
		
		UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DAEC60
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UEyeTrackerFunctionLibrary::STATIC_IsEyeTrackerConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected"));
		
		UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DAEBC0
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FEyeTrackerStereoGazeData                   OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEyeTrackerFunctionLibrary::STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData"));
		
		UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGazeData != nullptr)
			*OutGazeData = params.OutGazeData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03DAEB10
	 * 		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FEyeTrackerGazeData                         OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEyeTrackerFunctionLibrary::STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData"));
		
		UEyeTrackerFunctionLibrary_GetGazeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGazeData != nullptr)
			*OutGazeData = params.OutGazeData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEyeTrackerFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEyeTrackerFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class EyeTracker.EyeTrackerFunctionLibrary"));
		return ptr;
	}

}


