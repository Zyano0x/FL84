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
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetSettlementRewards
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<struct FSettlementReward> ABP_Formula_BattleRoyale_C::GetSettlementRewards(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetSettlementRewards"));
		
		ABP_Formula_BattleRoyale_C_GetSettlementRewards_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.IsSettlementBagItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Formula_BattleRoyale_C::IsSettlementBagItem(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.IsSettlementBagItem"));
		
		ABP_Formula_BattleRoyale_C_IsSettlementBagItem_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetDefenderManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_DefenderManager_C*                       Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::GetDefenderManager(class ABP_DefenderManager_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetDefenderManager"));
		
		ABP_Formula_BattleRoyale_C_GetDefenderManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.MVPLifeTimeScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              LifeTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LTMVPScore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::MVPLifeTimeScore(float LifeTime, float* LTMVPScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.MVPLifeTimeScore"));
		
		ABP_Formula_BattleRoyale_C_MVPLifeTimeScore_Params params {};
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LTMVPScore != nullptr)
			*LTMVPScore = params.LTMVPScore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetStrategyGuideConditions
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutResult                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::GetStrategyGuideConditions(class ASolarPlayerState* InPS, TArray<int32_t>* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetStrategyGuideConditions"));
		
		ABP_Formula_BattleRoyale_C_GetStrategyGuideConditions_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculateTeamRank
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_Formula_BattleRoyale_C::CalculateTeamRank(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculateTeamRank"));
		
		ABP_Formula_BattleRoyale_C_CalculateTeamRank_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculatePlayerRank
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_Formula_BattleRoyale_C::CalculatePlayerRank(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculatePlayerRank"));
		
		ABP_Formula_BattleRoyale_C_CalculatePlayerRank_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.BattleStateDealFloat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Formula_BattleRoyale_C::BattleStateDealFloat(float Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.BattleStateDealFloat"));
		
		ABP_Formula_BattleRoyale_C_BattleStateDealFloat_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.BattleStateDealInt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_Formula_BattleRoyale_C::BattleStateDealInt(int32_t Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.BattleStateDealInt"));
		
		ABP_Formula_BattleRoyale_C_BattleStateDealInt_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetBattleState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::GetBattleState(E_BattleState_BattleRoyale* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetBattleState"));
		
		ABP_Formula_BattleRoyale_C_GetBattleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetKDA
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Formula_BattleRoyale_C::GetKDA(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetKDA"));
		
		ABP_Formula_BattleRoyale_C_GetKDA_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetExtraRewards
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<struct FSettlementParam_ExtraRewardInfo> ABP_Formula_BattleRoyale_C::GetExtraRewards(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetExtraRewards"));
		
		ABP_Formula_BattleRoyale_C_GetExtraRewards_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetPlayerData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            KillCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            KillDown                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Assist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaveCount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LifeTime                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CauseDamage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamRank                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DeathCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TeamAced                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsMVP                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCustomRoomActive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_DefenderPlayerType                               DefenderType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::GetPlayerData(class ASolarPlayerState* Player, int32_t* KillCount, int32_t* KillDown, int32_t* Assist, int32_t* SaveCount, float* LifeTime, float* CauseDamage, int32_t* Rank, int32_t* TeamRank, int32_t* DeathCount, bool* TeamAced, bool* IsMVP, bool* IsCustomRoomActive, E_DefenderPlayerType* DefenderType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetPlayerData"));
		
		ABP_Formula_BattleRoyale_C_GetPlayerData_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (KillCount != nullptr)
			*KillCount = params.KillCount;
		if (KillDown != nullptr)
			*KillDown = params.KillDown;
		if (Assist != nullptr)
			*Assist = params.Assist;
		if (SaveCount != nullptr)
			*SaveCount = params.SaveCount;
		if (LifeTime != nullptr)
			*LifeTime = params.LifeTime;
		if (CauseDamage != nullptr)
			*CauseDamage = params.CauseDamage;
		if (Rank != nullptr)
			*Rank = params.Rank;
		if (TeamRank != nullptr)
			*TeamRank = params.TeamRank;
		if (DeathCount != nullptr)
			*DeathCount = params.DeathCount;
		if (TeamAced != nullptr)
			*TeamAced = params.TeamAced;
		if (IsMVP != nullptr)
			*IsMVP = params.IsMVP;
		if (IsCustomRoomActive != nullptr)
			*IsCustomRoomActive = params.IsCustomRoomActive;
		if (DefenderType != nullptr)
			*DefenderType = params.DefenderType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculateMVPScore
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Formula_BattleRoyale_C::CalculateMVPScore(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculateMVPScore"));
		
		ABP_Formula_BattleRoyale_C_CalculateMVPScore_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetZomborg
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_Formula_BattleRoyale_C::GetZomborg(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetZomborg"));
		
		ABP_Formula_BattleRoyale_C_GetZomborg_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetWeaponExp
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_Formula_BattleRoyale_C::GetWeaponExp(class ASolarPlayerState* InPS, int32_t InWeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetWeaponExp"));
		
		ABP_Formula_BattleRoyale_C_GetWeaponExp_Params params {};
		params.InPS = InPS;
		params.InWeaponID = InWeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetCharacterExp
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutGetExp                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutReason                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::GetCharacterExp(class ASolarPlayerState* InPS, int32_t* OutGetExp, TArray<int32_t>* OutReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetCharacterExp"));
		
		ABP_Formula_BattleRoyale_C_GetCharacterExp_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGetExp != nullptr)
			*OutGetExp = params.OutGetExp;
		if (OutReason != nullptr)
			*OutReason = params.OutReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetAccountExp
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_Formula_BattleRoyale_C::GetAccountExp(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetAccountExp"));
		
		ABP_Formula_BattleRoyale_C_GetAccountExp_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetShowPageIndexs
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSettlePageParam                            InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<int32_t>                                    OutResult                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_Formula_BattleRoyale_C::GetShowPageIndexs(class ASolarPlayerState* InPS, const struct FSettlePageParam& InParam, TArray<int32_t>* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetShowPageIndexs"));
		
		ABP_Formula_BattleRoyale_C_GetShowPageIndexs_Params params {};
		params.InPS = InPS;
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Formula_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Formula_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C"));
		return ptr;
	}

}


