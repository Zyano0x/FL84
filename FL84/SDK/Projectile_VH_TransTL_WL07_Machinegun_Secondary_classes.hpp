#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x510 - 0x508)
// BlueprintGeneratedClass Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C
class AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C : public ADefaultProjBullet_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C* GetDefaultObj();

	void K2_OnExplode();
	void ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


