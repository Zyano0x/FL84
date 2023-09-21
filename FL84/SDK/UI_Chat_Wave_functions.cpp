#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Chat_Wave.UI_Chat_Wave_C
// (None)

class UClass* UUI_Chat_Wave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Chat_Wave_C");

	return Clss;
}


// UI_Chat_Wave_C UI_Chat_Wave.Default__UI_Chat_Wave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Chat_Wave_C* UUI_Chat_Wave_C::GetDefaultObj()
{
	static class UUI_Chat_Wave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Chat_Wave_C*>(UUI_Chat_Wave_C::StaticClass()->DefaultObject);

	return Default;
}

}


