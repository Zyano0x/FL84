#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Rank_Icon_Small.UI_Rank_Icon_Small_C
// (None)

class UClass* UUI_Rank_Icon_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Rank_Icon_Small_C");

	return Clss;
}


// UI_Rank_Icon_Small_C UI_Rank_Icon_Small.Default__UI_Rank_Icon_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Rank_Icon_Small_C* UUI_Rank_Icon_Small_C::GetDefaultObj()
{
	static class UUI_Rank_Icon_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Rank_Icon_Small_C*>(UUI_Rank_Icon_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIconCopy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::FormatViewJustIconCopy(int32 LevelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "FormatViewJustIconCopy");

	Params::UUI_Rank_Icon_Small_C_FormatViewJustIconCopy_Params Parms{};

	Parms.LevelID = LevelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Rank_Icon_Small_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Rank_Icon_Small_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Rank_Icon_Small_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewCopy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::FormatViewCopy(int32 LevelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "FormatViewCopy");

	Params::UUI_Rank_Icon_Small_C_FormatViewCopy_Params Parms{};

	Parms.LevelID = LevelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Rank_Icon_Small_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "GetModuleName");

	Params::UUI_Rank_Icon_Small_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::FormatViewJustIcon(int32 LevelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "FormatViewJustIcon");

	Params::UUI_Rank_Icon_Small_C_FormatViewJustIcon_Params Parms{};

	Parms.LevelID = LevelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetStar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Star                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::SetStar(bool Star, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "SetStar");

	Params::UUI_Rank_Icon_Small_C_SetStar_Params Parms{};

	Parms.Star = Star;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::FormatView(int32 LevelID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "FormatView");

	Params::UUI_Rank_Icon_Small_C_FormatView_Params Parms{};

	Parms.LevelID = LevelID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rank_Icon_Small_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "PreConstruct");

	Params::UUI_Rank_Icon_Small_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetRankIconView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::SetRankIconView(int32 Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "SetRankIconView");

	Params::UUI_Rank_Icon_Small_C_SetRankIconView_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.ExecuteUbergraph_UI_Rank_Icon_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Param                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rank_Icon_Small_C::ExecuteUbergraph_UI_Rank_Icon_Small(int32 EntryPoint, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Param, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_Small_C", "ExecuteUbergraph_UI_Rank_Icon_Small");

	Params::UUI_Rank_Icon_Small_C_ExecuteUbergraph_UI_Rank_Icon_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Param = K2Node_CustomEvent_Param;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


