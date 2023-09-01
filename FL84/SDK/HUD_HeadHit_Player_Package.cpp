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
	 * 		Name   -> PredefinedFunction UHUD_HeadHit_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_HeadHit_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_HeadHit_Player.HUD_HeadHit_Player_C");
		return ptr;
	}

}


