#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Emoji_Container.UI_Emoji_Container_C
// (None)

class UClass* UUI_Emoji_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Emoji_Container_C");

	return Clss;
}


// UI_Emoji_Container_C UI_Emoji_Container.Default__UI_Emoji_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Emoji_Container_C* UUI_Emoji_Container_C::GetDefaultObj()
{
	static class UUI_Emoji_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Emoji_Container_C*>(UUI_Emoji_Container_C::StaticClass()->DefaultObject);

	return Default;
}

}


