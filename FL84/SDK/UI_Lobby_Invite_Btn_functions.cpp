#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C
// (None)

class UClass* UUI_Lobby_Invite_Btn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Invite_Btn_C");

	return Clss;
}


// UI_Lobby_Invite_Btn_C UI_Lobby_Invite_Btn.Default__UI_Lobby_Invite_Btn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Invite_Btn_C* UUI_Lobby_Invite_Btn_C::GetDefaultObj()
{
	static class UUI_Lobby_Invite_Btn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Invite_Btn_C*>(UUI_Lobby_Invite_Btn_C::StaticClass()->DefaultObject);

	return Default;
}

}


