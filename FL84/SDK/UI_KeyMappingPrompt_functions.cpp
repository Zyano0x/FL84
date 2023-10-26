#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_KeyMappingPrompt.UI_KeyMappingPrompt_C
// (None)

class UClass* UUI_KeyMappingPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_KeyMappingPrompt_C");

	return Clss;
}


// UI_KeyMappingPrompt_C UI_KeyMappingPrompt.Default__UI_KeyMappingPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_KeyMappingPrompt_C* UUI_KeyMappingPrompt_C::GetDefaultObj()
{
	static class UUI_KeyMappingPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_KeyMappingPrompt_C*>(UUI_KeyMappingPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_23398FFD420D186E9747759B1A805FC5
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputDeviceProxy           InputDeviceProxy                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUI_KeyMappingPrompt_C::OnInputDeviceChanged_23398FFD420D186E9747759B1A805FC5(const struct FInputDeviceProxy& InputDeviceProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInputDeviceChanged_23398FFD420D186E9747759B1A805FC5");

	Params::UUI_KeyMappingPrompt_C_OnInputDeviceChanged_23398FFD420D186E9747759B1A805FC5_Params Parms{};

	Parms.InputDeviceProxy = InputDeviceProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_763C475845B4A537F20B12978CA92FD9
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_KeyMappingPrompt_C::OnInputMappingUpdate_763C475845B4A537F20B12978CA92FD9()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInputMappingUpdate_763C475845B4A537F20B12978CA92FD9");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_E9B9F5B2439FFE5A72C866B91A3B40BE
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputDeviceProxy           InputDeviceProxy                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUI_KeyMappingPrompt_C::OnInputDeviceChanged_E9B9F5B2439FFE5A72C866B91A3B40BE(const struct FInputDeviceProxy& InputDeviceProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInputDeviceChanged_E9B9F5B2439FFE5A72C866B91A3B40BE");

	Params::UUI_KeyMappingPrompt_C_OnInputDeviceChanged_E9B9F5B2439FFE5A72C866B91A3B40BE_Params Parms{};

	Parms.InputDeviceProxy = InputDeviceProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_2F6550CD4BD184BFF036828034F89CB7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_KeyMappingPrompt_C::OnInputMappingUpdate_2F6550CD4BD184BFF036828034F89CB7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInputMappingUpdate_2F6550CD4BD184BFF036828034F89CB7");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_5A8CC4444F30EFCB33D1FA8FE5AFA493
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputDeviceProxy           InputDeviceProxy                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUI_KeyMappingPrompt_C::OnInputDeviceChanged_5A8CC4444F30EFCB33D1FA8FE5AFA493(const struct FInputDeviceProxy& InputDeviceProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInputDeviceChanged_5A8CC4444F30EFCB33D1FA8FE5AFA493");

	Params::UUI_KeyMappingPrompt_C_OnInputDeviceChanged_5A8CC4444F30EFCB33D1FA8FE5AFA493_Params Parms{};

	Parms.InputDeviceProxy = InputDeviceProxy;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_DCB924EB436B643CD6CDEB888EE808E1
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_KeyMappingPrompt_C::OnInputMappingUpdate_DCB924EB436B643CD6CDEB888EE808E1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInputMappingUpdate_DCB924EB436B643CD6CDEB888EE808E1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_KeyMappingPrompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_KeyMappingPrompt_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_KeyMappingPrompt_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParametersCopy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWidgetOverrideParam>Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_KeyMappingPrompt_C::OnChangeAdapterSlotWidgetParametersCopy(TArray<struct FWidgetOverrideParam>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnChangeAdapterSlotWidgetParametersCopy");

	Params::UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetParametersCopy_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_KeyMappingPrompt_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "GetModuleName");

	Params::UUI_KeyMappingPrompt_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableInputSettingHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyMappingPrompt_C::SetEnableInputSettingHide(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "SetEnableInputSettingHide");

	Params::UUI_KeyMappingPrompt_C_SetEnableInputSettingHide_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetOperationTypeImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_InputOperationType    InType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_InputOperationType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyMappingPrompt_C::SetOperationTypeImpl(enum class E_InputOperationType InType, enum class E_InputOperationType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "SetOperationTypeImpl");

	Params::UUI_KeyMappingPrompt_C_SetOperationTypeImpl_Params Parms{};

	Parms.InType = InType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.RefreshEmptyDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInEmpty                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyMappingPrompt_C::RefreshEmptyDisplay(bool bInEmpty, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "RefreshEmptyDisplay");

	Params::UUI_KeyMappingPrompt_C_RefreshEmptyDisplay_Params Parms{};

	Parms.bInEmpty = bInEmpty;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableEmptyDispaly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyMappingPrompt_C::SetEnableEmptyDispaly(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "SetEnableEmptyDispaly");

	Params::UUI_KeyMappingPrompt_C_SetEnableEmptyDispaly_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_KeyPromptStyle        Style                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_KeyPromptStyle        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_KeyPromptStyle        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_KeyPromptStyle        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_KeyPromptStyle        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable_2                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_KeyPromptStyle        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_KeyPromptStyle        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default_4                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_5                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyMappingPrompt_C::SetStyle(enum class E_KeyPromptStyle Style, const struct FMargin& Temp_struct_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class E_KeyPromptStyle Temp_byte_Variable, const struct FMargin& Temp_struct_Variable_1, const struct FMargin& Temp_struct_Variable_2, const struct FMargin& Temp_struct_Variable_3, enum class E_KeyPromptStyle Temp_byte_Variable_1, class UPanelWidget* Temp_object_Variable, enum class E_KeyPromptStyle Temp_byte_Variable_2, class UWidget* Temp_object_Variable_1, enum class E_KeyPromptStyle Temp_byte_Variable_3, class UWidget* Temp_object_Variable_2, enum class E_KeyPromptStyle Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin_2, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_3, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_Select_Default_1, const struct FMargin& Temp_struct_Variable_4, const struct FMargin& Temp_struct_Variable_5, enum class E_KeyPromptStyle Temp_byte_Variable_10, class UPanelWidget* K2Node_Select_Default_2, const struct FMargin& K2Node_Select_Default_3, class UWidget* K2Node_Select_Default_4, class UWidget* K2Node_Select_Default_5, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "SetStyle");

	Params::UUI_KeyMappingPrompt_C_SetStyle_Params Parms{};

	Parms.Style = Style;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin_2 = K2Node_MakeStruct_Margin_2;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_3 = K2Node_MakeStruct_Margin_3;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot_1 = K2Node_DynamicCast_AsVertical_Box_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot_1 = K2Node_DynamicCast_AsHorizontal_Box_Slot_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetGameplayTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InGameplayTag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              MetaData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_KeyMappingPrompt_C::OnChangeAdapterSlotWidgetGameplayTag(struct FGameplayTag& InGameplayTag, TArray<class FString>& MetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnChangeAdapterSlotWidgetGameplayTag");

	Params::UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetGameplayTag_Params Parms{};

	Parms.InGameplayTag = InGameplayTag;
	Parms.MetaData = MetaData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParameters
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWidgetOverrideParam>Params                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UUI_KeyMappingPrompt_C::OnChangeAdapterSlotWidgetParameters(TArray<struct FWidgetOverrideParam>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnChangeAdapterSlotWidgetParameters");

	Params::UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetParameters_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnLoadAdapterSlotWidgetFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_KeyMappingPrompt_C::OnLoadAdapterSlotWidgetFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "OnLoadAdapterSlotWidgetFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyMappingPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "PreConstruct");

	Params::UUI_KeyMappingPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.ExecuteUbergraph_UI_KeyMappingPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_InGameplayTag                                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_MetaData                                            (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FWidgetOverrideParam>K2Node_Event_Params                                              (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_KeyMappingPrompt_C::ExecuteUbergraph_UI_KeyMappingPrompt(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTag& K2Node_Event_InGameplayTag, TArray<class FString>& K2Node_Event_MetaData, TArray<struct FWidgetOverrideParam>& K2Node_Event_Params, bool K2Node_Event_IsDesignTime, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyMappingPrompt_C", "ExecuteUbergraph_UI_KeyMappingPrompt");

	Params::UUI_KeyMappingPrompt_C_ExecuteUbergraph_UI_KeyMappingPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_InGameplayTag = K2Node_Event_InGameplayTag;
	Parms.K2Node_Event_MetaData = K2Node_Event_MetaData;
	Parms.K2Node_Event_Params = K2Node_Event_Params;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


