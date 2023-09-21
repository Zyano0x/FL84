#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rifle_B9A03_BaseDamage.Ability_Rifle_B9A03_BaseDamage_C
// (Actor)

class UClass* AAbility_Rifle_B9A03_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rifle_B9A03_BaseDamage_C");

	return Clss;
}


// Ability_Rifle_B9A03_BaseDamage_C Ability_Rifle_B9A03_BaseDamage.Default__Ability_Rifle_B9A03_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Rifle_B9A03_BaseDamage_C* AAbility_Rifle_B9A03_BaseDamage_C::GetDefaultObj()
{
	static class AAbility_Rifle_B9A03_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Rifle_B9A03_BaseDamage_C*>(AAbility_Rifle_B9A03_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


