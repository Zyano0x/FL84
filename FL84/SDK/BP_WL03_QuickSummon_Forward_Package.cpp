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
	 * 		Name   -> PredefinedFunction UBP_WL03_QuickSummon_Forward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WL03_QuickSummon_Forward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WL03_QuickSummon_Forward.BP_WL03_QuickSummon_Forward_C");
		return ptr;
	}

}


