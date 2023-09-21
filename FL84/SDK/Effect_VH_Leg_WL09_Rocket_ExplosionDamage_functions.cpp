#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VH_Leg_WL09_Rocket_ExplosionDamage.Effect_VH_Leg_WL09_Rocket_ExplosionDamage_C
// (None)

class UClass* UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VH_Leg_WL09_Rocket_ExplosionDamage_C");

	return Clss;
}


// Effect_VH_Leg_WL09_Rocket_ExplosionDamage_C Effect_VH_Leg_WL09_Rocket_ExplosionDamage.Default__Effect_VH_Leg_WL09_Rocket_ExplosionDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C* UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C::GetDefaultObj()
{
	static class UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C*>(UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


