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
	 * 		Name   -> PredefinedFunction UBP_Replay_Perspective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Replay_Perspective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Replay_Perspective.BP_Replay_Perspective_C"));
		return ptr;
	}

}


