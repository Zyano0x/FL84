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
	 * 		Name   -> PredefinedFunction UChaGABP_SkywardDive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGABP_SkywardDive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGABP_SkywardDive.ChaGABP_SkywardDive_C"));
		return ptr;
	}

}


