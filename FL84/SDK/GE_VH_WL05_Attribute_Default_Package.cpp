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
	 * 		Name   -> PredefinedFunction UGE_VH_WL05_Attribute_Default_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_VH_WL05_Attribute_Default_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GE_VH_WL05_Attribute_Default.GE_VH_WL05_Attribute_Default_C"));
		return ptr;
	}

}


