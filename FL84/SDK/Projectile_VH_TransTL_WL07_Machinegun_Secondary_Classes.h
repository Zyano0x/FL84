﻿#pragma once

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
	 * BlueprintGeneratedClass Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C
	 * Size -> 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
	 */
	class AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C : public ADefaultProjBullet_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0508(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_OnExplode();
		void ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif