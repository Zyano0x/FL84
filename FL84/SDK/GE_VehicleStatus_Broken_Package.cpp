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
	 * 		Name   -> PredefinedFunction UGE_VehicleStatus_Broken_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_VehicleStatus_Broken_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GE_VehicleStatus_Broken.GE_VehicleStatus_Broken_C"));
		return ptr;
	}

}


