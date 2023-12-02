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
	 * 		Name   -> PredefinedFunction UGE_UnderWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_UnderWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GE_UnderWater.GE_UnderWater_C"));
		return ptr;
	}

}


