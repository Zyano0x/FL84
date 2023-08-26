/**
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
	 * 		Name   -> PredefinedFunction UDefaultSolarLockSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDefaultSolarLockSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DefaultSolarLockSettings.DefaultSolarLockSettings_C");
		return ptr;
	}

}


