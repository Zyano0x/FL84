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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Formula_BattleRoyale.BP_Formula_BattleRoyale_C
	 * Size -> 0x00AC (FullSize[0x0308] - InheritedSize[0x025C])
	 */
	class ABP_Formula_BattleRoyale_C : public ABP_FormulaBase_C
	{
	public:
		int32_t                                                    WarmGameExp;                                             // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class ASolarPlayerState*, bool>                       WeaponExp;                                               // 0x0260(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		unsigned char                                              WarmGameIdSet[0x50];                                     // 0x02B0(0x0050) UNKNOWN PROPERTY: SetProperty
		class ABP_DefenderManager_C*                               DefenderManager;                                         // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TArray<struct FSettlementReward> GetSettlementRewards(class ASolarPlayerState* InPS);
		bool IsSettlementBagItem(class ASolarPlayerState* InPS);
		void GetDefenderManager(class ABP_DefenderManager_C** Output_Get);
		void MVPLifeTimeScore(float LifeTime, float* LTMVPScore);
		void GetStrategyGuideConditions(class ASolarPlayerState* InPS, TArray<int32_t>* OutResult);
		int32_t CalculateTeamRank(class ASolarPlayerState* InPS);
		int32_t CalculatePlayerRank(class ASolarPlayerState* InPS);
		float BattleStateDealFloat(float Input);
		int32_t BattleStateDealInt(int32_t Input);
		void GetBattleState(E_BattleState_BattleRoyale* State);
		float GetKDA(class ASolarPlayerState* InPS);
		TArray<struct FSettlementParam_ExtraRewardInfo> GetExtraRewards(class ASolarPlayerState* InPS);
		void GetPlayerData(class ASolarPlayerState* Player, int32_t* KillCount, int32_t* KillDown, int32_t* Assist, int32_t* SaveCount, float* LifeTime, float* CauseDamage, int32_t* Rank, int32_t* TeamRank, int32_t* DeathCount, bool* TeamAced, bool* IsMVP, bool* IsCustomRoomActive, E_DefenderPlayerType* DefenderType);
		float CalculateMVPScore(class ASolarPlayerState* InPS);
		int32_t GetZomborg(class ASolarPlayerState* InPS);
		int32_t GetWeaponExp(class ASolarPlayerState* InPS, int32_t InWeaponID);
		void GetCharacterExp(class ASolarPlayerState* InPS, int32_t* OutGetExp, TArray<int32_t>* OutReason);
		int32_t GetAccountExp(class ASolarPlayerState* InPS);
		void GetShowPageIndexs(class ASolarPlayerState* InPS, const struct FSettlePageParam& InParam, TArray<int32_t>* OutResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
