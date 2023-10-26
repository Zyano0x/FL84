#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x2BC - 0x2B0)
// BlueprintGeneratedClass ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C
class AChaGCBP_BlindMark_SlowDown_C : public AChaGC_CharacterActorCueBase
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        EffectHandle;                                      // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChaGCBP_BlindMark_SlowDown_C* GetDefaultObj();

	bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters);
	bool WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContextFromCueParameters_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, int32 Temp_int_Array_Index_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_GetActorEffectPSComponents_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


