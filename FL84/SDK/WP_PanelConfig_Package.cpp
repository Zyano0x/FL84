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
	 * 		Name   -> PredefinedFunction UWP_PanelConfig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWP_PanelConfig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WP_PanelConfig.WP_PanelConfig_C");
		return ptr;
	}

}


