﻿/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * 		Name   -> PredefinedFunction UBP_Mphy03_RotationAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Mphy03_RotationAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mphy03_RotationAnim.BP_Mphy03_RotationAnim_C");
		return ptr;
	}

}

