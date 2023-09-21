#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_Hover_WL04_StickyBomb.Projectile_VH_Hover_WL04_StickyBomb_C
// (Actor)

class UClass* AProjectile_VH_Hover_WL04_StickyBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_Hover_WL04_StickyBomb_C");

	return Clss;
}


// Projectile_VH_Hover_WL04_StickyBomb_C Projectile_VH_Hover_WL04_StickyBomb.Default__Projectile_VH_Hover_WL04_StickyBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_Hover_WL04_StickyBomb_C* AProjectile_VH_Hover_WL04_StickyBomb_C::GetDefaultObj()
{
	static class AProjectile_VH_Hover_WL04_StickyBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_Hover_WL04_StickyBomb_C*>(AProjectile_VH_Hover_WL04_StickyBomb_C::StaticClass()->DefaultObject);

	return Default;
}

}


