#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround.Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C
// (Actor)

class UClass* AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C");

	return Clss;
}


// Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround.Default__Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C* AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C::GetDefaultObj()
{
	static class AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C*>(AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C::StaticClass()->DefaultObject);

	return Default;
}

}


