#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C
// (None)

class UClass* UUI_Lobby_Mention_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Mention_Container_C");

	return Clss;
}


// UI_Lobby_Mention_Container_C UI_Lobby_Mention_Container.Default__UI_Lobby_Mention_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Mention_Container_C* UUI_Lobby_Mention_Container_C::GetDefaultObj()
{
	static class UUI_Lobby_Mention_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Mention_Container_C*>(UUI_Lobby_Mention_Container_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mention_Container_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mention_Container_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mention_Container_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mention_Container_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mention_Container_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mention_Container_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Mention_Container_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mention_Container_C", "GetModuleName");

	Params::UUI_Lobby_Mention_Container_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


