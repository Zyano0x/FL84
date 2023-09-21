#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_Hover_Soroll03_TurretA1.Projectile_VH_Hover_Soroll03_TurretA1_C
// (Actor)

class UClass* AProjectile_VH_Hover_Soroll03_TurretA1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_Hover_Soroll03_TurretA1_C");

	return Clss;
}


// Projectile_VH_Hover_Soroll03_TurretA1_C Projectile_VH_Hover_Soroll03_TurretA1.Default__Projectile_VH_Hover_Soroll03_TurretA1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_Hover_Soroll03_TurretA1_C* AProjectile_VH_Hover_Soroll03_TurretA1_C::GetDefaultObj()
{
	static class AProjectile_VH_Hover_Soroll03_TurretA1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_Hover_Soroll03_TurretA1_C*>(AProjectile_VH_Hover_Soroll03_TurretA1_C::StaticClass()->DefaultObject);

	return Default;
}

}


