#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C
// (None)

class UClass* UUI_Lobby_Mainmenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Mainmenu_C");

	return Clss;
}


// UI_Lobby_Mainmenu_C UI_Lobby_Mainmenu.Default__UI_Lobby_Mainmenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Mainmenu_C* UUI_Lobby_Mainmenu_C::GetDefaultObj()
{
	static class UUI_Lobby_Mainmenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Mainmenu_C*>(UUI_Lobby_Mainmenu_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnClicked_1534DCB14154388DC5E1EDB108CB6E46
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Mainmenu_C::OnClicked_1534DCB14154388DC5E1EDB108CB6E46()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "OnClicked_1534DCB14154388DC5E1EDB108CB6E46");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnClicked_440A34A3416189A372743CAAFD008544
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Mainmenu_C::OnClicked_440A34A3416189A372743CAAFD008544()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "OnClicked_440A34A3416189A372743CAAFD008544");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnClicked_6CD601A845F65E66FA871FA74DE41C47
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Mainmenu_C::OnClicked_6CD601A845F65E66FA871FA74DE41C47()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "OnClicked_6CD601A845F65E66FA871FA74DE41C47");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mainmenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mainmenu_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mainmenu_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mainmenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Mainmenu_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "GetModuleName");

	Params::UUI_Lobby_Mainmenu_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Mainmenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "PreConstruct");

	Params::UUI_Lobby_Mainmenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.ExecuteUbergraph_UI_Lobby_Mainmenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Mainmenu_C::ExecuteUbergraph_UI_Lobby_Mainmenu(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mainmenu_C", "ExecuteUbergraph_UI_Lobby_Mainmenu");

	Params::UUI_Lobby_Mainmenu_C_ExecuteUbergraph_UI_Lobby_Mainmenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


