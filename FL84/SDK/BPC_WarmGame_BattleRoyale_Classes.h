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
	 * BlueprintGeneratedClass BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C
	 * Size -> 0x0160 (FullSize[0x0210] - InheritedSize[0x00B0])
	 */
	class UBPC_WarmGame_BattleRoyale_C : public USolarWarmGameComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Logic_BattleRoyale_C*                            MainLogic;                                               // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASCMPlayerState*                                     RealPlayer;                                              // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     VehiclePos;                                              // 0x00C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       GuidArrowVisibility;                                     // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJEH[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     SafeAreaCenter;                                          // 0x00E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     WeaponPos;                                               // 0x00F0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash
		TArray<struct FVector>                                     ItemPos;                                                 // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class ASolarCharacter*                                     LocalCharacter;                                          // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUI_WorldMark_Common_C*                              WorldMark;                                               // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SafeCenter;                                              // 0x0120(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6TYF[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_HUD_Notice_Lv3_C*                                Notice;                                                  // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMargin                                             NoticePadding;                                           // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArrowScale;                                              // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0SWX[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DirectionArrow_C*                                DirectionArrow;                                          // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isShowArrow;                                             // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_183E[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class USolarBotAIConfig*>                    TeammatesAIConfig;                                       // 0x01B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bCanAiReviveByItem;                                      // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4Y6T[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USolarBotAIConfig*                                   DefaultAccompanyBotConfig;                               // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsWarmGame();
		void GetAIPickResult(TArray<int32_t> InCharactetIDs, int32_t* OutCharacterID, int32_t* OutSkinId);
		void CreateWarmLogicActorAndExec(bool* Success);
		void CheckSpAIForWarmGame(bool* SpecialAI);
		void sSetBotBT(class UBehaviorTree* BotBehaviorTree);
		void cShowNotice(bool Visible, const class FString& Text, float Duration);
		void cRequestNearestPosition(E_GuidTargetType Target);
		void OnRep_WeaponPos();
		void UpdatePos();
		void cCreateWorldMark(const struct FVector& Pos, int32_t , class UUI_WorldMark_Common_C** AsUIWorldMarkCommon);
		class ASolarCharacter* cLocalCharacter();
		void cPlayerHasWeapon(bool* HasWeapon, bool* HasVehicleWeapon);
		void UpdateArrowDirection();
		void UpdateItemPos();
		void UpdateWeaponPos();
		void GetGuidArrow(class ABP_DirectionArrow_C** Output_Get);
		void CShowArrow(bool bNewVisibility);
		void UpdateVehiclePos();
		void GetNearestPosition(E_GuidTargetType Target, struct FVector* Location);
		void AGetPlayBattleCount(int32_t* count);
		void SGameModeSpecialConfig(bool* SpecialConfig, int32_t* Order, bool* isB);
		void CPlayerABTest(bool* SpecialConfig);
		void GetMainLogic(class UBP_Logic_BattleRoyale_C** Output_Get);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnSystemReady();
		void PlanyerEnterSafeArea(class AActor* Actor);
		void PlayerLeaveSafeArea(class AActor* Actor);
		void OnNextSafeAreaSetted(const struct FVector& Center, float Radius, float WaitTime, float MoveTime, int32_t Index);
		void OnRequestReceived(E_GuidTargetType Type, const struct FVector& Pos);
		void OnEjectStateChanged(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter);
		void ConfigFinished();
		void CustomEvent_1();
		void ExecuteUbergraph_BPC_WarmGame_BattleRoyale(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
