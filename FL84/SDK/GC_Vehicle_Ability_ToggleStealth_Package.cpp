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
	 * 		Name   -> PredefinedFunction AGC_Vehicle_Ability_ToggleStealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGC_Vehicle_Ability_ToggleStealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GC_Vehicle_Ability_ToggleStealth.GC_Vehicle_Ability_ToggleStealth_C"));
		return ptr;
	}

}


