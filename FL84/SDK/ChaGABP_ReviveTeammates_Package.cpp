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
	 * 		Name   -> Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.K2_OnEndAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChaGABP_ReviveTeammates_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.K2_OnEndAbility"));
		
		UChaGABP_ReviveTeammates_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.OnAbilityExec
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UChaGABP_ReviveTeammates_C::OnAbilityExec()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.OnAbilityExec"));
		
		UChaGABP_ReviveTeammates_C_OnAbilityExec_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.ExecuteUbergraph_ChaGABP_ReviveTeammates
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChaGABP_ReviveTeammates_C::ExecuteUbergraph_ChaGABP_ReviveTeammates(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.ExecuteUbergraph_ChaGABP_ReviveTeammates"));
		
		UChaGABP_ReviveTeammates_C_ExecuteUbergraph_ChaGABP_ReviveTeammates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChaGABP_ReviveTeammates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChaGABP_ReviveTeammates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C"));
		return ptr;
	}

}


