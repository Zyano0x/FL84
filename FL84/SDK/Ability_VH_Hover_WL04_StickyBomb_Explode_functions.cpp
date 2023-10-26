#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C
// (Actor)

class UClass* AAbility_VH_Hover_WL04_StickyBomb_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VH_Hover_WL04_StickyBomb_Explode_C");

	return Clss;
}


// Ability_VH_Hover_WL04_StickyBomb_Explode_C Ability_VH_Hover_WL04_StickyBomb_Explode.Default__Ability_VH_Hover_WL04_StickyBomb_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VH_Hover_WL04_StickyBomb_Explode_C* AAbility_VH_Hover_WL04_StickyBomb_Explode_C::GetDefaultObj()
{
	static class AAbility_VH_Hover_WL04_StickyBomb_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VH_Hover_WL04_StickyBomb_Explode_C*>(AAbility_VH_Hover_WL04_StickyBomb_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


