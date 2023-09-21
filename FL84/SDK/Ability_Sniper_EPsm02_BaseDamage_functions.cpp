#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Sniper_EPsm02_BaseDamage.Ability_Sniper_EPsm02_BaseDamage_C
// (Actor)

class UClass* AAbility_Sniper_EPsm02_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Sniper_EPsm02_BaseDamage_C");

	return Clss;
}


// Ability_Sniper_EPsm02_BaseDamage_C Ability_Sniper_EPsm02_BaseDamage.Default__Ability_Sniper_EPsm02_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_Sniper_EPsm02_BaseDamage_C* AAbility_Sniper_EPsm02_BaseDamage_C::GetDefaultObj()
{
	static class AAbility_Sniper_EPsm02_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_Sniper_EPsm02_BaseDamage_C*>(AAbility_Sniper_EPsm02_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


