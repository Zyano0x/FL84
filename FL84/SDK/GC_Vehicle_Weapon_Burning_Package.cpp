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
	 * 		Name   -> PredefinedFunction AGC_Vehicle_Weapon_Burning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Vehicle_Weapon_Burning_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GC_Vehicle_Weapon_Burning.GC_Vehicle_Weapon_Burning_C"));
		return ptr;
	}

}


