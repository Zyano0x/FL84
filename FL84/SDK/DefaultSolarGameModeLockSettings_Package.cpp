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
	 * 		Name   -> PredefinedFunction UDefaultSolarGameModeLockSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultSolarGameModeLockSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass DefaultSolarGameModeLockSettings.DefaultSolarGameModeLockSettings_C"));
		return ptr;
	}

}


