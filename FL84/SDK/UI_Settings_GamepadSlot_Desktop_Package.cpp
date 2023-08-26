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
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Settings_GamepadSlot_Desktop_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.GetModuleName");
		
		UUI_Settings_GamepadSlot_Desktop_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.SetMaxOptionsNumDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::SetMaxOptionsNumDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.SetMaxOptionsNumDisplay");
		
		UUI_Settings_GamepadSlot_Desktop_C_SetMaxOptionsNumDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.SetOptionDisplay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::SetOptionDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.SetOptionDisplay");
		
		UUI_Settings_GamepadSlot_Desktop_C_SetOptionDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnEntryReleased");
		
		UUI_Settings_GamepadSlot_Desktop_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnItemExpansionChanged");
		
		UUI_Settings_GamepadSlot_Desktop_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnItemSelectionChanged");
		
		UUI_Settings_GamepadSlot_Desktop_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.OnListItemObjectSet");
		
		UUI_Settings_GamepadSlot_Desktop_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.PreConstruct");
		
		UUI_Settings_GamepadSlot_Desktop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.ExecuteUbergraph_UI_Settings_GamepadSlot_Desktop
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_GamepadSlot_Desktop_C::ExecuteUbergraph_UI_Settings_GamepadSlot_Desktop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.ExecuteUbergraph_UI_Settings_GamepadSlot_Desktop");
		
		UUI_Settings_GamepadSlot_Desktop_C_ExecuteUbergraph_UI_Settings_GamepadSlot_Desktop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_GamepadSlot_Desktop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_GamepadSlot_Desktop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C");
		return ptr;
	}

}


