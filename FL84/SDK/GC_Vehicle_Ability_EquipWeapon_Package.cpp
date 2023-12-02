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
	 * 		Name   -> PredefinedFunction UGC_Vehicle_Ability_EquipWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Vehicle_Ability_EquipWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GC_Vehicle_Ability_EquipWeapon.GC_Vehicle_Ability_EquipWeapon_C"));
		return ptr;
	}

}


