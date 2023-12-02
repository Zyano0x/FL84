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
	 * 		Name   -> PredefinedFunction USCS_IronMan_Dash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCS_IronMan_Dash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass SCS_IronMan_Dash.SCS_IronMan_Dash_C"));
		return ptr;
	}

}

