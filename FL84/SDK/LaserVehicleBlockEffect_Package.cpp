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
	 * 		Name   -> PredefinedFunction ULaserVehicleBlockEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULaserVehicleBlockEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass LaserVehicleBlockEffect.LaserVehicleBlockEffect_C"));
		return ptr;
	}

}


