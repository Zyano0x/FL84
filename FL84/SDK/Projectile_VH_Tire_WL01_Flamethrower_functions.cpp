#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_Tire_WL01_Flamethrower.Projectile_VH_Tire_WL01_Flamethrower_C
// (Actor)

class UClass* AProjectile_VH_Tire_WL01_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_Tire_WL01_Flamethrower_C");

	return Clss;
}


// Projectile_VH_Tire_WL01_Flamethrower_C Projectile_VH_Tire_WL01_Flamethrower.Default__Projectile_VH_Tire_WL01_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_Tire_WL01_Flamethrower_C* AProjectile_VH_Tire_WL01_Flamethrower_C::GetDefaultObj()
{
	static class AProjectile_VH_Tire_WL01_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_Tire_WL01_Flamethrower_C*>(AProjectile_VH_Tire_WL01_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


