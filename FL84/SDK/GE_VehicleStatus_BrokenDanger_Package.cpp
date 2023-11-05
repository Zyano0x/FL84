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
	 * 		Name   -> PredefinedFunction UGE_VehicleStatus_BrokenDanger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_VehicleStatus_BrokenDanger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GE_VehicleStatus_BrokenDanger.GE_VehicleStatus_BrokenDanger_C"));
		return ptr;
	}

}


