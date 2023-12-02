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
	 * 		Name   -> PredefinedFunction UChaGABP_JetFlyCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGABP_JetFlyCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGABP_JetFlyCharge.ChaGABP_JetFlyCharge_C"));
		return ptr;
	}

}


