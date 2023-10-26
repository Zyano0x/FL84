#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_PlayerName.UI_Component_PlayerName_C
// (None)

class UClass* UUI_Component_PlayerName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_PlayerName_C");

	return Clss;
}


// UI_Component_PlayerName_C UI_Component_PlayerName.Default__UI_Component_PlayerName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_PlayerName_C* UUI_Component_PlayerName_C::GetDefaultObj()
{
	static class UUI_Component_PlayerName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_PlayerName_C*>(UUI_Component_PlayerName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsKilled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetIsKilled(bool IsKilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetIsKilled");

	Params::UUI_Component_PlayerName_C_SetIsKilled_Params Parms{};

	Parms.IsKilled = IsKilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsCheater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCheater                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetIsCheater(bool bCheater)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetIsCheater");

	Params::UUI_Component_PlayerName_C_SetIsCheater_Params Parms{};

	Parms.bCheater = bCheater;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVipStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Type_PlayerName_Vip_ColorVIP_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_PlayerName_C::SetVipStyle(enum class E_Type_PlayerName_Vip_Color VIP_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetVipStyle");

	Params::UUI_Component_PlayerName_C_SetVipStyle_Params Parms{};

	Parms.VIP_Type = VIP_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerNameAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NickName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               bCheat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Type_PlayerName_Vip_ColorVIP_Type                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bKilled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetPlayerNameAndStyle(const class FString& NickName, bool bCheat, enum class E_Type_PlayerName_Vip_Color VIP_Type, bool bKilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetPlayerNameAndStyle");

	Params::UUI_Component_PlayerName_C_SetPlayerNameAndStyle_Params Parms{};

	Parms.NickName = NickName;
	Parms.bCheat = bCheat;
	Parms.VIP_Type = VIP_Type;
	Parms.bKilled = bKilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NickName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Component_PlayerName_C::SetPlayerName(const class FString& NickName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetPlayerName");

	Params::UUI_Component_PlayerName_C_SetPlayerName_Params Parms{};

	Parms.NickName = NickName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDefaultStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSpecialSelf                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetDefaultStyle(bool bSpecialSelf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetDefaultStyle");

	Params::UUI_Component_PlayerName_C_SetDefaultStyle_Params Parms{};

	Parms.bSpecialSelf = bSpecialSelf;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetNameStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCheater                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_Type_PlayerName_Vip_ColorVIP_State                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bKilled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FS_VIP_TxtInfo              CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetNameStyle(bool bCheater, enum class E_Type_PlayerName_Vip_Color VIP_State, bool bKilled, const struct FS_VIP_TxtInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetNameStyle");

	Params::UUI_Component_PlayerName_C_SetNameStyle_Params Parms{};

	Parms.bCheater = bCheater;
	Parms.VIP_State = VIP_State;
	Parms.bKilled = bKilled;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "PreConstruct");

	Params::UUI_Component_PlayerName_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_PlayerName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.ReSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Component_PlayerName_C::ReSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "ReSize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.UpdatePlayerNameAndStyle
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      NickName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              VipType                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCheat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bKilled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::UpdatePlayerNameAndStyle(const class FString& NickName, uint8 VipType, bool bCheat, bool bKilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "UpdatePlayerNameAndStyle");

	Params::UUI_Component_PlayerName_C_UpdatePlayerNameAndStyle_Params Parms{};

	Parms.NickName = NickName;
	Parms.VipType = VipType;
	Parms.bCheat = bCheat;
	Parms.bKilled = bKilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetText
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_Component_PlayerName_C::SetText(const class FString& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetText");

	Params::UUI_Component_PlayerName_C_SetText_Params Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetTextColorAndOpacity
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FSlateColor                 InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Component_PlayerName_C::SetTextColorAndOpacity(const struct FSlateColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetTextColorAndOpacity");

	Params::UUI_Component_PlayerName_C_SetTextColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetStyle
// (Event, Public, BlueprintEvent)
// Parameters:
// uint8                              VipType                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCheat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bKilled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetStyle(uint8 VipType, bool bCheat, bool bKilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetStyle");

	Params::UUI_Component_PlayerName_C_SetStyle_Params Parms{};

	Parms.VipType = VipType;
	Parms.bCheat = bCheat;
	Parms.bKilled = bKilled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDeath
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bDeath                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetDeath(bool bDeath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetDeath");

	Params::UUI_Component_PlayerName_C_SetDeath_Params Parms{};

	Parms.bDeath = bDeath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVip
// (Event, Public, BlueprintEvent)
// Parameters:
// uint8                              VipType                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_PlayerName_C::SetVip(uint8 VipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetVip");

	Params::UUI_Component_PlayerName_C_SetVip_Params Parms{};

	Parms.VipType = VipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetCheater
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCheat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_PlayerName_C::SetCheater(bool bCheat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "SetCheater");

	Params::UUI_Component_PlayerName_C_SetCheater_Params Parms{};

	Parms.bCheat = bCheat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_PlayerName.UI_Component_PlayerName_C.ExecuteUbergraph_UI_Component_PlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCheat                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FString                      K2Node_Event_NickName                                            (ZeroConstructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_VipType_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCheat_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bKilled_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_Content                                             (ZeroConstructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Event_InColor                                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_Event_VipType_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCheat_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bKilled                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDeath                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_Event_VipType                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Component_PlayerName_C::ExecuteUbergraph_UI_Component_PlayerName(int32 EntryPoint, bool K2Node_Event_bCheat, bool K2Node_Event_IsDesignTime, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& K2Node_Event_NickName, uint8 K2Node_Event_VipType_2, bool K2Node_Event_bCheat_2, bool K2Node_Event_bKilled_1, const class FString& K2Node_Event_Content, uint8 CallFunc_GetValidValue_ReturnValue, const struct FSlateColor& K2Node_Event_InColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 K2Node_Event_VipType_1, bool K2Node_Event_bCheat_1, bool K2Node_Event_bKilled, uint8 CallFunc_GetValidValue_ReturnValue_1, bool K2Node_Event_bDeath, uint8 K2Node_Event_VipType, uint8 CallFunc_GetValidValue_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_PlayerName_C", "ExecuteUbergraph_UI_Component_PlayerName");

	Params::UUI_Component_PlayerName_C_ExecuteUbergraph_UI_Component_PlayerName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bCheat = K2Node_Event_bCheat;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_Event_NickName = K2Node_Event_NickName;
	Parms.K2Node_Event_VipType_2 = K2Node_Event_VipType_2;
	Parms.K2Node_Event_bCheat_2 = K2Node_Event_bCheat_2;
	Parms.K2Node_Event_bKilled_1 = K2Node_Event_bKilled_1;
	Parms.K2Node_Event_Content = K2Node_Event_Content;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_Event_InColor = K2Node_Event_InColor;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_VipType_1 = K2Node_Event_VipType_1;
	Parms.K2Node_Event_bCheat_1 = K2Node_Event_bCheat_1;
	Parms.K2Node_Event_bKilled = K2Node_Event_bKilled;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_Event_bDeath = K2Node_Event_bDeath;
	Parms.K2Node_Event_VipType = K2Node_Event_VipType;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


