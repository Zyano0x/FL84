﻿/**
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
	 * 		Name   -> PredefinedFunction UAnim_LobbyCharacter_HOD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_LobbyCharacter_HOD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass Anim_LobbyCharacter_HOD.Anim_LobbyCharacter_HOD_C"));
		return ptr;
	}

}

