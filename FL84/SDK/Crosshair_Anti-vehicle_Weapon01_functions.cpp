#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_Anti-vehicle_Weapon01.Crosshair_Anti-vehicle_Weapon01_C
// (None)

class UClass* UCrosshair_AntiMinusvehicle_Weapon01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_Anti-vehicle_Weapon01_C");

	return Clss;
}


// Crosshair_Anti-vehicle_Weapon01_C Crosshair_Anti-vehicle_Weapon01.Default__Crosshair_Anti-vehicle_Weapon01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_AntiMinusvehicle_Weapon01_C* UCrosshair_AntiMinusvehicle_Weapon01_C::GetDefaultObj()
{
	static class UCrosshair_AntiMinusvehicle_Weapon01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_AntiMinusvehicle_Weapon01_C*>(UCrosshair_AntiMinusvehicle_Weapon01_C::StaticClass()->DefaultObject);

	return Default;
}

}


