#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VehicleWeapon_ShapedGun.Effect_VehicleWeapon_ShapedGun_C
// (None)

class UClass* UEffect_VehicleWeapon_ShapedGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VehicleWeapon_ShapedGun_C");

	return Clss;
}


// Effect_VehicleWeapon_ShapedGun_C Effect_VehicleWeapon_ShapedGun.Default__Effect_VehicleWeapon_ShapedGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VehicleWeapon_ShapedGun_C* UEffect_VehicleWeapon_ShapedGun_C::GetDefaultObj()
{
	static class UEffect_VehicleWeapon_ShapedGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VehicleWeapon_ShapedGun_C*>(UEffect_VehicleWeapon_ShapedGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


