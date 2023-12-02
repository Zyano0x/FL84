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
	 * 		Name   -> PredefinedFunction ULM_AreaTileData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULM_AreaTileData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LunarMariaArea.LM_AreaTileData"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULM_AreaData_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULM_AreaData_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LunarMariaArea.LM_AreaData_Base"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULM_AreaData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULM_AreaData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LunarMariaArea.LM_AreaData"));
		return ptr;
	}

}


