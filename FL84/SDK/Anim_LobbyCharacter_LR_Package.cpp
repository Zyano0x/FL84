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
	 * 		Name   -> PredefinedFunction UAnim_LobbyCharacter_LR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_LobbyCharacter_LR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass Anim_LobbyCharacter_LR.Anim_LobbyCharacter_LR_C");
		return ptr;
	}

}


