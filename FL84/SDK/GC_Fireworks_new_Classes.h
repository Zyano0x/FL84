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
	 * BlueprintGeneratedClass GC_Fireworks_new.GC_Fireworks_new_C
	 * Size -> 0x004A (FullSize[0x02E2] - InheritedSize[0x0298])
	 */
	class AGC_Fireworks_new_C : public AGameplayCueNotify_Actor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioComponent;                                          // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FireworksMuzzleVFX;                                      // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     FireworksExplosionVFX;                                   // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              FireworksMuzzleAudio;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              FireworksExplosionAudio;                                 // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		bool                                                       CanSetCacheLocationLeft;                                 // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanSetCacheLocationRight;                                // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void PlayFireworksExplosionAudioRight(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
		void PlayFireworksExplosionAudioLeft(const class FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GC_Fireworks_new(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
