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
	 * 		Name   -> PredefinedFunction UUI_Target_Bussinesscard_Proficiency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Target_Bussinesscard_Proficiency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Target_Bussinesscard_Proficiency.UI_Target_Bussinesscard_Proficiency_C"));
		return ptr;
	}

}


