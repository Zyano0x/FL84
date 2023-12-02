#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Projectile_VH_Hover_Soroll02_AutoGun_Tracer.Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C
	 * Size -> 0x0008 (FullSize[0x0530] - InheritedSize[0x0528])
	 */
	class AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C : public ADefaultProjBullet_C
	{
	public:
		class UParticleSystemComponent*                            Bullet;                                                  // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
