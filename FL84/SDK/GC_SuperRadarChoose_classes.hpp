#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2D0 - 0x298)
// BlueprintGeneratedClass GC_SuperRadarChoose.GC_SuperRadarChoose_C
class AGC_SuperRadarChoose_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        FXRootHandle;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FXEyeHandle;                                       // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASolarCharacter*                       CacheCharacter;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                OnsetSound_1P;                                     // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                OnsetSound_3P;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_SuperRadarChoose_C* GetDefaultObj();

	void PlayPlayerEffect(int32 CallFunc_StartActorEffect_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue_1);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
};

}


