/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbility_VH_Tire_WL07_Flamethrower_BaseDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_VH_Tire_WL07_Flamethrower_BaseDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Ability_VH_Tire_WL07_Flamethrower_BaseDamage.Ability_VH_Tire_WL07_Flamethrower_BaseDamage_C"));
		return ptr;
	}

}


