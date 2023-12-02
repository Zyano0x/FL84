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
	 * 		Name   -> PredefinedFunction UUI_PassiveHead_item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PassiveHead_item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_PassiveHead_item.UI_PassiveHead_item_C"));
		return ptr;
	}

}


