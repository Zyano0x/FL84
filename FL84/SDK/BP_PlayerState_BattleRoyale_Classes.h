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
	 * BlueprintGeneratedClass BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C
	 * Size -> 0x0035 (FullSize[0x0E35] - InheritedSize[0x0E00])
	 */
	class ABP_PlayerState_BattleRoyale_C : public ABP_PlayerState_Framework_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E00(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_BuyResurrection_C*                              BPC_BuyResurrection;                                     // 0x0E08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USolarUserWidget*                                    DeathUI;                                                 // 0x0E10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_PlayerBattleState_BattleRoyale                           PlayerBattleState;                                       // 0x0E18(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XHKC[0x7];                                   // 0x0E19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestReplied;                                        // 0x0E20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    IntervenedByAI;                                          // 0x0E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFirstDive;                                              // 0x0E34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool PlayerCanRebirthBlueprint();
		bool PlayerIsResurrecting();
		bool IsPlayerWaitingForTeammatesHelp();
		void GetItemData(int32_t ItemID, bool* Valid, int32_t* ID, int32_t* Quality);
		void GetPlayerChestOpen(class FString* Output);
		void GetSinglePlayerItem(int32_t ItemID, bool* HasItem, int32_t* count);
		void GetWeaponPartData(int32_t ItemID, bool* Valid, int32_t* ID, int32_t* Quality);
		void GetPlayerItems(class FString* Output);
		void GetPlayerAccessories(class FString* Output);
		void SetIntervenedByAI();
		void GetNearestPos(E_GuidTargetType Index);
		void OnRep_PlayerBattleState();
		void sSetPlayerState(E_PlayerBattleState_BattleRoyale State);
		void ReceiveBeginPlay();
		void Event_RespondReconnection();
		void ResurrectionStateChange(EResurrectionState NewState);
		void RequestNearestPos(E_GuidTargetType Type);
		void OnNearestPosReceived(E_GuidTargetType Type, const struct FVector& Pos);
		void OnPlayerGainExperience(int32_t GainedExp, int32_t CurrentExp, int32_t TotalExp, EExpBehaviorType BehaviorType);
		void DelayAndBeginSpectate();
		void ExecuteUbergraph_BP_PlayerState_BattleRoyale(int32_t EntryPoint);
		void OnRequestReplied__DelegateSignature(E_GuidTargetType Type, const struct FVector& Pos);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
