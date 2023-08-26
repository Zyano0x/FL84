﻿#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * BlueprintGeneratedClass Projectile_EWL02_Primary.Projectile_EWL02_Primary_C
	 * Size -> 0x0010 (FullSize[0x0518] - InheritedSize[0x0508])
	 */
	class AProjectile_EWL02_Primary_C : public ADefaultProjBullet_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     Arrow;                                                   // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
		void ExecuteUbergraph_Projectile_EWL02_Primary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
