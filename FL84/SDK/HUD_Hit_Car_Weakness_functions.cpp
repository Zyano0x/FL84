#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_Hit_Car_Weakness.HUD_Hit_Car_Weakness_C
// (None)

class UClass* UHUD_Hit_Car_Weakness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_Hit_Car_Weakness_C");

	return Clss;
}


// HUD_Hit_Car_Weakness_C HUD_Hit_Car_Weakness.Default__HUD_Hit_Car_Weakness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_Hit_Car_Weakness_C* UHUD_Hit_Car_Weakness_C::GetDefaultObj()
{
	static class UHUD_Hit_Car_Weakness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_Hit_Car_Weakness_C*>(UHUD_Hit_Car_Weakness_C::StaticClass()->DefaultObject);

	return Default;
}

}


