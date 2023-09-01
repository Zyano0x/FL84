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
	 * 		Name   -> PredefinedFunction UBuildPatchManifest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuildPatchManifest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BuildPatchServices.BuildPatchManifest");
		return ptr;
	}

}


