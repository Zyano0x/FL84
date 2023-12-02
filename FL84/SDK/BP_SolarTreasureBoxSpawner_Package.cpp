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
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarTreasureBoxSpawner.BP_SolarTreasureBoxSpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarTreasureBoxSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarTreasureBoxSpawner.BP_SolarTreasureBoxSpawner_C.UserConstructionScript"));
		
		ABP_SolarTreasureBoxSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SolarTreasureBoxSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SolarTreasureBoxSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SolarTreasureBoxSpawner.BP_SolarTreasureBoxSpawner_C"));
		return ptr;
	}

}


