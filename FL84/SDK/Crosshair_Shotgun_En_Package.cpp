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
	 * 		Name   -> PredefinedFunction UCrosshair_Shotgun_En_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_Shotgun_En_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_Shotgun_En.Crosshair_Shotgun_En_C"));
		return ptr;
	}

}


