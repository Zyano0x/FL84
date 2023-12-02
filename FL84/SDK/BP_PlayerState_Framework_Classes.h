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
	 * BlueprintGeneratedClass BP_PlayerState_Framework.BP_PlayerState_Framework_C
	 * Size -> 0x0138 (FullSize[0x0E00] - InheritedSize[0x0CC8])
	 */
	class ABP_PlayerState_Framework_C : public ASCMPlayerState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CC8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0CD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     DeathLocations;                                          // 0x0CD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     LandLocations;                                           // 0x0CE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    ResurrectTime;                                           // 0x0CF8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ResurrectLocation;                                       // 0x0CFC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ResurrectUI[0x28];                                       // 0x0D08(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FS_ResurrectInfo                                    ResurrectOptions;                                        // 0x0D30(0x0005) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_084C[0x3];                                   // 0x0D35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnResurrectionBegin;                                     // 0x0D38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnResurrectionFinished;                                  // 0x0D48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUI_Resurrect_C*                                     ResurrectUIObj;                                          // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_ResurrectType                                            ResurrectType;                                           // 0x0D60(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsResurrecting;                                         // 0x0D61(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_YKK1[0x6];                                   // 0x0D62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Logic_Framework_C*                               Logic;                                                   // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bShouldSettle;                                           // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OYQT[0x7];                                   // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUI_MapMark_ReviveTeammates_C*>               UI_MapMark_ReviveTeammatesArr;                           // 0x0D78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UActorMarkBase*                                      DeathBoxMark;                                            // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SI_RebornLine_C*                                 RebornLine;                                              // 0x0D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LandedDetectionHandel;                                   // 0x0D98(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UMapMarkBase*>                                DeathBoxMiniMapMark;                                     // 0x0DA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnResurrectTimeChange;                                   // 0x0DB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    AiCompCd;                                                // 0x0DC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9UER[0x4];                                   // 0x0DC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorMarkBase*                                      RebirthedDeathBoxMark;                                   // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsReviveSkydiving;                                      // 0x0DD0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_XUK1[0x7];                                   // 0x0DD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DBox_Default_C*                                  DeathBoxRef;                                             // 0x0DD8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DeathBoxLoc;                                             // 0x0DE0(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_CharacterHealthState                                     CharacterHealthState;                                    // 0x0DEC(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		EPlayerResurrectType                                       ResurrectMethod;                                         // 0x0DED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6EBO[0x2];                                   // 0x0DEE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TempDeathBoxLoc;                                         // 0x0DF0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ResurrectTimeCfg;                                        // 0x0DFC(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_TeammatesState();
		float CalculateAccountExp();
		void OnRep_BattleVoiceId();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		int32_t CalculateZomborg();
		void NotifyUpdateTeamMateLevelUI();
		void OnResurrectTimeChangedCopy(int32_t ResurrectTime, int32_t Cfg_ResurrectTime);
		void OnRep_RTCType();
		void OnRep_UserId();
		void OnReceiveExposedLocation(class ASolarPlayerState* OtherPS, const struct FVector& Location);
		int32_t GetWeaponSettlmentExp(int32_t weaponid);
		void ReceiveClientInitialize(class AController* C);
		void ReceivePostInitializeComponents();
		void ReceiveTalentStateSet(ETalentState InState);
		void ReceiveSideReplicatedAfter();
		int32_t GetExpAddValueFromItem(int32_t ItemID);
		void OnStopReceiveExposedLocation(class ASolarPlayerState* OtherPS);
		float GetExpSettleModePunishRatio();
		void ReceiveTeamIdReplicated(bool bRelatedToSelf);
		int32_t LuaGetExpFromWeaponImplementation(EExpBehaviorType InBehaviorType, int32_t InParamOne, int32_t InParamTwo, float InDamage);
		float CalculateCharacterExp();
		class FString GetModuleName();
		void OnResurrectTimeChanged(int32_t ResurrectTime, int32_t Cfg_ResurrectTime);
		void GetResurrectLocation(struct FVector* Location);
		void RemoveAllReviveMark();
		struct FVector GetDeathBoxLocation();
		bool PlayerCanRebirthBlueprint();
		void OnRep_CharacterHealthState();
		void HandlingIsResurrecting();
		void GetSpecialHitTypeArray(TArray<int32_t>* NewParam);
		void SetDeathBoxRef(class ABP_DBox_Default_C* InDeathBox);
		void OnRep_bIsReviveSkydiving();
		void RemovePunctuation(bool bKeepRebornLine);
		int32_t GetExpByBehavior(EExpBehaviorType InBehaviorType, int32_t InParamOne, int32_t InParamTwo, float InDamage);
		void IsAiCompCdClear(bool* Result);
		void OnRep_bIsResurrecting();
		void CreatePunctuation(const struct FVector& InputPin);
		void GetLogicBase(class UBP_Logic_Framework_C** Output_Get);
		void OnRep_ResurrectTime();
		void DeathCleanupUI();
		void GetResurrectUI(class UUI_Resurrect_C** Output_Get);
		void GetLastDeathLocation(struct FVector* Output);
		void OnCharacterLanded();
		void OnPlayerInteract(E_Interact_Type InteractType);
		void ReceiveBeginPlay();
		void OnCharacterEjectStateChanged(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter);
		void OnTimeCut();
		void sRequestResurrectInTime(int32_t Time, E_ResurrectType Type, const struct FVector& Location, const struct FS_ResurrectInfo& options, bool bUseParamZ);
		void cShowResurrectUI(int32_t Time, E_ResurrectType Type);
		void DropPickableItem(class UObject* Item);
		void PickupPickableItem(class UObject* Item);
		void Event_CreateDeathBoxMark();
		void Event_OnResEnd(E_ResurrectType ResurrectType, class ABP_PlayerState_Framework_C* TargetPlayer);
		void AiCompCountDown();
		void ResetAiCompTimer(int32_t Time);
		void OnPlayerGainExperience(int32_t GainedExp, int32_t CurrentExp, int32_t TotalExp, EExpBehaviorType BehaviorType);
		void COnPlayerGainExperience(int32_t GainedExp, int32_t CurrentExp, int32_t TotalExp, EExpBehaviorType Type);
		void Event_EnterSkydiveFly();
		void OnInteractBtnHit(class UObject* Publisher, class UObject* Payload, TArray<class FString> MetaData);
		void SRequestActorRemoval(class AActor* TargetActor);
		void OnOtherPlayerStopSpectateMyTeam(class ASolarSpectateInfo* InSpectateInfo);
		void ExecuteUbergraph_BP_PlayerState_Framework(int32_t EntryPoint);
		void OnResurrectTimeChange__DelegateSignature(int32_t Time);
		void OnResurrectionFinished__DelegateSignature(E_ResurrectType ResurrectType, class ABP_PlayerState_Framework_C* TargetPlayer);
		void OnResurrectionBegin__DelegateSignature(int32_t Time, E_ResurrectType Type, const struct FVector& Location, const struct FS_ResurrectInfo& options);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
