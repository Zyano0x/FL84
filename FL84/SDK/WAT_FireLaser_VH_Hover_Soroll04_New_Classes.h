﻿#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * BlueprintGeneratedClass WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C
	 * Size -> 0x0008 (FullSize[0x0248] - InheritedSize[0x0240])
	 */
	class UWAT_FireLaser_VH_Hover_Soroll04_New_C : public USolarWeaponAT_FireLaser
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_ActivateRealFire();
		void ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif