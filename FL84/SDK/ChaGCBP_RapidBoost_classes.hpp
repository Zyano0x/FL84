#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2E8 - 0x2B8)
// BlueprintGeneratedClass ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C
class AChaGCBP_RapidBoost_C : public ASolarSkillGC_RapidBoost
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          PlayEndSoundHandle;                                // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedScreenEffectHandle;                          // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASolarCharacter*                       CharacterOwner;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        OnActiveFrameCount;                                // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChaGCBP_RapidBoost_C* GetDefaultObj();

	void WhileActive_Impl(int32 CallFunc_StartScreenEffect_ReturnValue, float CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_TimeRemaining, float CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_Duration, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void OnActive_Impl(int32 CallFunc_StartActorEffect_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void OnPlayEndSound(class AActor* CallFunc_GetOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess);
	class UParticleSystemComponent* SpawnEmitter(class UParticleSystem* EmitterTemplate, class USceneComponent* Mesh, class FName BoneName, enum class EPSCPoolMethod PoolingMethod, bool bAbsoluteRotation, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_ChaGCBP_RapidBoost(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_GetFrameCount_ReturnValue, int64 CallFunc_GetFrameCount_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue);
};

}


