#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Bubble_Container.UI_Lobby_Bubble_Container_C
// (None)

class UClass* UUI_Lobby_Bubble_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Bubble_Container_C");

	return Clss;
}


// UI_Lobby_Bubble_Container_C UI_Lobby_Bubble_Container.Default__UI_Lobby_Bubble_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Bubble_Container_C* UUI_Lobby_Bubble_Container_C::GetDefaultObj()
{
	static class UUI_Lobby_Bubble_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Bubble_Container_C*>(UUI_Lobby_Bubble_Container_C::StaticClass()->DefaultObject);

	return Default;
}

}


