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
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Settings_Item_Slot_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.GetModuleName");
		
		UUI_Settings_Item_Slot_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.UpdateCheckGroupList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::UpdateCheckGroupList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.UpdateCheckGroupList");
		
		UUI_Settings_Item_Slot_C_UpdateCheckGroupList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.AddItemToCheckGroupListData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Item_Slot_C::AddItemToCheckGroupListData(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.AddItemToCheckGroupListData");
		
		UUI_Settings_Item_Slot_C_AddItemToCheckGroupListData_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.ClearCheckGroupListData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::ClearCheckGroupListData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.ClearCheckGroupListData");
		
		UUI_Settings_Item_Slot_C_ClearCheckGroupListData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetSwitchInitValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInitValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_Item_Slot_C::SetSwitchInitValue(bool IsInitValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetSwitchInitValue");
		
		UUI_Settings_Item_Slot_C_SetSwitchInitValue_Params params {};
		params.IsInitValue = IsInitValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetSwitch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_Item_Slot_C::SetSwitch(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetSwitch");
		
		UUI_Settings_Item_Slot_C_SetSwitch_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.IsSwitchOnVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_Item_Slot_C::IsSwitchOnVisible(bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.IsSwitchOnVisible");
		
		UUI_Settings_Item_Slot_C_IsSwitchOnVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_Item_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.PreConstruct");
		
		UUI_Settings_Item_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UCheckBox*>                           ChildChangedArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            CheckedChildIndex                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Item_Slot_C::BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature_Params params {};
		params.ChildChangedArray = ChildChangedArray;
		params.CheckedChildIndex = CheckedChildIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UCheckBox*>                           ChildChangedArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            CheckedChildIndex                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCheckBox*                                   PrevCheckedChild                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Item_Slot_C::BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex, class UCheckBox* PrevCheckedChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature_Params params {};
		params.ChildChangedArray = ChildChangedArray;
		params.CheckedChildIndex = CheckedChildIndex;
		params.PrevCheckedChild = PrevCheckedChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_Item_Slot_C::BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetCheckGroupTextList
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              NewParam                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UUI_Settings_Item_Slot_C::SetCheckGroupTextList(TArray<class FString> NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetCheckGroupTextList");
		
		UUI_Settings_Item_Slot_C_SetCheckGroupTextList_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.ExecuteUbergraph_UI_Settings_Item_Slot
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_Item_Slot_C::ExecuteUbergraph_UI_Settings_Item_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.ExecuteUbergraph_UI_Settings_Item_Slot");
		
		UUI_Settings_Item_Slot_C_ExecuteUbergraph_UI_Settings_Item_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnSwitchStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::OnSwitchStateChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnSwitchStateChanged__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_OnSwitchStateChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnSwitchClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::OnSwitchClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnSwitchClicked__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_OnSwitchClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnCheckBoxStateChangedEventEx__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::OnCheckBoxStateChangedEventEx__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnCheckBoxStateChangedEventEx__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_OnCheckBoxStateChangedEventEx__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnCheckBoxStateChangedEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settings_Item_Slot_C::OnCheckBoxStateChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnCheckBoxStateChangedEvent__DelegateSignature");
		
		UUI_Settings_Item_Slot_C_OnCheckBoxStateChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_Item_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_Item_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings_Item_Slot.UI_Settings_Item_Slot_C");
		return ptr;
	}

}


