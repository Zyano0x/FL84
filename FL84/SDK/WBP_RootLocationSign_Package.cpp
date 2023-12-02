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
	 * 		Name   -> PredefinedFunction UWBP_RootLocationSign_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_RootLocationSign_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass WBP_RootLocationSign.WBP_RootLocationSign_C"));
		return ptr;
	}

}


