/**
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
	 * 		Name   -> PredefinedFunction UBP_Soroll02_QuickSummon_Forward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Soroll02_QuickSummon_Forward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Soroll02_QuickSummon_Forward.BP_Soroll02_QuickSummon_Forward_C"));
		return ptr;
	}

}


