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
	 * 		Name   -> PredefinedFunction UGA_CancelAllVehicleAbility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_CancelAllVehicleAbility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GA_CancelAllVehicleAbility.GA_CancelAllVehicleAbility_C"));
		return ptr;
	}

}


