﻿/**
 * Name: FL84
 * Version: 15.1
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
	 * 		Name   -> PredefinedFunction AAbility_VH_Hover_WL04_StickyBomb_Explode_BattleGround_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_VH_Hover_WL04_StickyBomb_Explode_BattleGround_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb_Explode_BattleGround.Ability_VH_Hover_WL04_StickyBomb_Explode_BattleGround_C"));
		return ptr;
	}

}


