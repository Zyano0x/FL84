#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_TeamNum.UI_Component_TeamNum_C
// (None)

class UClass* UUI_Component_TeamNum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_TeamNum_C");

	return Clss;
}


// UI_Component_TeamNum_C UI_Component_TeamNum.Default__UI_Component_TeamNum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_TeamNum_C* UUI_Component_TeamNum_C::GetDefaultObj()
{
	static class UUI_Component_TeamNum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_TeamNum_C*>(UUI_Component_TeamNum_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Component_TeamNum_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Component_TeamNum_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_TeamNum_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Component_TeamNum_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Component_TeamNum_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "GetModuleName");

	Params::UUI_Component_TeamNum_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.Set Team Num
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Type_TeamNum          Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_TeamNum          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_TeamNum_C::Set_Team_Num(enum class E_Type_TeamNum Index, enum class E_Type_TeamNum Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "Set Team Num");

	Params::UUI_Component_TeamNum_C_Set_Team_Num_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Type_TeamNum          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_TeamNum          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)

void UUI_Component_TeamNum_C::SetSelected(bool Selected, enum class E_Type_TeamNum Temp_byte_Variable, enum class E_Type_TeamNum Temp_byte_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "SetSelected");

	Params::UUI_Component_TeamNum_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_TeamNum_C::SetColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "SetColor");

	Params::UUI_Component_TeamNum_C_SetColor_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_TeamNum_C::SetType(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "SetType");

	Params::UUI_Component_TeamNum_C_SetType_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_TeamNum_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "PreConstruct");

	Params::UUI_Component_TeamNum_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_TeamNum.UI_Component_TeamNum_C.ExecuteUbergraph_UI_Component_TeamNum
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_TeamNum_C::ExecuteUbergraph_UI_Component_TeamNum(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_TeamNum_C", "ExecuteUbergraph_UI_Component_TeamNum");

	Params::UUI_Component_TeamNum_C_ExecuteUbergraph_UI_Component_TeamNum_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


