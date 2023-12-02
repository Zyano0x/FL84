/**
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
	 * 		Name   -> PredefinedFunction UGA_Scan_On_Hit_Level2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Scan_On_Hit_Level2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GA_Scan_On_Hit_Level2.GA_Scan_On_Hit_Level2_C"));
		return ptr;
	}

}


