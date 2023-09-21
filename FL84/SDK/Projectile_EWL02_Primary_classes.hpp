#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x518 - 0x508)
// BlueprintGeneratedClass Projectile_EWL02_Primary.Projectile_EWL02_Primary_C
class AProjectile_EWL02_Primary_C : public ADefaultProjBullet_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       Arrow;                                             // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_EWL02_Primary_C* GetDefaultObj();

	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void ExecuteUbergraph_Projectile_EWL02_Primary(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult);
};

}


