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
	 * 		Name   -> PredefinedFunction UMMCBP_TacticalSkillCD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMMCBP_TacticalSkillCD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass MMCBP_TacticalSkillCD.MMCBP_TacticalSkillCD_C"));
		return ptr;
	}

}


