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
	 * 		Name   -> PredefinedFunction UBP_TechDesignUIOperationDispatcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TechDesignUIOperationDispatcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_TechDesignUIOperationDispatcher.BP_TechDesignUIOperationDispatcher_C"));
		return ptr;
	}

}


