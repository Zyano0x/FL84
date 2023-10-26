#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_KeyPrompt.UI_KeyPrompt_C
// (None)

class UClass* UUI_KeyPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_KeyPrompt_C");

	return Clss;
}


// UI_KeyPrompt_C UI_KeyPrompt.Default__UI_KeyPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_KeyPrompt_C* UUI_KeyPrompt_C::GetDefaultObj()
{
	static class UUI_KeyPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_KeyPrompt_C*>(UUI_KeyPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_KeyPrompt.UI_KeyPrompt_C.SetActionName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InActionName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_KeyPrompt_C::SetActionName(const class FString& InActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "SetActionName");

	Params::UUI_KeyPrompt_C_SetActionName_Params Parms{};

	Parms.InActionName = InActionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.RefreshKeyPromptUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWidgetOverrideParam>CallFunc_BuildOverrideParams_Array                               (ReferenceParm, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetAdapteeWidget_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_KeyMappingPrompt_C*      K2Node_DynamicCast_AsUI_Key_Mapping_Prompt                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyPrompt_C::RefreshKeyPromptUI(TArray<struct FWidgetOverrideParam>& CallFunc_BuildOverrideParams_Array, class UUserWidget* CallFunc_GetAdapteeWidget_ReturnValue, class UUI_KeyMappingPrompt_C* K2Node_DynamicCast_AsUI_Key_Mapping_Prompt, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "RefreshKeyPromptUI");

	Params::UUI_KeyPrompt_C_RefreshKeyPromptUI_Params Parms{};

	Parms.CallFunc_BuildOverrideParams_Array = CallFunc_BuildOverrideParams_Array;
	Parms.CallFunc_GetAdapteeWidget_ReturnValue = CallFunc_GetAdapteeWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Key_Mapping_Prompt = K2Node_DynamicCast_AsUI_Key_Mapping_Prompt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.GetSplitActionName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SourceString                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      NewParam                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyPrompt_C::GetSplitActionName(const class FString& SourceString, class FString* NewParam, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "GetSplitActionName");

	Params::UUI_KeyPrompt_C_GetSplitActionName_Params Parms{};

	Parms.SourceString = SourceString;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideActionDescParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocTextID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetOverrideParam        WidgetOverrideParam                                              (Parm, OutParm)
// struct FWidgetOverrideParam        K2Node_MakeStruct_WidgetOverrideParam                            (None)

void UUI_KeyPrompt_C::BuildOverrideActionDescParam(int32 LocTextID, struct FWidgetOverrideParam* WidgetOverrideParam, const struct FWidgetOverrideParam& K2Node_MakeStruct_WidgetOverrideParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "BuildOverrideActionDescParam");

	Params::UUI_KeyPrompt_C_BuildOverrideActionDescParam_Params Parms{};

	Parms.LocTextID = LocTextID;
	Parms.K2Node_MakeStruct_WidgetOverrideParam = K2Node_MakeStruct_WidgetOverrideParam;

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetOverrideParam != nullptr)
		*WidgetOverrideParam = std::move(Parms.WidgetOverrideParam);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWidgetOverrideParam>Array                                                            (ConstParm, Parm, OutParm, HasGetValueTypeHash)
// class USolarTables_TablesReader*   CallFunc__A_GetExcelTableReader_TablesReader                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWidgetOverrideParam        CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam        (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSplitActionName_NewParam                             (ZeroConstructor, HasGetValueTypeHash)
// struct FWidgetOverrideParam        K2Node_MakeStruct_WidgetOverrideParam                            (None)
// bool                               CallFunc_TryGetRowData_HasKey                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSolarTablesData_InputMappingCallFunc_TryGetRowData_ReturnValue                               (ConstParm)
// struct FWidgetOverrideParam        CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam_1      (None)
// TArray<struct FWidgetOverrideParam>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)

void UUI_KeyPrompt_C::BuildOverrideParams(TArray<struct FWidgetOverrideParam>* Array, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FWidgetOverrideParam& CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetSplitActionName_NewParam, const struct FWidgetOverrideParam& K2Node_MakeStruct_WidgetOverrideParam, bool CallFunc_TryGetRowData_HasKey, const struct FSolarTablesData_InputMapping& CallFunc_TryGetRowData_ReturnValue, const struct FWidgetOverrideParam& CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam_1, TArray<struct FWidgetOverrideParam>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "BuildOverrideParams");

	Params::UUI_KeyPrompt_C_BuildOverrideParams_Params Parms{};

	Parms.CallFunc__A_GetExcelTableReader_TablesReader = CallFunc__A_GetExcelTableReader_TablesReader;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam = CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSplitActionName_NewParam = CallFunc_GetSplitActionName_NewParam;
	Parms.K2Node_MakeStruct_WidgetOverrideParam = K2Node_MakeStruct_WidgetOverrideParam;
	Parms.CallFunc_TryGetRowData_HasKey = CallFunc_TryGetRowData_HasKey;
	Parms.CallFunc_TryGetRowData_ReturnValue = CallFunc_TryGetRowData_ReturnValue;
	Parms.CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam_1 = CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.SetOperationType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_InputOperationType    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetAdapteeWidget_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_KeyMappingPrompt_C*      K2Node_DynamicCast_AsUI_Key_Mapping_Prompt                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyPrompt_C::SetOperationType(enum class E_InputOperationType Type, class UUserWidget* CallFunc_GetAdapteeWidget_ReturnValue, class UUI_KeyMappingPrompt_C* K2Node_DynamicCast_AsUI_Key_Mapping_Prompt, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "SetOperationType");

	Params::UUI_KeyPrompt_C_SetOperationType_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetAdapteeWidget_ReturnValue = CallFunc_GetAdapteeWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Key_Mapping_Prompt = K2Node_DynamicCast_AsUI_Key_Mapping_Prompt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "PreConstruct");

	Params::UUI_KeyPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_KeyPrompt_C::BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.ExecuteUbergraph_UI_KeyPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_KeyPrompt_C::ExecuteUbergraph_UI_KeyPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "ExecuteUbergraph_UI_KeyPrompt");

	Params::UUI_KeyPrompt_C_ExecuteUbergraph_UI_KeyPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_KeyPrompt.UI_KeyPrompt_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_KeyPrompt_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_KeyPrompt_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


