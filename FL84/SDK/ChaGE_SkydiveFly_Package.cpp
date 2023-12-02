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
	 * 		Name   -> PredefinedFunction UChaGE_SkydiveFly_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGE_SkydiveFly_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGE_SkydiveFly.ChaGE_SkydiveFly_C"));
		return ptr;
	}

}


