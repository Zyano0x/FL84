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
	 * BlueprintGeneratedClass BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C
	 * Size -> 0x022E (FullSize[0x03E0] - InheritedSize[0x01B2])
	 */
	class UBP_Logic_BattleRoyale_C : public UBP_Logic_Framework_C
	{
	public:
		unsigned char                                              UnknownData_A219[0x6];                                   // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    WaitTime;                                                // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_03ZJ[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APlayerStart*>                                WaitinglandStart;                                        // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class ABP_GameState_BattleRoyale_C*                        GameState;                                               // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnGoInToBattleState;                                     // 0x01E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		bool                                                       bWarmGame;                                               // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A0N9[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolarTablesData_WarmGameMode                       WarmGameInfo;                                            // 0x01F8(0x0068) Edit, BlueprintVisible, DisableEditOnInstance
		class UDataTable*                                          BattleTimeline;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, struct FS_EventList_BattleRoyal>             EventList;                                               // 0x0268(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_MapInfoComponent_C*                              MapInfo;                                                 // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ShrinkIndex;                                             // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GO94[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BattleRoylePoisonCircle_C*                       PoisonCircle;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SolarBombingManager_C*                           BoomingManager;                                          // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_BattleState_BattleRoyale                                 ModeBattleState;                                         // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OU11[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     AirDropPosHistoryRecord;                                 // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    AiLevel;                                                 // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DSTime;                                                  // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<E_BattleEvent_BattleRoyale, bool>                     ModeEventValid;                                          // 0x02F8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TotalPlayer;                                             // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EJKK[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ReviveItemManger_BattleRoyale_C*                 ReviveManager;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Formula_BattleRoyale_C*                          BRFormulaManager;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TeamMemberCount;                                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HOQ3[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTree*                                       BotBehaviorTree;                                         // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ASCMPlayerState*>                             PlayersQuitOnWaitingLand;                                // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    PlayerCountMax;                                          // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanSpawnAI;                                             // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NRBL[0x3];                                   // 0x0385(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PoisonCircleClass;                                       // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AIController;                                            // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DefenderManager_C*                               DefenderManager;                                         // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              RadiusArr;                                               // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    AILevelMax;                                              // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4VIM[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BattleStateChanged;                                      // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    PlayerCountBattleStart;                                  // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ChestSpawnerID;                                          // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPC_AiManagerBattleRoyale_C*                        AiManager;                                               // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CelebrateWinnerGAClass;                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetWeaponIDByCharacter(class ASolarCharacter* InCharacter, int32_t InSlot, int32_t* OutWeaponID);
		void GetPlayerDataTraceByPlayer(class ABP_PlayerState_BattleRoyale_C* InPlayerState, TMap<class FString, class FString>* Map);
		void HandleWinnerTeamPostSlomo(class ASolarTeamInfo* WinnerTeam);
		void HandleWinnerTeamPreSlomo(class ASolarTeamInfo* WinnerTeam);
		void PresettleAll();
		void DealTeammateAISettle(class ASolarPlayerState* Player);
		void CustomRoomStart();
		void SendItemToPlayer(class ASolarPlayerState* Player, TMap<int32_t, int32_t> ItemMap);
		void GetVehicleDataTrace(TMap<class FString, class FString> Map);
		void InitPoisonCircle(class UBP_MapInfoComponent_C** MapInfo);
		void GetAiManager(class UBPC_AiManagerBattleRoyale_C** Output_Get);
		void SetSkillStateByBattleState();
		int32_t GetShrinkIndex();
		void TryPushBattleState(E_BattleState_BattleRoyale TargetState, bool ForcePush);
		void GetWeaponID(int32_t ItemID, int32_t* weaponid);
		void VehicleDataTrace();
		void GetPlayerDataTrace(class ABP_PlayerState_BattleRoyale_C* Player, TMap<class FString, class FString>* Map);
		void KickOutExcessAI();
		bool ReceivePlayerReJoinRequest(const class FString& PlayerId, class FString* ErrorMsg);
		void GetAiLevel(class ASolarPlayerState* Target, int32_t* DefaultDifficultyLevel);
		void GetConfig(class UCFG_BattleRoyale_C** CFG);
		void DataTrace();
		void UpdatePlayerData(class ASolarPlayerState* Target);
		void PreSettleDeal(class ASCMPlayerState* Player, ESCMPlayerOutType OutType);
		void WillMasterLeavingDisbandRoom(bool* Result);
		void IsMasterDisbandingLegal(bool* Result);
		void IsKickOutLegal(bool* Result);
		void IsSideSwitchLegal(bool* Result);
		void BuyResurrectionDeal(class APlayerState* Player);
		void UpdateWinnerData(const class FString& Team);
		bool IsLamster(class ASCMPlayerState* Player, ESCMPlayerOutType Index);
		bool CanPlayerBattle(class ASCMPlayerState* Player);
		void UpdateTeamData(const class FString& Team, bool* bAced);
		void GetConiReviveManager(class ABP_ReviveItemManger_BattleRoyale_C** Output_Get);
		bool IsAllowReconnectGame(class ASCMPlayerState* InPC);
		void QuitImmediately(ESCMPlayerOutType Index, class ASCMPlayerState* InputPin, bool* SendToSettle);
		void UpdatePlayerDataTrace(class ASCMPlayerState* PlayerState);
		void CreateAirdrop(int32_t ChestID);
		void StartCruising();
		void InitElements();
		void GetMapInfo(class UBP_MapInfoComponent_C** MapInfo);
		void InitTimelineEvent(class UDataTable** BattleTimeline);
		void ExecuteBattleEvent(const struct FS_Event_BattleRoyale& S_Event_BattleRoyale);
		void UpdateBattleState(E_BattleState_BattleRoyale NewState);
		void GetGameState(class ABP_GameState_BattleRoyale_C** Output_Get);
		void GetPlayerStartOnWaitingland(TArray<class APlayerStart*>* PlayerStarts);
		void GetBattleRoyaleMode(class ABP_Mode_BattleRoyale_C** AsBPSCMBattleRoyale);
		void InitModeSetting();
		void GMSpawnAI();
		void OnMatchEnd(int32_t RPCID);
		void OnBattleStateChanged(E_BattleState_BattleRoyale OldState, E_BattleState_BattleRoyale NewState);
		void ReceiveBattleTick(float BattleTime, float DeltaTime);
		void PreSettle(class ASCMPlayerState* Player, ESCMPlayerOutType OutType);
		void BattleInitFinished();
		void OnDSClose();
		void ReceivePlayerJoinBattle(class ASCMPlayerState* NewPlayer, bool IsAI);
		void ReceivePlayerBattleEnd(class ASCMPlayerState* Player, ESCMPlayerOutType OutType);
		void UpdateAliveTeamsAndPlayers();
		void MatchEnd();
		void VehicleSnapshot();
		void Snapshot();
		void CustomEvent_1();
		void OnCountDownFinished();
		void ExecuteUbergraph_BP_Logic_BattleRoyale(int32_t EntryPoint);
		void BattleStateChanged__DelegateSignature(E_BattleState_BattleRoyale NewState);
		void OnGoInToBattleState__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
