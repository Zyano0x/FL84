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
	 * 		Name   -> PredefinedFunction UEffect_VehicleWeapon_IronManLaser_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEffect_VehicleWeapon_IronManLaser_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Effect_VehicleWeapon_IronManLaser.Effect_VehicleWeapon_IronManLaser_C"));
		return ptr;
	}

}


