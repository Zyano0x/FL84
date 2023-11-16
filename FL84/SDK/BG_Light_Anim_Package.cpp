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
	 * 		Name   -> PredefinedFunction UBG_Light_Anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBG_Light_Anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass BG_Light_Anim.BG_Light_Anim_C"));
		return ptr;
	}

}


