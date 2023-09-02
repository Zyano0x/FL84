﻿/**
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
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBtn_Unlock_Anim_2_C::OnAnimStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimStart");
		
		UBtn_Unlock_Anim_2_C_OnAnimStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBtn_Unlock_Anim_2_C::OnAnimEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimEnd");
		
		UBtn_Unlock_Anim_2_C_OnAnimEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.ExecuteUbergraph_Btn_Unlock_Anim_3
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBtn_Unlock_Anim_2_C::ExecuteUbergraph_Btn_Unlock_Anim_3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.ExecuteUbergraph_Btn_Unlock_Anim_3");
		
		UBtn_Unlock_Anim_2_C_ExecuteUbergraph_Btn_Unlock_Anim_3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimEnded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBtn_Unlock_Anim_2_C::OnAnimEnded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimEnded__DelegateSignature");
		
		UBtn_Unlock_Anim_2_C_OnAnimEnded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBtn_Unlock_Anim_2_C::OnAnimStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimStarted__DelegateSignature");
		
		UBtn_Unlock_Anim_2_C_OnAnimStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBtn_Unlock_Anim_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBtn_Unlock_Anim_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C");
		return ptr;
	}

}

