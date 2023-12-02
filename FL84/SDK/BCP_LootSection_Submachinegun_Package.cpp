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
	 * 		Name   -> PredefinedFunction UBCP_LootSection_Submachinegun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBCP_LootSection_Submachinegun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BCP_LootSection_Submachinegun.BCP_LootSection_Submachinegun_C"));
		return ptr;
	}

}


