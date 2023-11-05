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
	 * 		RVA    -> 0x00CBEF70
	 * 		Name   -> Function AiPal.AiPalComponent.SetUserID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAiPalComponent::SetUserID(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.SetUserID"));
		
		UAiPalComponent_SetUserID_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBEEF0
	 * 		Name   -> Function AiPal.AiPalComponent.SetThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ThresholdPer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAiPalComponent::SetThreshold(float ThresholdPer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.SetThreshold"));
		
		UAiPalComponent_SetThreshold_Params params {};
		params.ThresholdPer = ThresholdPer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBEE60
	 * 		Name   -> Function AiPal.AiPalComponent.SetMaxDetectTimes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            DetectGap_ms                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAiPalComponent::SetMaxDetectTimes(int32_t DetectGap_ms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.SetMaxDetectTimes"));
		
		UAiPalComponent_SetMaxDetectTimes_Params params {};
		params.DetectGap_ms = DetectGap_ms;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBEDD0
	 * 		Name   -> Function AiPal.AiPalComponent.SetDetectGap_ms
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            DetectGap_ms                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAiPalComponent::SetDetectGap_ms(int32_t DetectGap_ms)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.SetDetectGap_ms"));
		
		UAiPalComponent_SetDetectGap_ms_Params params {};
		params.DetectGap_ms = DetectGap_ms;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBEDB0
	 * 		Name   -> Function AiPal.AiPalComponent.EndDetect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAiPalComponent::EndDetect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.EndDetect"));
		
		UAiPalComponent_EndDetect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBED90
	 * 		Name   -> Function AiPal.AiPalComponent.Capture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAiPalComponent::Capture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.Capture"));
		
		UAiPalComponent_Capture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBED70
	 * 		Name   -> Function AiPal.AiPalComponent.BeginDetect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAiPalComponent::BeginDetect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AiPal.AiPalComponent.BeginDetect"));
		
		UAiPalComponent_BeginDetect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAiPalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAiPalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AiPal.AiPalComponent"));
		return ptr;
	}

}


