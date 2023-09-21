#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_RedPacket.UI_Lobby_RedPacket_C
// (None)

class UClass* UUI_Lobby_RedPacket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_RedPacket_C");

	return Clss;
}


// UI_Lobby_RedPacket_C UI_Lobby_RedPacket.Default__UI_Lobby_RedPacket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_RedPacket_C* UUI_Lobby_RedPacket_C::GetDefaultObj()
{
	static class UUI_Lobby_RedPacket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_RedPacket_C*>(UUI_Lobby_RedPacket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_RedPacket_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_RedPacket_C", "GetModuleName");

	Params::UUI_Lobby_RedPacket_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


