/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * 		Name   -> PredefinedFunction UGauntletTestController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGauntletTestControllerBootTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestControllerBootTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerBootTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGauntletTestControllerErrorTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGauntletTestControllerErrorTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerErrorTest");
		return ptr;
	}

}


