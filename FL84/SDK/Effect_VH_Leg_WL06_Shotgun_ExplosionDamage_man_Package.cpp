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
	 * 		Name   -> PredefinedFunction UEffect_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Effect_VH_Leg_WL06_Shotgun_ExplosionDamage_man.Effect_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C");
		return ptr;
	}

}


