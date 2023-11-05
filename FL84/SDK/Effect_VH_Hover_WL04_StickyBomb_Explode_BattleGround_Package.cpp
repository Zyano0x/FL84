/**
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
	 * 		Name   -> PredefinedFunction UEffect_VH_Hover_WL04_StickyBomb_Explode_BattleGround_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_VH_Hover_WL04_StickyBomb_Explode_BattleGround_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Effect_VH_Hover_WL04_StickyBomb_Explode_BattleGround.Effect_VH_Hover_WL04_StickyBomb_Explode_BattleGround_C"));
		return ptr;
	}

}


