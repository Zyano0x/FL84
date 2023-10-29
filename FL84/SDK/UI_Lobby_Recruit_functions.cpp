#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Recruit.UI_Lobby_Recruit_C
// (None)

class UClass* UUI_Lobby_Recruit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Recruit_C");

	return Clss;
}


// UI_Lobby_Recruit_C UI_Lobby_Recruit.Default__UI_Lobby_Recruit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Recruit_C* UUI_Lobby_Recruit_C::GetDefaultObj()
{
	static class UUI_Lobby_Recruit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Recruit_C*>(UUI_Lobby_Recruit_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_43842C5B4C43943549350E8BD9407C53
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Recruit_C::OnClicked_43842C5B4C43943549350E8BD9407C53()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "OnClicked_43842C5B4C43943549350E8BD9407C53");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_E3C06A6145013BE28F6449B93DBD4FE7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Recruit_C::OnClicked_E3C06A6145013BE28F6449B93DBD4FE7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "OnClicked_E3C06A6145013BE28F6449B93DBD4FE7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Recruit_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Recruit_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Recruit_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ConstructCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Recruit_C::ConstructCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "ConstructCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Recruit_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "GetModuleName");

	Params::UUI_Lobby_Recruit_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Size_H                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Size_W                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Recruit_C::SetSize(int32 Size_H, int32 Size_W, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "SetSize");

	Params::UUI_Lobby_Recruit_C_SetSize_Params Parms{};

	Parms.Size_H = Size_H;
	Parms.Size_W = Size_W;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetStateDesktop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Type_State_Desktop    StateDesktopInvite                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    StateDesktopRecruit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_Type_State_Desktop    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UUI_Lobby_Recruit_C::SetStateDesktop(enum class E_Type_State_Desktop StateDesktopInvite, enum class E_Type_State_Desktop StateDesktopRecruit, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, enum class E_Type_State_Desktop Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, enum class E_Type_State_Desktop Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, enum class E_Type_State_Desktop Temp_byte_Variable_2, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& K2Node_Select_Default_2, enum class E_Type_State_Desktop Temp_byte_Variable_3, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "SetStateDesktop");

	Params::UUI_Lobby_Recruit_C_SetStateDesktop_Params Parms{};

	Parms.StateDesktopInvite = StateDesktopInvite;
	Parms.StateDesktopRecruit = StateDesktopRecruit;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Recruit_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "PreConstruct");

	Params::UUI_Lobby_Recruit_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Recruit_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Recruit_C::ExecuteUbergraph_UI_Lobby_Recruit(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Recruit_C", "ExecuteUbergraph_UI_Lobby_Recruit");

	Params::UUI_Lobby_Recruit_C_ExecuteUbergraph_UI_Lobby_Recruit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


