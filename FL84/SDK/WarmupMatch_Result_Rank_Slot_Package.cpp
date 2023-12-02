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
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.SetData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_WarmUp_RankItemOBJ_C*                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::SetData(class UUI_WarmUp_RankItemOBJ_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.SetData"));
		
		UWarmupMatch_Result_Rank_Slot_C_SetData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.UpdateDisplay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Type_Rank                                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::UpdateDisplay(E_Type_Rank NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.UpdateDisplay"));
		
		UWarmupMatch_Result_Rank_Slot_C_UpdateDisplay_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnEntryReleased
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnEntryReleased"));
		
		UWarmupMatch_Result_Rank_Slot_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnItemExpansionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnItemExpansionChanged"));
		
		UWarmupMatch_Result_Rank_Slot_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnItemSelectionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnItemSelectionChanged"));
		
		UWarmupMatch_Result_Rank_Slot_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.PreConstruct"));
		
		UWarmupMatch_Result_Rank_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.InputData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUI_WarmUp_RankItemOBJ_C*                    Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::InputData(class UUI_WarmUp_RankItemOBJ_C* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.InputData"));
		
		UWarmupMatch_Result_Rank_Slot_C_InputData_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::Init(class UObject* Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.Init"));
		
		UWarmupMatch_Result_Rank_Slot_C_Init_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.OnListItemObjectSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.OnListItemObjectSet"));
		
		UWarmupMatch_Result_Rank_Slot_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.ExecuteUbergraph_WarmupMatch_Result_Rank_Slot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarmupMatch_Result_Rank_Slot_C::ExecuteUbergraph_WarmupMatch_Result_Rank_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.ExecuteUbergraph_WarmupMatch_Result_Rank_Slot"));
		
		UWarmupMatch_Result_Rank_Slot_C_ExecuteUbergraph_WarmupMatch_Result_Rank_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWarmupMatch_Result_Rank_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWarmupMatch_Result_Rank_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C"));
		return ptr;
	}

}


