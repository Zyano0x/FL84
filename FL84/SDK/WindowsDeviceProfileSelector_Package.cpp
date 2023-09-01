/**
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
	 * 		Name   -> PredefinedFunction UWindowsDeviceProfileMatchingRules.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWindowsDeviceProfileMatchingRules::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WindowsDeviceProfileSelector.WindowsDeviceProfileMatchingRules");
		return ptr;
	}

}


