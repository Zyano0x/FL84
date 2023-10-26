#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass ChaGCBP_CombatRegeneration.ChaGCBP_CombatRegeneration_C
class UChaGCBP_CombatRegeneration_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UChaGCBP_CombatRegeneration_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsPlayerLocallyControlled_ReturnValue);
};

}


