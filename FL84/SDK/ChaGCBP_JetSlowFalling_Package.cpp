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
	 * 		Name   -> PredefinedFunction UChaGCBP_JetSlowFalling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGCBP_JetSlowFalling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGCBP_JetSlowFalling.ChaGCBP_JetSlowFalling_C"));
		return ptr;
	}

}


