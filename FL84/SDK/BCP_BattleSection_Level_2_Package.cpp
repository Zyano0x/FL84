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
	 * 		Name   -> PredefinedFunction UBCP_BattleSection_Level_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBCP_BattleSection_Level_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BCP_BattleSection_Level_2.BCP_BattleSection_Level_1_C"));
		return ptr;
	}

}


