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
	 * BlueprintGeneratedClass ChaGCBP_DuckRollingBounce.ChaGCBP_DuckRollingBounce_C
	 * Size -> 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
	 */
	class AChaGCBP_DuckRollingBounce_C : public AChaGC_CharacterActorCueBase
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleAsset;                                           // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnExecuteInternal(class ASolarCharacter* Character, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif