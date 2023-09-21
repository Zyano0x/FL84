#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_TransTL_WL07_Flamethrower_New.Projectile_VH_TransTL_WL07_Flamethrower_New_C
// (Actor)

class UClass* AProjectile_VH_TransTL_WL07_Flamethrower_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_TransTL_WL07_Flamethrower_New_C");

	return Clss;
}


// Projectile_VH_TransTL_WL07_Flamethrower_New_C Projectile_VH_TransTL_WL07_Flamethrower_New.Default__Projectile_VH_TransTL_WL07_Flamethrower_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_TransTL_WL07_Flamethrower_New_C* AProjectile_VH_TransTL_WL07_Flamethrower_New_C::GetDefaultObj()
{
	static class AProjectile_VH_TransTL_WL07_Flamethrower_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_TransTL_WL07_Flamethrower_New_C*>(AProjectile_VH_TransTL_WL07_Flamethrower_New_C::StaticClass()->DefaultObject);

	return Default;
}

}


