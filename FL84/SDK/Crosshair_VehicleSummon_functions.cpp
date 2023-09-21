#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_VehicleSummon.Crosshair_VehicleSummon_C
// (None)

class UClass* UCrosshair_VehicleSummon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_VehicleSummon_C");

	return Clss;
}


// Crosshair_VehicleSummon_C Crosshair_VehicleSummon.Default__Crosshair_VehicleSummon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_VehicleSummon_C* UCrosshair_VehicleSummon_C::GetDefaultObj()
{
	static class UCrosshair_VehicleSummon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_VehicleSummon_C*>(UCrosshair_VehicleSummon_C::StaticClass()->DefaultObject);

	return Default;
}

}


