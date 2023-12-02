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
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.Get Actual UICount Down Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CountDownTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::GetActualUICountDownTime(float* CountDownTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.Get Actual UICount Down Time"));
		
		ABP_GameState_BattleRoyale_C_GetActualUICountDownTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountDownTime != nullptr)
			*CountDownTime = params.CountDownTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.CloseEmptyVictoryUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::CloseEmptyVictoryUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.CloseEmptyVictoryUI"));
		
		ABP_GameState_BattleRoyale_C_CloseEmptyVictoryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_HasTop3Team
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::OnRep_HasTop3Team()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_HasTop3Team"));
		
		ABP_GameState_BattleRoyale_C_OnRep_HasTop3Team_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ShowEmptyVictoryUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::ShowEmptyVictoryUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ShowEmptyVictoryUI"));
		
		ABP_GameState_BattleRoyale_C_ShowEmptyVictoryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_WinTeam
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::OnRep_WinTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_WinTeam"));
		
		ABP_GameState_BattleRoyale_C_OnRep_WinTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ShowVictoryUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::ShowVictoryUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ShowVictoryUI"));
		
		ABP_GameState_BattleRoyale_C_ShowVictoryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_BattleState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::OnRep_BattleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_BattleState"));
		
		ABP_GameState_BattleRoyale_C_OnRep_BattleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_MapID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::OnRep_MapID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnRep_MapID"));
		
		ABP_GameState_BattleRoyale_C_OnRep_MapID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ReceiveBeginPlay"));
		
		ABP_GameState_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnBattleStateChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         ChangeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::OnBattleStateChange(E_BattleState_BattleRoyale ChangeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnBattleStateChange"));
		
		ABP_GameState_BattleRoyale_C_OnBattleStateChange_Params params {};
		params.ChangeType = ChangeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.StartCountdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::StartCountdown(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.StartCountdown"));
		
		ABP_GameState_BattleRoyale_C_StartCountdown_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.BattleEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      WinTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::BattleEnd(const class FString& WinTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.BattleEnd"));
		
		ABP_GameState_BattleRoyale_C_BattleEnd_Params params {};
		params.WinTeam = WinTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnConfigInit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::OnConfigInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnConfigInit"));
		
		ABP_GameState_BattleRoyale_C_OnConfigInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnShowVictoryUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_GameState_BattleRoyale_C::OnShowVictoryUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.OnShowVictoryUI"));
		
		ABP_GameState_BattleRoyale_C_OnShowVictoryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.NetMulticastCelebrateBattleEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::NetMulticastCelebrateBattleEnd(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.NetMulticastCelebrateBattleEnd"));
		
		ABP_GameState_BattleRoyale_C_NetMulticastCelebrateBattleEnd_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.CelebrateBattleEnd
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::CelebrateBattleEnd(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.CelebrateBattleEnd"));
		
		ABP_GameState_BattleRoyale_C_CelebrateBattleEnd_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ExecuteUbergraph_BP_GameState_BattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::ExecuteUbergraph_BP_GameState_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.ExecuteUbergraph_BP_GameState_BattleRoyale"));
		
		ABP_GameState_BattleRoyale_C_ExecuteUbergraph_BP_GameState_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.BroadcastBattleStateChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         NowState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GameState_BattleRoyale_C::BroadcastBattleStateChange__DelegateSignature(E_BattleState_BattleRoyale NowState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C.BroadcastBattleStateChange__DelegateSignature"));
		
		ABP_GameState_BattleRoyale_C_BroadcastBattleStateChange__DelegateSignature_Params params {};
		params.NowState = NowState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GameState_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GameState_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C"));
		return ptr;
	}

}


