#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x518 - 0x508)
// BlueprintGeneratedClass Projectile_VH_Hover_WL04_StickyBomb.Projectile_VH_Hover_WL04_StickyBomb_C
class AProjectile_VH_Hover_WL04_StickyBomb_C : public ADefaultProjBullet_C
{
public:
	class UParticleSystemComponent*              FX_Hover_WL04_waring;                              // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Bullet;                                            // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProjectile_VH_Hover_WL04_StickyBomb_C* GetDefaultObj();

};

}


