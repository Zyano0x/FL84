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
	 * 		Name   -> PredefinedFunction ABP_TP_Default_Set01A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TP_Default_Set01A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_TP_Default_Set01A.BP_TP_Default_Set01A_C"));
		return ptr;
	}

}

