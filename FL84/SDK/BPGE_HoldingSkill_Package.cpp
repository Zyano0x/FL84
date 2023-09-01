/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * 		Name   -> PredefinedFunction UBPGE_HoldingSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPGE_HoldingSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPGE_HoldingSkill.BPGE_HoldingSkill_C");
		return ptr;
	}

}


