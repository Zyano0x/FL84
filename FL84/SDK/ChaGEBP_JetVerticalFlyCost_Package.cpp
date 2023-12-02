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
	 * 		Name   -> PredefinedFunction UChaGEBP_JetVerticalFlyCost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGEBP_JetVerticalFlyCost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGEBP_JetVerticalFlyCost.ChaGEBP_JetVerticalFlyCost_C"));
		return ptr;
	}

}


