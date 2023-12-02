#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetSettlementRewards
	 */
	struct ABP_Formula_BattleRoyale_C_GetSettlementRewards_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSettlementReward>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.IsSettlementBagItem
	 */
	struct ABP_Formula_BattleRoyale_C_IsSettlementBagItem_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetDefenderManager
	 */
	struct ABP_Formula_BattleRoyale_C_GetDefenderManager_Params
	{
	public:
		class ABP_DefenderManager_C*                               Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.MVPLifeTimeScore
	 */
	struct ABP_Formula_BattleRoyale_C_MVPLifeTimeScore_Params
	{
	public:
		float                                                      LifeTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LTMVPScore;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetStrategyGuideConditions
	 */
	struct ABP_Formula_BattleRoyale_C_GetStrategyGuideConditions_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutResult;                                               // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculateTeamRank
	 */
	struct ABP_Formula_BattleRoyale_C_CalculateTeamRank_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculatePlayerRank
	 */
	struct ABP_Formula_BattleRoyale_C_CalculatePlayerRank_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.BattleStateDealFloat
	 */
	struct ABP_Formula_BattleRoyale_C_BattleStateDealFloat_Params
	{
	public:
		float                                                      Input;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.BattleStateDealInt
	 */
	struct ABP_Formula_BattleRoyale_C_BattleStateDealInt_Params
	{
	public:
		int32_t                                                    Input;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetBattleState
	 */
	struct ABP_Formula_BattleRoyale_C_GetBattleState_Params
	{
	public:
		E_BattleState_BattleRoyale                                 State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetKDA
	 */
	struct ABP_Formula_BattleRoyale_C_GetKDA_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetExtraRewards
	 */
	struct ABP_Formula_BattleRoyale_C_GetExtraRewards_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSettlementParam_ExtraRewardInfo>            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetPlayerData
	 */
	struct ABP_Formula_BattleRoyale_C_GetPlayerData_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    KillCount;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    KillDown;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Assist;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaveCount;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LifeTime;                                                // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CauseDamage;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamRank;                                                // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DeathCount;                                              // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TeamAced;                                                // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMVP;                                                   // 0x002D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCustomRoomActive;                                      // 0x002E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_DefenderPlayerType                                       DefenderType;                                            // 0x002F(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.CalculateMVPScore
	 */
	struct ABP_Formula_BattleRoyale_C_CalculateMVPScore_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetZomborg
	 */
	struct ABP_Formula_BattleRoyale_C_GetZomborg_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetWeaponExp
	 */
	struct ABP_Formula_BattleRoyale_C_GetWeaponExp_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InWeaponID;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetCharacterExp
	 */
	struct ABP_Formula_BattleRoyale_C_GetCharacterExp_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutGetExp;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A0UG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            OutReason;                                               // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetAccountExp
	 */
	struct ABP_Formula_BattleRoyale_C_GetAccountExp_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C.GetShowPageIndexs
	 */
	struct ABP_Formula_BattleRoyale_C_GetShowPageIndexs_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSettlePageParam                                    InParam;                                                 // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		TArray<int32_t>                                            OutResult;                                               // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
