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
	 * 		Name   -> PredefinedFunction UAEBP_InSmokeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAEBP_InSmokeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass AEBP_InSmokeBase.AEBP_InSmokeBase_C"));
		return ptr;
	}

}


