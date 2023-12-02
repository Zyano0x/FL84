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
	 * 		Name   -> PredefinedFunction AChaGCBP_AerialReconnaissanc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChaGCBP_AerialReconnaissanc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGCBP_AerialReconnaissanc.ChaGCBP_AerialReconnaissanc_C"));
		return ptr;
	}

}


