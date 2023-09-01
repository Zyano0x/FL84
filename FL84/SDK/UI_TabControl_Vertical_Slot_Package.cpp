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
	 * 		Name   -> Function UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C.InitWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USolarRedHint_General_C*                     HintWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USolarTextBlock*                             Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      Icon                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabControl_Vertical_Slot_C::InitWidget(class USolarRedHint_General_C** HintWidget, class USolarTextBlock** Text, class UImage** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C.InitWidget");
		
		UUI_TabControl_Vertical_Slot_C_InitWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HintWidget != nullptr)
			*HintWidget = params.HintWidget;
		if (Text != nullptr)
			*Text = params.Text;
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C.SetStyle
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TabStyle                                         Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabControl_Vertical_Slot_C::SetStyle(E_TabStyle Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C.SetStyle");
		
		UUI_TabControl_Vertical_Slot_C_SetStyle_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C.SetSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabControl_Vertical_Slot_C::SetSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C.SetSelected");
		
		UUI_TabControl_Vertical_Slot_C_SetSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TabControl_Vertical_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TabControl_Vertical_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TabControl_Vertical_Slot.UI_TabControl_Vertical_Slot_C");
		return ptr;
	}

}


