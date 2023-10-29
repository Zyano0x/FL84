#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_Keyboard.UI_Component_Keyboard_C
// (None)

class UClass* UUI_Component_Keyboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_Keyboard_C");

	return Clss;
}


// UI_Component_Keyboard_C UI_Component_Keyboard.Default__UI_Component_Keyboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_Keyboard_C* UUI_Component_Keyboard_C::GetDefaultObj()
{
	static class UUI_Component_Keyboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_Keyboard_C*>(UUI_Component_Keyboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Keyboard_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Keyboard_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.ConstructCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Keyboard_C::ConstructCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "ConstructCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Component_Keyboard_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "GetModuleName");

	Params::UUI_Component_Keyboard_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.BP_RefreshKeyboardUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  InTxtKey                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InImgBg                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    InSizeBox                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      LocalImgBg                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    LocalSizeBox                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  LocalTxtKey                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Component_Keyboard_C::BP_RefreshKeyboardUI(class UTextBlock* InTxtKey, class UImage* InImgBg, class USizeBox* InSizeBox, class UImage* LocalImgBg, class USizeBox* LocalSizeBox, class UTextBlock* LocalTxtKey, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "BP_RefreshKeyboardUI");

	Params::UUI_Component_Keyboard_C_BP_RefreshKeyboardUI_Params Parms{};

	Parms.InTxtKey = InTxtKey;
	Parms.InImgBg = InImgBg;
	Parms.InSizeBox = InSizeBox;
	Parms.LocalImgBg = LocalImgBg;
	Parms.LocalSizeBox = LocalSizeBox;
	Parms.LocalTxtKey = LocalTxtKey;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Keyboard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "PreConstruct");

	Params::UUI_Component_Keyboard_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Keyboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Keyboard.UI_Component_Keyboard_C.ExecuteUbergraph_UI_Component_Keyboard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Keyboard_C::ExecuteUbergraph_UI_Component_Keyboard(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Keyboard_C", "ExecuteUbergraph_UI_Component_Keyboard");

	Params::UUI_Component_Keyboard_C_ExecuteUbergraph_UI_Component_Keyboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


