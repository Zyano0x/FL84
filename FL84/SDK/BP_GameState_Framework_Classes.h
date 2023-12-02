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
	 * BlueprintGeneratedClass BP_GameState_Framework.BP_GameState_Framework_C
	 * Size -> 0x0079 (FullSize[0x0701] - InheritedSize[0x0688])
	 */
	class ABP_GameState_Framework_C : public ASCustomGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0688(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_PlayerManager_C*                                PlayerManager;                                           // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBasicSystemReady_1;                                    // 0x06A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bBasicSystemReady_1;                                     // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V9TL[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOBPlayerListChanged;                                   // 0x06B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRoomDataChanged;                                       // 0x06C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    WarmGameID;                                              // 0x06D8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DLRL[0x4];                                   // 0x06DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerBattleStateChanged;                              // 0x06E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnGameStateChanged;                                      // 0x06F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESCMInGameState                                            GameState;                                               // 0x0700(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_GameState();
		void SetGameState(ESCMInGameState NewState);
		void OnDataManagerPrepare();
		void ReceiveBeginPlay();
		void OnOBPlayerListChange();
		void OnCustomRoomDataChange(const struct FCustomRoomData& InCustomRoomData);
		void OnPlayerBattleStateChange(class ASCMPlayerState* PlayerState);
		void ExecuteUbergraph_BP_GameState_Framework(int32_t EntryPoint);
		void OnGameStateChanged__DelegateSignature(ESCMInGameState NewState);
		void OnPlayerBattleStateChanged__DelegateSignature(class ASCMPlayerState* Player);
		void OnRoomDataChanged__DelegateSignature(const struct FCustomRoomData& RoomData);
		void OnOBPlayerListChanged__DelegateSignature();
		void OnBasicSystemReady_0__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
