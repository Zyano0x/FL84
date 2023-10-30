#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Common_WidgetConfig.UI_Common_WidgetConfig_C
// (None)

class UClass* UUI_Common_WidgetConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Common_WidgetConfig_C");

	return Clss;
}


// UI_Common_WidgetConfig_C UI_Common_WidgetConfig.Default__UI_Common_WidgetConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Common_WidgetConfig_C* UUI_Common_WidgetConfig_C::GetDefaultObj()
{
	static class UUI_Common_WidgetConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Common_WidgetConfig_C*>(UUI_Common_WidgetConfig_C::StaticClass()->DefaultObject);

	return Default;
}

}


