#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VehicleWeaponFire.GE_VehicleWeaponFire_C
// (None)

class UClass* UGE_VehicleWeaponFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VehicleWeaponFire_C");

	return Clss;
}


// GE_VehicleWeaponFire_C GE_VehicleWeaponFire.Default__GE_VehicleWeaponFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VehicleWeaponFire_C* UGE_VehicleWeaponFire_C::GetDefaultObj()
{
	static class UGE_VehicleWeaponFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VehicleWeaponFire_C*>(UGE_VehicleWeaponFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


