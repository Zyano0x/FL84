﻿/**
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
	 * 		Name   -> PredefinedFunction UBPGE_UsingContinuousSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPGE_UsingContinuousSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPGE_UsingContinuousSkill.BPGE_UsingContinuousSkill_C"));
		return ptr;
	}

}

