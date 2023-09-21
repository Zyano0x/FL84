#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VehicleWeapon_IronManLaser.Effect_VehicleWeapon_IronManLaser_C
// (None)

class UClass* UEffect_VehicleWeapon_IronManLaser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VehicleWeapon_IronManLaser_C");

	return Clss;
}


// Effect_VehicleWeapon_IronManLaser_C Effect_VehicleWeapon_IronManLaser.Default__Effect_VehicleWeapon_IronManLaser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VehicleWeapon_IronManLaser_C* UEffect_VehicleWeapon_IronManLaser_C::GetDefaultObj()
{
	static class UEffect_VehicleWeapon_IronManLaser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VehicleWeapon_IronManLaser_C*>(UEffect_VehicleWeapon_IronManLaser_C::StaticClass()->DefaultObject);

	return Default;
}

}


