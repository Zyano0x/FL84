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
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ReplenishAITeammate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::ReplenishAITeammate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ReplenishAITeammate"));
		
		UBPC_AiManagerBattleRoyale_C_ReplenishAITeammate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetCountDownComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UBPC_CountDown_C* UBPC_AiManagerBattleRoyale_C::GetCountDownComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetCountDownComponent"));
		
		UBPC_AiManagerBattleRoyale_C_GetCountDownComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.StopAiBehavior
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::StopAiBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.StopAiBehavior"));
		
		UBPC_AiManagerBattleRoyale_C_StopAiBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.CanModeSpawnAiTeammate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPC_AiManagerBattleRoyale_C::CanModeSpawnAiTeammate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.CanModeSpawnAiTeammate"));
		
		UBPC_AiManagerBattleRoyale_C_CanModeSpawnAiTeammate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetAIController
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarBotAIController*                       Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::GetAIController(class ASolarPlayerState* PlayerState, class ASolarBotAIController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetAIController"));
		
		UBPC_AiManagerBattleRoyale_C_GetAIController_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnAI
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bTeammateAI                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::SpawnAI(bool bTeammateAI, const class FString& Team, class ASCMPlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnAI"));
		
		UBPC_AiManagerBattleRoyale_C_SpawnAI_Params params {};
		params.bTeammateAI = bTeammateAI;
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetSpawnInterval
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Interval                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::GetSpawnInterval(float* Interval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetSpawnInterval"));
		
		UBPC_AiManagerBattleRoyale_C_GetSpawnInterval_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interval != nullptr)
			*Interval = params.Interval;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.UpdatePureAiOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::UpdatePureAiOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.UpdatePureAiOrder"));
		
		UBPC_AiManagerBattleRoyale_C_UpdatePureAiOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.Pick Team
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RealPlayerTeam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Team                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::PickTeam(bool RealPlayerTeam, class FString* Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.Pick Team"));
		
		UBPC_AiManagerBattleRoyale_C_PickTeam_Params params {};
		params.RealPlayerTeam = RealPlayerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Team != nullptr)
			*Team = params.Team;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.DeleteTempAI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::DeleteTempAI(int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.DeleteTempAI"));
		
		UBPC_AiManagerBattleRoyale_C_DeleteTempAI_Params params {};
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.RunBehaviourTree
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBehaviorTree*                               BTAsset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::RunBehaviourTree(class ASCMPlayerState* Player, class UBehaviorTree* BTAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.RunBehaviourTree"));
		
		UBPC_AiManagerBattleRoyale_C_RunBehaviourTree_Params params {};
		params.Player = Player;
		params.BTAsset = BTAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector UBPC_AiManagerBattleRoyale_C::SpawnLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnLocation"));
		
		UBPC_AiManagerBattleRoyale_C_SpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.IsPlayerFull
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UBPC_AiManagerBattleRoyale_C::IsPlayerFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.IsPlayerFull"));
		
		UBPC_AiManagerBattleRoyale_C_IsPlayerFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetLogicComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UBP_Logic_BattleRoyale_C* UBPC_AiManagerBattleRoyale_C::GetLogicComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.GetLogicComponent"));
		
		UBPC_AiManagerBattleRoyale_C_GetLogicComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.MatchFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::MatchFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.MatchFinished"));
		
		UBPC_AiManagerBattleRoyale_C_MatchFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.PreSpawnAI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::PreSpawnAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.PreSpawnAI"));
		
		UBPC_AiManagerBattleRoyale_C_PreSpawnAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ReceiveBeginPlay"));
		
		UBPC_AiManagerBattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnAIDynamic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::SpawnAIDynamic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.SpawnAIDynamic"));
		
		UBPC_AiManagerBattleRoyale_C_SpawnAIDynamic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.OnBattleStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::OnBattleStateChanged(E_BattleState_BattleRoyale NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.OnBattleStateChanged"));
		
		UBPC_AiManagerBattleRoyale_C_OnBattleStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_AiManagerBattleRoyale_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.CustomEvent_2"));
		
		UBPC_AiManagerBattleRoyale_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.OnPlayerJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAi                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AiManagerBattleRoyale_C::OnPlayerJoin(class ASCMPlayerState* NewPlayer, bool bIsAi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.OnPlayerJoin"));
		
		UBPC_AiManagerBattleRoyale_C_OnPlayerJoin_Params params {};
		params.NewPlayer = NewPlayer;
		params.bIsAi = bIsAi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ExecuteUbergraph_BPC_AiManagerBattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AiManagerBattleRoyale_C::ExecuteUbergraph_BPC_AiManagerBattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C.ExecuteUbergraph_BPC_AiManagerBattleRoyale"));
		
		UBPC_AiManagerBattleRoyale_C_ExecuteUbergraph_BPC_AiManagerBattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AiManagerBattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AiManagerBattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C"));
		return ptr;
	}

}


