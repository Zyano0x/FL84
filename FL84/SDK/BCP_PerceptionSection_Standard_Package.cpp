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
	 * 		Name   -> PredefinedFunction UBCP_PerceptionSection_Standard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBCP_PerceptionSection_Standard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BCP_PerceptionSection_Standard.BCP_PerceptionSection_Standard_C"));
		return ptr;
	}

}


