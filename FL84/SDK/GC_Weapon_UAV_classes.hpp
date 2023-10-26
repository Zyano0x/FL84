#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x58 - 0x50)
// BlueprintGeneratedClass GC_Weapon_UAV.GC_Weapon_UAV_C
class UGC_Weapon_UAV_C : public UGameplayCueNotify_Static
{
public:
	class UParticleSystem*                       ParticleEffect;                                    // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_Weapon_UAV_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UAnimMontage* Temp_object_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class ASolarPlayerWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_OnActive_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* K2Node_Select_Default, float CallFunc_Montage_Play_ReturnValue);
};

}


