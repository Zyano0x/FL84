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
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Setting_Graphics_StyleSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.PreConstruct");
		
		UUI_Setting_Graphics_StyleSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.BndEvt__SolarCheckButton_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Setting_Graphics_StyleSlot_C::BndEvt__SolarCheckButton_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.BndEvt__SolarCheckButton_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Setting_Graphics_StyleSlot_C_BndEvt__SolarCheckButton_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.OnSelected
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Setting_Graphics_StyleSlot_C::OnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.OnSelected");
		
		UUI_Setting_Graphics_StyleSlot_C_OnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.ExecuteUbergraph_UI_Setting_Graphics_StyleSlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Setting_Graphics_StyleSlot_C::ExecuteUbergraph_UI_Setting_Graphics_StyleSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C.ExecuteUbergraph_UI_Setting_Graphics_StyleSlot");
		
		UUI_Setting_Graphics_StyleSlot_C_ExecuteUbergraph_UI_Setting_Graphics_StyleSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Setting_Graphics_StyleSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Setting_Graphics_StyleSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Setting_Graphics_StyleSlot.UI_Setting_Graphics_StyleSlot_C");
		return ptr;
	}

}


