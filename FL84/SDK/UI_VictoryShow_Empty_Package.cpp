﻿/**
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
	 * 		Name   -> PredefinedFunction UUI_VictoryShow_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_VictoryShow_Empty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_VictoryShow_Empty.UI_VictoryShow_Empty_C"));
		return ptr;
	}

}


