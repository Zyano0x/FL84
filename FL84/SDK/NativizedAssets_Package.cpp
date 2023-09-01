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
	 * 		Name   -> PredefinedFunction U__Delegates__ABP_Penguin_C__pf944487101.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U__Delegates__ABP_Penguin_C__pf944487101::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NativizedAssets.__Delegates__ABP_Penguin_C__pf944487101");
		return ptr;
	}

}


