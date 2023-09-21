#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_SniperPrimary.Projectile_SniperPrimary_C
// (Actor)

class UClass* AProjectile_SniperPrimary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_SniperPrimary_C");

	return Clss;
}


// Projectile_SniperPrimary_C Projectile_SniperPrimary.Default__Projectile_SniperPrimary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_SniperPrimary_C* AProjectile_SniperPrimary_C::GetDefaultObj()
{
	static class AProjectile_SniperPrimary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_SniperPrimary_C*>(AProjectile_SniperPrimary_C::StaticClass()->DefaultObject);

	return Default;
}

}


