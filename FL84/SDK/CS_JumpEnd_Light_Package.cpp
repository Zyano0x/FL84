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
	 * 		Name   -> PredefinedFunction UCS_JumpEnd_Light_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_JumpEnd_Light_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass CS_JumpEnd_Light.CS_JumpEnd_Light_C"));
		return ptr;
	}

}


