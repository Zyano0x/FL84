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
	 * 		Name   -> PredefinedFunction UGA_VehicleWeaponFire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_VehicleWeaponFire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GA_VehicleWeaponFire.GA_VehicleWeaponFire_C"));
		return ptr;
	}

}


