﻿/**
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
	 * 		Name   -> PredefinedFunction AAbility_WeaponScan2_LV2_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_WeaponScan2_LV2_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Ability_WeaponScan2_LV2_BP.Ability_WeaponScan2_LV2_BP_C"));
		return ptr;
	}

}

