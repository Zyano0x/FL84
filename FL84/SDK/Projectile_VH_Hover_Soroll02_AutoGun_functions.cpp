#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_Hover_Soroll02_AutoGun.Projectile_VH_Hover_Soroll02_AutoGun_C
// (Actor)

class UClass* AProjectile_VH_Hover_Soroll02_AutoGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_Hover_Soroll02_AutoGun_C");

	return Clss;
}


// Projectile_VH_Hover_Soroll02_AutoGun_C Projectile_VH_Hover_Soroll02_AutoGun.Default__Projectile_VH_Hover_Soroll02_AutoGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_Hover_Soroll02_AutoGun_C* AProjectile_VH_Hover_Soroll02_AutoGun_C::GetDefaultObj()
{
	static class AProjectile_VH_Hover_Soroll02_AutoGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_Hover_Soroll02_AutoGun_C*>(AProjectile_VH_Hover_Soroll02_AutoGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


