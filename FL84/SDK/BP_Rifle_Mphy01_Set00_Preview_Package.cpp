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
	 * 		Name   -> PredefinedFunction ABP_Rifle_Mphy01_Set00_Preview_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Rifle_Mphy01_Set00_Preview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Rifle_Mphy01_Set00_Preview.BP_Rifle_Mphy01_Set00_Preview_C"));
		return ptr;
	}

}

