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
	 * 		Name   -> PredefinedFunction UIncludeWaterNavQueryFilter_LongRange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIncludeWaterNavQueryFilter_LongRange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass IncludeWaterNavQueryFilter_LongRange.IncludeWaterNavQueryFilter_LongRange_C"));
		return ptr;
	}

}


