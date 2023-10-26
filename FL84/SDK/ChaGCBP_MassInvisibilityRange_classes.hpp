#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass ChaGCBP_MassInvisibilityRange.ChaGCBP_MassInvisibilityRange_C
class UChaGCBP_MassInvisibilityRange_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UChaGCBP_MassInvisibilityRange_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCharacterLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue);
};

}


