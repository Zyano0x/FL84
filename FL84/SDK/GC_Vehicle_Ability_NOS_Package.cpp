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
	 * 		Name   -> PredefinedFunction AGC_Vehicle_Ability_NOS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Vehicle_Ability_NOS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GC_Vehicle_Ability_NOS.GC_Vehicle_Ability_NOS_C"));
		return ptr;
	}

}


