/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * 		Name   -> PredefinedFunction UHUD_StripBulletContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_StripBulletContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_StripBulletContainer.HUD_StripBulletContainer_C");
		return ptr;
	}

}


