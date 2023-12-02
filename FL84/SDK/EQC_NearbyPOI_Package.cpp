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
	 * 		Name   -> PredefinedFunction UEQC_NearbyPOI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQC_NearbyPOI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass EQC_NearbyPOI.EQC_NearbyPOI_C"));
		return ptr;
	}

}


