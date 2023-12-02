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
	 * BlueprintGeneratedClass BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C
	 * Size -> 0x00C0 (FullSize[0x2398] - InheritedSize[0x22D8])
	 */
	class ABP_SolarCharacterPlayer_C : public ASolarCharacter
	{
	public:
		unsigned char                                              UnknownData_4SX7[0x8];                                   // 0x22D8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x22E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USolarAbilityComponent*                              SolarAbility;                                            // 0x22E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PreviousLocation;                                        // 0x22F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time;                                                    // 0x22FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTime;                                             // 0x2300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousTime;                                            // 0x2304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaTime;                                               // 0x2308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DeltaLocation;                                           // 0x230C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnTouch;                                                 // 0x2318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ASI1[0x3];                                   // 0x2319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x231C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           Direction;                                               // 0x2320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              SpeedRecord;                                             // 0x2328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     LocationRecord;                                          // 0x2338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<float>                                              Record_X;                                                // 0x2348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<float>                                              Record_y;                                                // 0x2358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      SpeedFixBase;                                            // 0x2368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_64QA[0x4];                                   // 0x236C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SpeedFix;                                                // 0x2370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEjectingStateChanged;                                  // 0x2378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		E_CharacterEjectState                                      EjectState;                                              // 0x2388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8IIW[0x3];                                   // 0x2389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PoisonDamageNum;                                         // 0x238C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     ShadowAI;                                                // 0x2390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class USolarCameraComponent* GetSolarCameraComponent();
		class USolarSpringArmComponent* GetSolarSpringArmComponent();
		void RefreshRenderConsoleVarForSkydive();
		bool IsObservationTarget();
		float FixSpeed();
		void FigureSpeed();
		float GetFixedY(float NewParam);
		float GetFixedX(float NewParam);
		void SetCameraInput_3();
		void SetCameraInput();
		struct FVector GetFixedLocation(const struct FVector& InLocation);
		float GetFixedSpeed(float NewParam);
		void DecelerationEffectUpdate(float* Altitude, TArray<class UParticleSystemComponent*>* Effects);
		void UndecelerationEffectUpdate(float* Altitude, TArray<class UParticleSystemComponent*>* Effects);
		void InpActEvt_BackSpace_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Home_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_End_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Delete_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveUpdateSkydiveLandingEffects(float DistanceToGround);
		void ReceivePlaySkydiveLandingEndEffects(bool bIsInWater);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void ReceiveUpdateSkydiveFlyingEffects(float FallingRate);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void SetOpenScopeDuration(float InDuration, bool bInOpenScope);
		void Event_UseReviveItem(class ASCMPlayerState* Player);
		void OnSkydiveStageChanged(ESkydiveStage LastStage, ESkydiveStage CurrentStage);
		void OnCharacterEjectStateChanged(E_CharacterEjectState State);
		void ExecuteUbergraph_BP_SolarCharacterPlayer(int32_t EntryPoint);
		void OnEjectingStateChanged__DelegateSignature(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
