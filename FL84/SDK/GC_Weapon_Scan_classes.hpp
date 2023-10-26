#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A8 - 0x298)
// BlueprintGeneratedClass GC_Weapon_Scan.GC_Weapon_Scan_C
class AGC_Weapon_Scan_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScanRadius;                                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_Weapon_Scan_C* GetDefaultObj();

	void PlaySound(class ASolarCharacter* CueOwner, const struct FVector& CueLocation, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, class ASolarPlayerController* K2Node_DynamicCast_AsSolar_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_1, class ASolarCharacter* CallFunc_GetViewportFocusedCharacter_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsTeammateWith_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct FGameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct FGameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct FGameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct FVector& CallFunc_BreakGameplayCueParameters_Location, const struct FVector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


