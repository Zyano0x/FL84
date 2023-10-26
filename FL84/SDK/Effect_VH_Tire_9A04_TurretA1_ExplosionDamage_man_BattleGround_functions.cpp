#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround.Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C
// (None)

class UClass* UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C");

	return Clss;
}


// Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround.Default__Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C* UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C::GetDefaultObj()
{
	static class UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C*>(UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_BattleGround_C::StaticClass()->DefaultObject);

	return Default;
}

}


