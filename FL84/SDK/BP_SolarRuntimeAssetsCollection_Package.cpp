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
	 * 		Name   -> PredefinedFunction UBP_SolarRuntimeAssetsCollection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SolarRuntimeAssetsCollection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SolarRuntimeAssetsCollection.BP_SolarRuntimeAssetsCollection_C"));
		return ptr;
	}

}


