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

}


