#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass ChaGCBP_AntiexposureSuit.ChaGCBP_AntiexposureSuit_C
class UChaGCBP_AntiexposureSuit_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UChaGCBP_AntiexposureSuit_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, bool CallFunc_IsBeingRescue_ReturnValue, bool CallFunc_IsDying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


