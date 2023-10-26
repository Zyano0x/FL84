#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x2BC - 0x2B0)
// BlueprintGeneratedClass ChaGCBP_BlindMark.ChaGCBP_BlindMark_C
class AChaGCBP_BlindMark_C : public AChaGC_CharacterActorCueBase
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectHandle;                                      // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChaGCBP_BlindMark_C* GetDefaultObj();

	bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters);
	bool OnActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, const struct FGameplayCueParameters& NewLocalVar_0, const class FString& OtherEffectID, const class FString& TeammateEffectID, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContextFromCueParameters_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, bool CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue, class UHUDDispatcherBase* CallFunc_GetHUDDispatcher_FromCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue, bool Temp_bool_Variable, const struct FHUDNoticeParams& K2Node_MakeStruct_HUDNoticeParams, const class FString& K2Node_Select_Default, int32 CallFunc_StartActorEffect_ReturnValue_1);
};

}


