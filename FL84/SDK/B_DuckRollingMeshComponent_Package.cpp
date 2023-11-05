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
	 * 		Name   -> PredefinedFunction UB_DuckRollingMeshComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UB_DuckRollingMeshComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass B_DuckRollingMeshComponent.B_DuckRollingMeshComponent_C"));
		return ptr;
	}

}


