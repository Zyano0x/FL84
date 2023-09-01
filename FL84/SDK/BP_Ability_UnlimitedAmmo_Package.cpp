/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Ability_UnlimitedAmmo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveBeginPlay");
		
		ABP_Ability_UnlimitedAmmo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ability_UnlimitedAmmo_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveEndPlay");
		
		ABP_Ability_UnlimitedAmmo_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.EndWhenUnhold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Ability_UnlimitedAmmo_C::EndWhenUnhold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.EndWhenUnhold");
		
		ABP_Ability_UnlimitedAmmo_C_EndWhenUnhold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ExecuteUbergraph_BP_Ability_UnlimitedAmmo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ability_UnlimitedAmmo_C::ExecuteUbergraph_BP_Ability_UnlimitedAmmo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ExecuteUbergraph_BP_Ability_UnlimitedAmmo");
		
		ABP_Ability_UnlimitedAmmo_C_ExecuteUbergraph_BP_Ability_UnlimitedAmmo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ability_UnlimitedAmmo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ability_UnlimitedAmmo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C");
		return ptr;
	}

}


