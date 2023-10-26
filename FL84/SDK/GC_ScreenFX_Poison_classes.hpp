#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A0 - 0x298)
// BlueprintGeneratedClass GC_ScreenFX_Poison.GC_ScreenFX_Poison_C
class AGC_ScreenFX_Poison_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_ScreenFX_Poison_C* GetDefaultObj();

	bool IsObservationTarget(class ASolarCharacter* Target, bool CallFunc_K2_IsAlive_ReturnValue, bool CallFunc_IsBeingSpectated_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, int32 CallFunc_PlaySound2Dbyname_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsObservationTarget_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, int32 CallFunc_PlaySound2Dbyname_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsObservationTarget_ReturnValue);
};

}


