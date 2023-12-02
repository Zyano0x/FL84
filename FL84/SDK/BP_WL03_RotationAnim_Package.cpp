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
	 * 		Name   -> PredefinedFunction UBP_WL03_RotationAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WL03_RotationAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_WL03_RotationAnim.BP_WL03_RotationAnim_C"));
		return ptr;
	}

}


