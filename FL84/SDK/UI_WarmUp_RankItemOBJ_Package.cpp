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
	 * 		Name   -> PredefinedFunction UUI_WarmUp_RankItemOBJ_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WarmUp_RankItemOBJ_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass UI_WarmUp_RankItemOBJ.UI_WarmUp_RankItemOBJ_C"));
		return ptr;
	}

}


