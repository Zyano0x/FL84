#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Video_Hunt.UI_Lobby_Video_Hunt_C
// (None)

class UClass* UUI_Lobby_Video_Hunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Video_Hunt_C");

	return Clss;
}


// UI_Lobby_Video_Hunt_C UI_Lobby_Video_Hunt.Default__UI_Lobby_Video_Hunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Video_Hunt_C* UUI_Lobby_Video_Hunt_C::GetDefaultObj()
{
	static class UUI_Lobby_Video_Hunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Video_Hunt_C*>(UUI_Lobby_Video_Hunt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_Video_Hunt.UI_Lobby_Video_Hunt_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Video_Hunt_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Video_Hunt_C", "GetModuleName");

	Params::UUI_Lobby_Video_Hunt_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


