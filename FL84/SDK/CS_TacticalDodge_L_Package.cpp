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
	 * 		Name   -> PredefinedFunction UCS_TacticalDodge_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCS_TacticalDodge_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass CS_TacticalDodge_L.CS_TacticalDodge_L_C"));
		return ptr;
	}

}

