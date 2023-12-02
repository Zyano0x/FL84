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
	 * 		Name   -> PredefinedFunction UGE_FireworksCooldown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_FireworksCooldown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GE_FireworksCooldown.GE_FireworksCooldown_C"));
		return ptr;
	}

}


