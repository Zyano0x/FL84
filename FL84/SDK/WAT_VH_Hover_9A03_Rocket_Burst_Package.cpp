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
	 * 		Name   -> PredefinedFunction UWAT_VH_Hover_9A03_Rocket_Burst_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWAT_VH_Hover_9A03_Rocket_Burst_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WAT_VH_Hover_9A03_Rocket_Burst.WAT_VH_Hover_9A03_Rocket_Burst_C");
		return ptr;
	}

}

