#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_CarFireCD.HUD_CarFireCD_C
// (None)

class UClass* UHUD_CarFireCD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_CarFireCD_C");

	return Clss;
}


// HUD_CarFireCD_C HUD_CarFireCD.Default__HUD_CarFireCD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_CarFireCD_C* UHUD_CarFireCD_C::GetDefaultObj()
{
	static class UHUD_CarFireCD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_CarFireCD_C*>(UHUD_CarFireCD_C::StaticClass()->DefaultObject);

	return Default;
}

}


