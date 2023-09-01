#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * BlueprintGeneratedClass Projectile_BMphy08_Primary.Projectile_BMphy08_Primary_C
	 * Size -> 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
	 */
	class AProjectile_BMphy08_Primary_C : public ADefaultProjBullet_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_Projectile_BMphy08_Primary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
