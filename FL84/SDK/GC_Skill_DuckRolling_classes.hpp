#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass GC_Skill_DuckRolling.GC_Skill_DuckRolling_C
class UGC_Skill_DuckRolling_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_Skill_DuckRolling_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_OnActive_ReturnValue);
};

}


