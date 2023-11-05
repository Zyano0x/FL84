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
	 * 		Name   -> PredefinedFunction UMassInvisibilityCameraModifierIn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMassInvisibilityCameraModifierIn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass MassInvisibilityCameraModifierIn.MassInvisibilityCameraModifierIn_C"));
		return ptr;
	}

}


