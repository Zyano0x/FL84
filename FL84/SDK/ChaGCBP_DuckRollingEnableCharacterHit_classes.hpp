#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x2EC - 0x2B0)
// BlueprintGeneratedClass ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C
class AChaGCBP_DuckRollingEnableCharacterHit_C : public AChaGC_CharacterActorCueBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UB_DuckRollingProxyComponent_C*        ProxyCompoent;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ParticleAsset;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UB_DuckRollingMeshComponent_C*         MeshComponent;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              _ParticleComponent;                                // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset;                                    // 0x2E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AChaGCBP_DuckRollingEnableCharacterHit_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UB_DuckRollingMeshComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_1);
};

}


