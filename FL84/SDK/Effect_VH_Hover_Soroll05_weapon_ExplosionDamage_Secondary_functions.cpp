#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary.Effect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C
// (None)

class UClass* UEffect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C");

	return Clss;
}


// Effect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C Effect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary.Default__Effect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C* UEffect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C::GetDefaultObj()
{
	static class UEffect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C*>(UEffect_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C::StaticClass()->DefaultObject);

	return Default;
}

}


