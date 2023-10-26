#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x331 - 0x308)
// BlueprintGeneratedClass ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C
class AChaGCBP_SkydiveFly_C : public AChaGC_SkydiveFly
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Particle;                                          // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       EnemyParticleAsset;                                // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FriendParticleAsset;                               // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DefenderParticleAsset;                             // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowParticleInLowLevelGraphicsQuality;             // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AChaGCBP_SkydiveFly_C* GetDefaultObj();

	void ShowEncircleParticle(bool bIsLocalTeam, bool bIsDefender, bool Temp_bool_Variable, bool CallFunc_IsLowLevelGraphicsQuality_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UParticleSystem* K2Node_Select_Default, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters, bool CallFunc_OnRemoveInternal_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_WhileActiveInternal_ReturnValue);
};

}


