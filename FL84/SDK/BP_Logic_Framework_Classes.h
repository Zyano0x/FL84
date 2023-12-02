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
	 * BlueprintGeneratedClass BP_Logic_Framework.BP_Logic_Framework_C
	 * Size -> 0x0032 (FullSize[0x01B2] - InheritedSize[0x0180])
	 */
	class UBP_Logic_Framework_C : public UCGMLogicComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0180(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bBattleStarted;                                          // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bZeroMatchFinished;                                      // 0x0189(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AOQD[0x6];                                   // 0x018A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerJoin;                                            // 0x0190(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnZeroMatchFinished;                                     // 0x01A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bConfigInitiated;                                        // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDSClosing;                                              // 0x01B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CustomRoomStart();
		void OnPlayerQuit(class ASCMPlayerState* Player);
		void PresettleAll();
		void FinishConfigInitiate();
		void Update();
		void GetCurrentPlayerCount(int32_t* Result);
		void ReceiveBeginPlay();
		void OnPlayerOfflineTimeOut(class ASCMPlayerState* OfflineTimeoutPlayer);
		void OnPlayerGiveUp(class ASCMPlayerState* OfflineTimeoutPlayer);
		void PreSettle(class ASCMPlayerState* Player, ESCMPlayerOutType OutType);
		void ReceivePlayerBattleEnd(class ASCMPlayerState* Player, ESCMPlayerOutType OutType);
		void BattleInitFinished();
		void ReceiveServerLevelLoaded(const class FString& LevelName);
		void ReceiveBattleBegin();
		void OnPlayerDisconnect(class ASCMPlayerState* OfflinePlayer);
		void OnMatchEnd(int32_t RPCID);
		void ReceivePlayerJoinBattle(class ASCMPlayerState* NewPlayer, bool IsAI);
		void OnDSClose();
		void OnPlayerCheat(class ASCMPlayerState* CheatPlayer);
		void OnPlayerReconnect(class ASCMPlayerState* Player);
		void OnPlayerAbnormal(class ASCMPlayerState* CheatPlayer);
		void ExecuteUbergraph_BP_Logic_Framework(int32_t EntryPoint);
		void OnZeroMatchFinished__DelegateSignature();
		void OnPlayerJoin__DelegateSignature(class ASCMPlayerState* NewPlayer, bool bIsAi);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
