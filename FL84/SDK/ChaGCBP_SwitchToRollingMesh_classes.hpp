#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x318 - 0x2B0)
// BlueprintGeneratedClass ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C
class AChaGCBP_SwitchToRollingMesh_C : public AChaGC_SwitchToDuckRollingMesh
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_FxFade_8BBDA8D746ED656413E1B4B6DF587EEF; // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_8BBDA8D746ED656413E1B4B6DF587EEF; // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_248C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       SmokeParticleAsset;                                // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SmokeParticleRelativeRotation;                     // 0x2D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_248D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UB_DuckRollingMeshComponent_C*         MeshComponent;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              _ParticleComponent;                                // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           SpeedToSmokeRatCurve;                              // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           SpeedToFxRatCurve;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingRolingLoop;                               // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingAirLoop;                                  // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2491[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASolarCharacter*                       SolarCharacter;                                    // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChaGCBP_SwitchToRollingMesh_C* GetDefaultObj();

	void TryStopAirLoop();
	void TryStopRollingLoop();
	void TryStartAirLoop();
	void TryStartRollingLoop();
	void StopLoopSound();
	void UpdateRollingSound(class USolarAkGameObject* AkGameObject, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ASolarCharacterBase* K2Node_DynamicCast_AsSolar_Character_Base, bool K2Node_DynamicCast_bSuccess, class USolarAkGameObject* CallFunc_GetSolarAkGameObject_ReturnValue);
	void UpdateParticleParamsBySpeed(float Speed, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1);
	bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UB_DuckRollingMeshComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	bool OnActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActiveInternal_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void FadeIn();
	void FadeOut();
	void ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_VSizeXY_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


