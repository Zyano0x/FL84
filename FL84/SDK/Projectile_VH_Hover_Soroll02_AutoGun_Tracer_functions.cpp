#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_Hover_Soroll02_AutoGun_Tracer.Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C
// (Actor)

class UClass* AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C");

	return Clss;
}


// Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C Projectile_VH_Hover_Soroll02_AutoGun_Tracer.Default__Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C* AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C::GetDefaultObj()
{
	static class AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C*>(AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C::StaticClass()->DefaultObject);

	return Default;
}

}


