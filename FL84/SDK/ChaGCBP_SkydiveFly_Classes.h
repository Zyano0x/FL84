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
	 * BlueprintGeneratedClass ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C
	 * Size -> 0x0029 (FullSize[0x0331] - InheritedSize[0x0308])
	 */
	class AChaGCBP_SkydiveFly_C : public AChaGC_SkydiveFly
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Particle;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     EnemyParticleAsset;                                      // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FriendParticleAsset;                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     DefenderParticleAsset;                                   // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowParticleInLowLevelGraphicsQuality;                   // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowEncircleParticle(bool bIsLocalTeam, bool bIsDefender);
		bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, const struct FGameplayCueParameters& Parameters);
		bool WhileActiveInternal(class ASolarCharacter* Character, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
