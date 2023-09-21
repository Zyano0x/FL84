#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_VehicleWeaponFire.GA_VehicleWeaponFire_C
// (None)

class UClass* UGA_VehicleWeaponFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_VehicleWeaponFire_C");

	return Clss;
}


// GA_VehicleWeaponFire_C GA_VehicleWeaponFire.Default__GA_VehicleWeaponFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_VehicleWeaponFire_C* UGA_VehicleWeaponFire_C::GetDefaultObj()
{
	static class UGA_VehicleWeaponFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_VehicleWeaponFire_C*>(UGA_VehicleWeaponFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


