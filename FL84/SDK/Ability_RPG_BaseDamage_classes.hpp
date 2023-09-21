#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3B8 - 0x3B0)
// BlueprintGeneratedClass Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C
class AAbility_RPG_BaseDamage_C : public AWeaponAbilityBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AAbility_RPG_BaseDamage_C* GetDefaultObj();

	void OnLoaded_F1E8D1D244089792BF00E29440E0F852(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Ability_RPG_BaseDamage(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

}


