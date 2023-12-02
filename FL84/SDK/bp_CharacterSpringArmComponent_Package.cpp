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
	 * 		Name   -> PredefinedFunction UBP_CharacterSpringArmComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CharacterSpringArmComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass bp_CharacterSpringArmComponent.BP_CharacterSpringArmComponent_C"));
		return ptr;
	}

}


