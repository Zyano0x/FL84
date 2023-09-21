#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VehicleWeapon_IronManLaser.Ability_VehicleWeapon_IronManLaser_C
// (Actor)

class UClass* AAbility_VehicleWeapon_IronManLaser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VehicleWeapon_IronManLaser_C");

	return Clss;
}


// Ability_VehicleWeapon_IronManLaser_C Ability_VehicleWeapon_IronManLaser.Default__Ability_VehicleWeapon_IronManLaser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VehicleWeapon_IronManLaser_C* AAbility_VehicleWeapon_IronManLaser_C::GetDefaultObj()
{
	static class AAbility_VehicleWeapon_IronManLaser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VehicleWeapon_IronManLaser_C*>(AAbility_VehicleWeapon_IronManLaser_C::StaticClass()->DefaultObject);

	return Default;
}

}


