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
	 * BlueprintGeneratedClass BP_GameState_BattleRoyale.BP_GameState_BattleRoyale_C
	 * Size -> 0x0050 (FullSize[0x0751] - InheritedSize[0x0701])
	 */
	class ABP_GameState_BattleRoyale_C : public ABP_GameState_Framework_C
	{
	public:
		unsigned char                                              UnknownData_IMIO[0x7];                                   // 0x0701(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0708(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_CountDown_C*                                    BPC_CountDown;                                           // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MapID;                                                   // 0x0718(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AirlineID;                                               // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_BattleState_BattleRoyale                                 BattleState;                                             // 0x0720(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M8PS[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BroadcastBattleStateChange;                              // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              WinTeam;                                                 // 0x0738(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
		class UUI_HUD_Notice_VICTORY_C*                            VICTORYUI;                                               // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasTop3Team;                                             // 0x0750(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void GetActualUICountDownTime(float* CountDownTime);
		void CloseEmptyVictoryUI();
		void OnRep_HasTop3Team();
		void ShowEmptyVictoryUI();
		void OnRep_WinTeam();
		void ShowVictoryUI();
		void OnRep_BattleState();
		void OnRep_MapID();
		void ReceiveBeginPlay();
		void OnBattleStateChange(E_BattleState_BattleRoyale ChangeType);
		void StartCountdown(int32_t Time);
		void BattleEnd(const class FString& WinTeam);
		void OnConfigInit();
		void OnShowVictoryUI();
		void NetMulticastCelebrateBattleEnd(const struct FVector& Location);
		void CelebrateBattleEnd(const struct FVector& Location);
		void ExecuteUbergraph_BP_GameState_BattleRoyale(int32_t EntryPoint);
		void BroadcastBattleStateChange__DelegateSignature(E_BattleState_BattleRoyale NowState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
