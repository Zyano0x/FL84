#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C
// (None)

class UClass* UUI_Lobby_Sanctuary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Sanctuary_C");

	return Clss;
}


// UI_Lobby_Sanctuary_C UI_Lobby_Sanctuary.Default__UI_Lobby_Sanctuary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Sanctuary_C* UUI_Lobby_Sanctuary_C::GetDefaultObj()
{
	static class UUI_Lobby_Sanctuary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Sanctuary_C*>(UUI_Lobby_Sanctuary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Sanctuary_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Sanctuary_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Sanctuary_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ConstructCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Sanctuary_C::ConstructCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "ConstructCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Sanctuary_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "GetModuleName");

	Params::UUI_Lobby_Sanctuary_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInLocked                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bInMatching                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Sanctuary_C::BP_RefreshSanctuaryUI(bool bInLocked, bool bInMatching, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_4, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_7, float Temp_float_Variable_2, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, float K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "BP_RefreshSanctuaryUI");

	Params::UUI_Lobby_Sanctuary_C_BP_RefreshSanctuaryUI_Params Parms{};

	Parms.bInLocked = bInLocked;
	Parms.bInMatching = bInMatching;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Sanctuary_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "PreConstruct");

	Params::UUI_Lobby_Sanctuary_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Sanctuary_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Sanctuary_C::ExecuteUbergraph_UI_Lobby_Sanctuary(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Sanctuary_C", "ExecuteUbergraph_UI_Lobby_Sanctuary");

	Params::UUI_Lobby_Sanctuary_C_ExecuteUbergraph_UI_Lobby_Sanctuary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


