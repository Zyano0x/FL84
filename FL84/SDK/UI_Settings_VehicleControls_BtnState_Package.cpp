/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Settings_VehicleControls_BtnState_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.GetModuleName");
		
		UUI_Settings_VehicleControls_BtnState_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::SetHover(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetHover");
		
		UUI_Settings_VehicleControls_BtnState_C_SetHover_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetLegged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisibleLegged                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::SetLegged(bool IsVisibleLegged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetLegged");
		
		UUI_Settings_VehicleControls_BtnState_C_SetLegged_Params params {};
		params.IsVisibleLegged = IsVisibleLegged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetWheel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisibleWheel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::SetWheel(bool IsVisibleWheel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetWheel");
		
		UUI_Settings_VehicleControls_BtnState_C_SetWheel_Params params {};
		params.IsVisibleWheel = IsVisibleWheel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetMask
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsMask                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::SetMask(bool IsMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetMask");
		
		UUI_Settings_VehicleControls_BtnState_C_SetMask_Params params {};
		params.IsMask = IsMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetSelect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::SetSelect(bool IsSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.SetSelect");
		
		UUI_Settings_VehicleControls_BtnState_C_SetSelect_Params params {};
		params.IsSelect = IsSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.PreConstruct");
		
		UUI_Settings_VehicleControls_BtnState_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.BndEvt__Btn_SelectWheeledJoyStick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::BndEvt__Btn_SelectWheeledJoyStick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.BndEvt__Btn_SelectWheeledJoyStick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Settings_VehicleControls_BtnState_C_BndEvt__Btn_SelectWheeledJoyStick_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.BndEvt__Btn_JoyStickControlCustomize_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::BndEvt__Btn_JoyStickControlCustomize_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.BndEvt__Btn_JoyStickControlCustomize_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UUI_Settings_VehicleControls_BtnState_C_BndEvt__Btn_JoyStickControlCustomize_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.ExecuteUbergraph_UI_Settings_VehicleControls_BtnState
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::ExecuteUbergraph_UI_Settings_VehicleControls_BtnState(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.ExecuteUbergraph_UI_Settings_VehicleControls_BtnState");
		
		UUI_Settings_VehicleControls_BtnState_C_ExecuteUbergraph_UI_Settings_VehicleControls_BtnState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.OnClickedCustomize__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::OnClickedCustomize__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.OnClickedCustomize__DelegateSignature");
		
		UUI_Settings_VehicleControls_BtnState_C_OnClickedCustomize__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.OnClickedSelect__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_VehicleControls_BtnState_C::OnClickedSelect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C.OnClickedSelect__DelegateSignature");
		
		UUI_Settings_VehicleControls_BtnState_C_OnClickedSelect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_VehicleControls_BtnState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_VehicleControls_BtnState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_VehicleControls_BtnState.UI_Settings_VehicleControls_BtnState_C");
		return ptr;
	}

}


