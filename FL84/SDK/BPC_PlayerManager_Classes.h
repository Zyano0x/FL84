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
	 * BlueprintGeneratedClass BPC_PlayerManager.BPC_PlayerManager_C
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UBPC_PlayerManager_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ABP_PlayerState_Framework_C*>                 AliveRealPlayers;                                        // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ABP_PlayerState_Framework_C*>                 AliveAiPlayers;                                          // 0x00C8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		class UBPC_Death_Framework_C*                              DeathComponent;                                          // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_PlayerState_Framework_C*>                 RealPlayers;                                             // 0x00E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FString, int32_t>                               TeamRealPlayerCount;                                     // 0x00F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		TArray<class ABP_PlayerState_Framework_C*> GetPlayerList(E_PlayerListType Type);
		void ReceiveBeginPlay();
		void OnPlayerDie(class ABP_PlayerState_Framework_C* Player);
		void OnPlayerResurrect(class ABP_PlayerState_Framework_C* Player);
		void BattleStart();
		void PlayerOut(class ASCMPlayerState* Player);
		void OnPlayerJoin(class ASCMPlayerState* NewPlayer, bool bIsAi);
		void ExecuteUbergraph_BPC_PlayerManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
