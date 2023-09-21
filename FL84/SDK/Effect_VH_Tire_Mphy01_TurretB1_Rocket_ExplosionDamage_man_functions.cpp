#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C
// (None)

class UClass* UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C");

	return Clss;
}


// Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Default__Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C* UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::GetDefaultObj()
{
	static class UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C*>(UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::StaticClass()->DefaultObject);

	return Default;
}

}


