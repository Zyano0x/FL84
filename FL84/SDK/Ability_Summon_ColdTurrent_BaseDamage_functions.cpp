#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Summon_ColdTurrent_BaseDamage.Ability_Summon_ColdTurrent_BaseDamage_C
// (Actor)

class UClass* AAbility_Summon_ColdTurrent_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Summon_ColdTurrent_BaseDamage_C");

	return Clss;
}


// Ability_Summon_ColdTurrent_BaseDamage_C Ability_Summon_ColdTurrent_BaseDamage.Default__Ability_Summon_ColdTurrent_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Summon_ColdTurrent_BaseDamage_C* AAbility_Summon_ColdTurrent_BaseDamage_C::GetDefaultObj()
{
	static class AAbility_Summon_ColdTurrent_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Summon_ColdTurrent_BaseDamage_C*>(AAbility_Summon_ColdTurrent_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


