#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_DownLoad.UI_Lobby_DownLoad_C
// (None)

class UClass* UUI_Lobby_DownLoad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_DownLoad_C");

	return Clss;
}


// UI_Lobby_DownLoad_C UI_Lobby_DownLoad.Default__UI_Lobby_DownLoad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_DownLoad_C* UUI_Lobby_DownLoad_C::GetDefaultObj()
{
	static class UUI_Lobby_DownLoad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_DownLoad_C*>(UUI_Lobby_DownLoad_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnClicked_1995724F4EC61C618A0E6D96DE9851FE
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_DownLoad_C::OnClicked_1995724F4EC61C618A0E6D96DE9851FE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "OnClicked_1995724F4EC61C618A0E6D96DE9851FE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnInitializedCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::OnInitializedCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "OnInitializedCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_DownLoad_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "GetModuleName");

	Params::UUI_Lobby_DownLoad_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnOpenDownloadList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::OnOpenDownloadList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "OnOpenDownloadList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_DownLoad_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "PreConstruct");

	Params::UUI_Lobby_DownLoad_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_DownLoad_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.ExecuteUbergraph_UI_Lobby_DownLoad
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_DownLoad_C::ExecuteUbergraph_UI_Lobby_DownLoad(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_DownLoad_C", "ExecuteUbergraph_UI_Lobby_DownLoad");

	Params::UUI_Lobby_DownLoad_C_ExecuteUbergraph_UI_Lobby_DownLoad_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


