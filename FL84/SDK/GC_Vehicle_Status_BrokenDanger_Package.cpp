/**
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
	 * 		Name   -> PredefinedFunction UGC_Vehicle_Status_BrokenDanger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGC_Vehicle_Status_BrokenDanger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GC_Vehicle_Status_BrokenDanger.GC_Vehicle_Status_BrokenDanger_C"));
		return ptr;
	}

}


