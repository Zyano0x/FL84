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
	 * BlueprintGeneratedClass BPC_AiManagerBattleRoyale.BPC_AiManagerBattleRoyale_C
	 * Size -> 0x0119 (FullSize[0x0201] - InheritedSize[0x00E8])
	 */
	class UBPC_AiManagerBattleRoyale_C : public UBPC_AiManagerBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ASCMPlayerState*>                             TempAI;                                                  // 0x00F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FString, int32_t>                               MemberAIOrder;                                           // 0x0100(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SpawnIndex;                                              // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanSpawn;                                               // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ND1Q[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, int32_t>                               PureAIOrder;                                             // 0x0158(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bSpawnPlayerTeammate;                                    // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z0JV[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AiCountPreSpawn;                                         // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RealPlayer;                                              // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WH3P[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASCMPlayerState*>                             TeammateAI;                                              // 0x01B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bTeammateAiFinished;                                     // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XBFP[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_WarmGameConfig                                   WarmGameConfig;                                          // 0x01D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsWarmGame;                                             // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B8MA[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PureAiTeams;                                             // 0x01F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       NewVar_1;                                                // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReplenishAITeammate();
		class UBPC_CountDown_C* GetCountDownComponent();
		void StopAiBehavior();
		bool CanModeSpawnAiTeammate();
		void GetAIController(class ASolarPlayerState* PlayerState, class ASolarBotAIController** Controller);
		void SpawnAI(bool bTeammateAI, const class FString& Team, class ASCMPlayerState** PlayerState);
		void GetSpawnInterval(float* Interval);
		void UpdatePureAiOrder();
		void PickTeam(bool RealPlayerTeam, class FString* Team);
		void DeleteTempAI(int32_t count);
		void RunBehaviourTree(class ASCMPlayerState* Player, class UBehaviorTree* BTAsset);
		struct FVector SpawnLocation();
		bool IsPlayerFull();
		class UBP_Logic_BattleRoyale_C* GetLogicComponent();
		void MatchFinished();
		void PreSpawnAI();
		void ReceiveBeginPlay();
		void SpawnAIDynamic();
		void OnBattleStateChanged(E_BattleState_BattleRoyale NewState);
		void CustomEvent_2();
		void OnPlayerJoin(class ASCMPlayerState* NewPlayer, bool bIsAi);
		void ExecuteUbergraph_BPC_AiManagerBattleRoyale(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
