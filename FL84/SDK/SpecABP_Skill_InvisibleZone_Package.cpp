﻿/**
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
	 * 		Name   -> PredefinedFunction USpecABP_Skill_InvisibleZone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecABP_Skill_InvisibleZone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass SpecABP_Skill_InvisibleZone.SpecABP_Skill_InvisibleZone_C"));
		return ptr;
	}

}

