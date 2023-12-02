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
	 * 		Name   -> Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.GetAirlineCruiseComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UAirlineCruiseComponent* ABP_Mode_BattleRoyale_C::GetAirlineCruiseComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.GetAirlineCruiseComponent"));
		
		ABP_Mode_BattleRoyale_C_GetAirlineCruiseComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.IsKillWhenPlayerOut
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Mode_BattleRoyale_C::IsKillWhenPlayerOut(class ASolarPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.IsKillWhenPlayerOut"));
		
		ABP_Mode_BattleRoyale_C_IsKillWhenPlayerOut_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Mode_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.ReceiveBeginPlay"));
		
		ABP_Mode_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.UpdateDeserterTag
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mode_BattleRoyale_C::UpdateDeserterTag(class ASolarPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.UpdateDeserterTag"));
		
		ABP_Mode_BattleRoyale_C_UpdateDeserterTag_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.ExecuteUbergraph_BP_Mode_BattleRoyale
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mode_BattleRoyale_C::ExecuteUbergraph_BP_Mode_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.ExecuteUbergraph_BP_Mode_BattleRoyale"));
		
		ABP_Mode_BattleRoyale_C_ExecuteUbergraph_BP_Mode_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mode_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mode_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C"));
		return ptr;
	}

}


