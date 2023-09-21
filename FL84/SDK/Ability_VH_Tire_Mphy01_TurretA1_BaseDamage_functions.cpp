#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VH_Tire_Mphy01_TurretA1_BaseDamage.Ability_VH_Tire_Mphy01_TurretA1_BaseDamage_C
// (Actor)

class UClass* AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VH_Tire_Mphy01_TurretA1_BaseDamage_C");

	return Clss;
}


// Ability_VH_Tire_Mphy01_TurretA1_BaseDamage_C Ability_VH_Tire_Mphy01_TurretA1_BaseDamage.Default__Ability_VH_Tire_Mphy01_TurretA1_BaseDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C* AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C::GetDefaultObj()
{
	static class AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C*>(AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


