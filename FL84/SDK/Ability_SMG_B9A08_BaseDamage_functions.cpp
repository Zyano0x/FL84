#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_SMG_B9A08_BaseDamage.Ability_SMG_B9A08_BaseDamage_C
// (Actor)

class UClass* AAbility_SMG_B9A08_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_SMG_B9A08_BaseDamage_C");

	return Clss;
}


// Ability_SMG_B9A08_BaseDamage_C Ability_SMG_B9A08_BaseDamage.Default__Ability_SMG_B9A08_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_SMG_B9A08_BaseDamage_C* AAbility_SMG_B9A08_BaseDamage_C::GetDefaultObj()
{
	static class AAbility_SMG_B9A08_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_SMG_B9A08_BaseDamage_C*>(AAbility_SMG_B9A08_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


