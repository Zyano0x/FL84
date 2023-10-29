#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_Option.UI_Component_Option_C
// (None)

class UClass* UUI_Component_Option_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_Option_C");

	return Clss;
}


// UI_Component_Option_C UI_Component_Option.Default__UI_Component_Option_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_Option_C* UUI_Component_Option_C::GetDefaultObj()
{
	static class UUI_Component_Option_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_Option_C*>(UUI_Component_Option_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_Option.UI_Component_Option_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Option_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Option.UI_Component_Option_C.OnListItemObjectSetCopy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_Option_C::OnListItemObjectSetCopy(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "OnListItemObjectSetCopy");

	Params::UUI_Component_Option_C_OnListItemObjectSetCopy_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Component_Option_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "GetModuleName");

	Params::UUI_Component_Option_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_Option.UI_Component_Option_C.SetTextID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocTextID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_Option_C::SetTextID(int32 LocTextID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "SetTextID");

	Params::UUI_Component_Option_C_SetTextID_Params Parms{};

	Parms.LocTextID = LocTextID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Component_Option_C::SetText(const class FString& NewParam, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "SetText");

	Params::UUI_Component_Option_C_SetText_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.SetEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          CallFunc_GetCheckedState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_Option_C::SetEnabled(bool Enabled, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ECheckBoxState Temp_byte_Variable_4, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "SetEnabled");

	Params::UUI_Component_Option_C_SetEnabled_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_GetCheckedState_ReturnValue = CallFunc_GetCheckedState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.SetOptionType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OptionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FCheckBoxStyle              K2Node_MakeStruct_CheckBoxStyle                                  (None)

void UUI_Component_Option_C::SetOptionType(int32 OptionType, int32 Temp_int_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "SetOptionType");

	Params::UUI_Component_Option_C_SetOptionType_Params Parms{};

	Parms.OptionType = OptionType;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_CheckBoxStyle = K2Node_MakeStruct_CheckBoxStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.ManualOptionSetIsChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::ManualOptionSetIsChecked(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "ManualOptionSetIsChecked");

	Params::UUI_Component_Option_C_ManualOptionSetIsChecked_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Component_Option_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Option.UI_Component_Option_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "BP_OnItemExpansionChanged");

	Params::UUI_Component_Option_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "BP_OnItemSelectionChanged");

	Params::UUI_Component_Option_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_Option_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "OnListItemObjectSet");

	Params::UUI_Component_Option_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "PreConstruct");

	Params::UUI_Component_Option_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UUI_Component_Option_C_BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::OnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "OnSelected");

	Params::UUI_Component_Option_C_OnSelected_Params Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.SetDisbaled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::SetDisbaled(bool Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "SetDisbaled");

	Params::UUI_Component_Option_C_SetDisbaled_Params Parms{};

	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.RefreshOptionTxtUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_Option_C::RefreshOptionTxtUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "RefreshOptionTxtUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Option.UI_Component_Option_C.ExecuteUbergraph_UI_Component_Option
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          CallFunc_GetCheckedState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Disabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::ExecuteUbergraph_UI_Component_Option(int32 EntryPoint, enum class ECheckBoxState Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_ComponentBoundEvent_bIsChecked, bool K2Node_Event_bSelected, bool K2Node_CustomEvent_Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "ExecuteUbergraph_UI_Component_Option");

	Params::UUI_Component_Option_C_ExecuteUbergraph_UI_Component_Option_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetCheckedState_ReturnValue = CallFunc_GetCheckedState_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_CustomEvent_Disabled = K2Node_CustomEvent_Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Option.UI_Component_Option_C.OnOptionCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Option_C::OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Option_C", "OnOptionCheckStateChanged__DelegateSignature");

	Params::UUI_Component_Option_C_OnOptionCheckStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}

}


