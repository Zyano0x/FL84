﻿/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * 		Name   -> PredefinedFunction UGE_VehicleWeaponFire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_VehicleWeaponFire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_VehicleWeaponFire.GE_VehicleWeaponFire_C");
		return ptr;
	}

}


