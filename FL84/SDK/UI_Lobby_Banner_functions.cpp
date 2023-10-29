#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Banner.UI_Lobby_Banner_C
// (None)

class UClass* UUI_Lobby_Banner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Banner_C");

	return Clss;
}


// UI_Lobby_Banner_C UI_Lobby_Banner.Default__UI_Lobby_Banner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Banner_C* UUI_Lobby_Banner_C::GetDefaultObj()
{
	static class UUI_Lobby_Banner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Banner_C*>(UUI_Lobby_Banner_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Banner.UI_Lobby_Banner_C.OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUI_Lobby_Banner_C::OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269");

	Params::UUI_Lobby_Banner_C_OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUI_Lobby_Banner_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnMouseButtonDown");

	Params::UUI_Lobby_Banner_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Banner_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Banner_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUI_Lobby_Banner_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnMouseButtonUp");

	Params::UUI_Lobby_Banner_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Banner_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "GetModuleName");

	Params::UUI_Lobby_Banner_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.SetStateHD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TabLobbyItemState     State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TabLobbyItemState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Banner_C::SetStateHD(enum class E_TabLobbyItemState State, enum class E_TabLobbyItemState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "SetStateHD");

	Params::UUI_Lobby_Banner_C_SetStateHD_Params Parms{};

	Parms.State = State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Banner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "PreConstruct");

	Params::UUI_Lobby_Banner_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Lobby_Banner_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnMouseEnter");

	Params::UUI_Lobby_Banner_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Lobby_Banner_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "OnMouseLeave");

	Params::UUI_Lobby_Banner_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner.UI_Lobby_Banner_C.ExecuteUbergraph_UI_Lobby_Banner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlatformSwitch_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)

void UUI_Lobby_Banner_C::ExecuteUbergraph_UI_Lobby_Banner(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPlatformSwitch_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_C", "ExecuteUbergraph_UI_Lobby_Banner");

	Params::UUI_Lobby_Banner_C_ExecuteUbergraph_UI_Lobby_Banner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsPlatformSwitch_ReturnValue = CallFunc_IsPlatformSwitch_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


