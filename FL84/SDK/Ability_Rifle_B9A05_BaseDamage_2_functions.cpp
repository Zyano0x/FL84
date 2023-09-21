#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rifle_B9A05_BaseDamage_2.Ability_Rifle_B9A05_BaseDamage_2_C
// (Actor)

class UClass* AAbility_Rifle_B9A05_BaseDamage_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rifle_B9A05_BaseDamage_2_C");

	return Clss;
}


// Ability_Rifle_B9A05_BaseDamage_2_C Ability_Rifle_B9A05_BaseDamage_2.Default__Ability_Rifle_B9A05_BaseDamage_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Rifle_B9A05_BaseDamage_2_C* AAbility_Rifle_B9A05_BaseDamage_2_C::GetDefaultObj()
{
	static class AAbility_Rifle_B9A05_BaseDamage_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Rifle_B9A05_BaseDamage_2_C*>(AAbility_Rifle_B9A05_BaseDamage_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


