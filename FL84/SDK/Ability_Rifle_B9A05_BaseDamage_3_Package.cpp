/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * 		Name   -> PredefinedFunction AAbility_Rifle_B9A05_BaseDamage_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_Rifle_B9A05_BaseDamage_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Rifle_B9A05_BaseDamage_3.Ability_Rifle_B9A05_BaseDamage_2_C");
		return ptr;
	}

}


