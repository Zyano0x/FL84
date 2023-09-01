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
	 * Class KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FSphericalLimit>                             SphericalLimits;                                         // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCapsuleLimit>                               CapsuleLimits;                                           // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlanarLimit>                                PlanarLimits;                                            // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
