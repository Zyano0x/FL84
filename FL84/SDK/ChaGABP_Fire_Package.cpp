﻿/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * 		Name   -> PredefinedFunction UChaGABP_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGABP_Fire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChaGABP_Fire.ChaGABP_Fire_C");
		return ptr;
	}

}


