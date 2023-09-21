#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Customize_Data.UI_Customize_Data_C
// (None)

class UClass* UUI_Customize_Data_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Customize_Data_C");

	return Clss;
}


// UI_Customize_Data_C UI_Customize_Data.Default__UI_Customize_Data_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Customize_Data_C* UUI_Customize_Data_C::GetDefaultObj()
{
	static class UUI_Customize_Data_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Customize_Data_C*>(UUI_Customize_Data_C::StaticClass()->DefaultObject);

	return Default;
}

}


