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
	 * BlueprintGeneratedClass BP_ReviveItemManger_1.BP_ReviveItemManger_0_C
	 * Size -> 0x00E8 (FullSize[0x0360] - InheritedSize[0x0278])
	 */
	class ABP_ReviveItemManger_0_C : public AGameReviveItemManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    ReviveItem;                                              // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_687V[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ASolarPlayerState*, int32_t>                    Player_ReviveTimes;                                      // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    AdvanceNoticeTime;                                       // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X5H6[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FF_ReviveItemData>                           ReviveItemData;                                          // 0x02E0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ClearItemNotice;                                         // 0x02F0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		bool                                                       AdvanceNotice;                                           // 0x02F1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_JKR2[0x2];                                   // 0x02F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurTime;                                                 // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCanReviveImmediatelyWhenDown;                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RTEK[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ReviveDisableCountDown;                                  // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReviveStartRecycleTime;                                  // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RJBG[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_ReviveItemSoundType, class FString>                 NoticeSound;                                             // 0x0308(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UUI_Resurrect_C*                                     ResurrectByItemUI;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetResurrectByItemUI(class UUI_Resurrect_C** Output_Get);
		void SetPlayerReviveData(class ASolarPlayerState* Player, const struct FF_ReviveItemData& Data);
		void GetPlayerReviveData(class ASolarPlayerState* Player, struct FF_ReviveItemData* Data, bool* bFind);
		void RemovePlayerFromRevivingPlayerArr(class ASolarPlayerState* Player);
		void AddPlayerIntoRevivingPlayerArr(class ASolarPlayerState* Player);
		void OnRep_AdvanceNotice();
		void OnRep_ClearItemNotice();
		bool STrytoRevivePlayerwithItem(class ASolarPlayerState* Player);
		void SetPlayerUseReviveItemTimes(class ASolarPlayerState* Player);
		void AGetPlayerUseReviveItemTimes(class ASolarPlayerState* Player, int32_t* Value);
		bool CanPlayerUseReviveItem(class ASolarPlayerState* InPlayerState, bool bCheckItemNum);
		bool CanGlobalUseReviveItem();
		void RevivePlayer(class ASolarCharacter* _, const struct FTransform& __, bool* _bool_);
		void ReceiveBeginPlay();
		void Event_ClearRevive();
		void OnPlayerResurrected(E_ResurrectType ResurrectType, class ABP_PlayerState_Framework_C* TargetPlayer);
		void Event_ClearReviveNotifyInAdvance();
		void Event_InitReviveItem();
		void UpdateTime();
		void DownReviveImmediately(class ASolarPlayerState* Player);
		void OnPlayerHealthStateChanged(class ABP_PlayerState_Framework_C* InPlayerState, E_CharacterHealthState NewState);
		void ReviveDisableNotice(int32_t Time);
		void Event_PlayerReconnect(class ASCMPlayerState* Player);
		void OnStartReviveItemRecycleCountDownDataRequested();
		void OnSpecTargetChanged_Event_1(class ASolarPlayerState* OldTarget, class ASolarPlayerState* NewTarget);
		void ExecuteUbergraph_BP_ReviveItemManger_1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
