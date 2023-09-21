#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_SniperEPsm02_Primary.Projectile_SniperEPsm02_Primary_C
// (Actor)

class UClass* AProjectile_SniperEPsm02_Primary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_SniperEPsm02_Primary_C");

	return Clss;
}


// Projectile_SniperEPsm02_Primary_C Projectile_SniperEPsm02_Primary.Default__Projectile_SniperEPsm02_Primary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_SniperEPsm02_Primary_C* AProjectile_SniperEPsm02_Primary_C::GetDefaultObj()
{
	static class AProjectile_SniperEPsm02_Primary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_SniperEPsm02_Primary_C*>(AProjectile_SniperEPsm02_Primary_C::StaticClass()->DefaultObject);

	return Default;
}

}


