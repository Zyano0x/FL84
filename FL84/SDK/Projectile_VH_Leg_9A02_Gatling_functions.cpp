#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_Leg_9A02_Gatling.Projectile_VH_Leg_9A02_Gatling_C
// (Actor)

class UClass* AProjectile_VH_Leg_9A02_Gatling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_Leg_9A02_Gatling_C");

	return Clss;
}


// Projectile_VH_Leg_9A02_Gatling_C Projectile_VH_Leg_9A02_Gatling.Default__Projectile_VH_Leg_9A02_Gatling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_Leg_9A02_Gatling_C* AProjectile_VH_Leg_9A02_Gatling_C::GetDefaultObj()
{
	static class AProjectile_VH_Leg_9A02_Gatling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_Leg_9A02_Gatling_C*>(AProjectile_VH_Leg_9A02_Gatling_C::StaticClass()->DefaultObject);

	return Default;
}

}


