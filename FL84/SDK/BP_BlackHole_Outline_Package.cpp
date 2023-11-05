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
	 * 		Name   -> PredefinedFunction UBP_BlackHole_Outline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BlackHole_Outline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BlackHole_Outline.BP_BlackHole_Outline_C"));
		return ptr;
	}

}


