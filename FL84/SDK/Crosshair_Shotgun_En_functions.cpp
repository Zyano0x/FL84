#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_Shotgun_En.Crosshair_Shotgun_En_C
// (None)

class UClass* UCrosshair_Shotgun_En_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_Shotgun_En_C");

	return Clss;
}


// Crosshair_Shotgun_En_C Crosshair_Shotgun_En.Default__Crosshair_Shotgun_En_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_Shotgun_En_C* UCrosshair_Shotgun_En_C::GetDefaultObj()
{
	static class UCrosshair_Shotgun_En_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_Shotgun_En_C*>(UCrosshair_Shotgun_En_C::StaticClass()->DefaultObject);

	return Default;
}

}


