/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChangedCopy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Item_C::BP_OnItemSelectionChangedCopy(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChangedCopy"));
		
		UUI_Component_Item_C_BP_OnItemSelectionChangedCopy_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.SetIcon_LuaCopy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::SetIcon_LuaCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.SetIcon_LuaCopy"));
		
		UUI_Component_Item_C_SetIcon_LuaCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.PlayEnterAnim
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Item_C::PlayEnterAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.PlayEnterAnim"));
		
		UUI_Component_Item_C_PlayEnterAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSetCopy
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Component_Item_C::OnListItemObjectSetCopy(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSetCopy"));
		
		UUI_Component_Item_C_OnListItemObjectSetCopy_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Component_Item_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.GetModuleName"));
		
		UUI_Component_Item_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_3
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::SequenceEvent__ENTRYPOINTUI_Component_Item_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_3"));
		
		UUI_Component_Item_C_SequenceEvent__ENTRYPOINTUI_Component_Item_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::SequenceEvent__ENTRYPOINTUI_Component_Item_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_2"));
		
		UUI_Component_Item_C_SequenceEvent__ENTRYPOINTUI_Component_Item_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::SequenceEvent__ENTRYPOINTUI_Component_Item_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_1"));
		
		UUI_Component_Item_C_SequenceEvent__ENTRYPOINTUI_Component_Item_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.SetIcon_Lua
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::SetIcon_Lua()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.SetIcon_Lua"));
		
		UUI_Component_Item_C_SetIcon_Lua_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Component_Item_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.BP_OnEntryReleased"));
		
		UUI_Component_Item_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Item_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.BP_OnItemExpansionChanged"));
		
		UUI_Component_Item_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Item_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChanged"));
		
		UUI_Component_Item_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Component_Item_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSet"));
		
		UUI_Component_Item_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.PlaySound_Puzzle_Unlock_Anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::PlaySound_Puzzle_Unlock_Anim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.PlaySound_Puzzle_Unlock_Anim"));
		
		UUI_Component_Item_C_PlaySound_Puzzle_Unlock_Anim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.PlaySound_Anim_Exchange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::PlaySound_Anim_Exchange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.PlaySound_Anim_Exchange"));
		
		UUI_Component_Item_C_PlaySound_Anim_Exchange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.PreConstruct"));
		
		UUI_Component_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.ChangItemState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::ChangItemState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.ChangItemState"));
		
		UUI_Component_Item_C_ChangItemState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.PlayReceiveAnimEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::PlayReceiveAnimEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.PlayReceiveAnimEvent"));
		
		UUI_Component_Item_C_PlayReceiveAnimEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.StopReceiveAnimEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Item_C::StopReceiveAnimEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.StopReceiveAnimEvent"));
		
		UUI_Component_Item_C_StopReceiveAnimEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Item.UI_Component_Item_C.ExecuteUbergraph_UI_Component_Item
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Component_Item_C::ExecuteUbergraph_UI_Component_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Item.UI_Component_Item_C.ExecuteUbergraph_UI_Component_Item"));
		
		UUI_Component_Item_C_ExecuteUbergraph_UI_Component_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Component_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Component_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Component_Item.UI_Component_Item_C"));
		return ptr;
	}

}


