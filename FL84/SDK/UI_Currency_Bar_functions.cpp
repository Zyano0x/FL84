#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Currency_Bar.UI_Currency_Bar_C
// (None)

class UClass* UUI_Currency_Bar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Currency_Bar_C");

	return Clss;
}


// UI_Currency_Bar_C UI_Currency_Bar.Default__UI_Currency_Bar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Currency_Bar_C* UUI_Currency_Bar_C::GetDefaultObj()
{
	static class UUI_Currency_Bar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Currency_Bar_C*>(UUI_Currency_Bar_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_6B09B2174F316CE0B145C8BFF277B5F2
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Currency_Bar_C::OnClicked_6B09B2174F316CE0B145C8BFF277B5F2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "OnClicked_6B09B2174F316CE0B145C8BFF277B5F2");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_D197804C45DE5ED3FD83FD9299D53A64
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Currency_Bar_C::OnClicked_D197804C45DE5ED3FD83FD9299D53A64()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "OnClicked_D197804C45DE5ED3FD83FD9299D53A64");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_EB2766254C8F7ED90296198E81D7A2B7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Currency_Bar_C::OnClicked_EB2766254C8F7ED90296198E81D7A2B7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "OnClicked_EB2766254C8F7ED90296198E81D7A2B7");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_74EE3F98440B94E3B613429617FBA0D7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Currency_Bar_C::OnClicked_74EE3F98440B94E3B613429617FBA0D7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "OnClicked_74EE3F98440B94E3B613429617FBA0D7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Currency_Bar_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Currency_Bar_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Currency_Bar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Currency_Bar_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "GetModuleName");

	Params::UUI_Currency_Bar_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.SetStateDesktop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Type_State_Desktop    StateDesktopDiamond                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    StateDesktopVip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Currency_Bar_C::SetStateDesktop(enum class E_Type_State_Desktop StateDesktopDiamond, enum class E_Type_State_Desktop StateDesktopVip, enum class E_Type_State_Desktop Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class E_Type_State_Desktop Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "SetStateDesktop");

	Params::UUI_Currency_Bar_C_SetStateDesktop_Params Parms{};

	Parms.StateDesktopDiamond = StateDesktopDiamond;
	Parms.StateDesktopVip = StateDesktopVip;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Currency_Bar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "PreConstruct");

	Params::UUI_Currency_Bar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Currency_Bar.UI_Currency_Bar_C.ExecuteUbergraph_UI_Currency_Bar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Currency_Bar_C::ExecuteUbergraph_UI_Currency_Bar(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Currency_Bar_C", "ExecuteUbergraph_UI_Currency_Bar");

	Params::UUI_Currency_Bar_C_ExecuteUbergraph_UI_Currency_Bar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


