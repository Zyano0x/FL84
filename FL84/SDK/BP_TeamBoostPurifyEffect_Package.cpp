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
	 * 		Name   -> PredefinedFunction UBP_TeamBoostPurifyEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TeamBoostPurifyEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_TeamBoostPurifyEffect.BP_TeamBoostPurifyEffect_C"));
		return ptr;
	}

}


