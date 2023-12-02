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
	 * BlueprintGeneratedClass GC_SuperRadarChoose.GC_SuperRadarChoose_C
	 * Size -> 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
	 */
	class AGC_SuperRadarChoose_C : public AGameplayCueNotify_Actor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FXRootHandle;                                            // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FXEyeHandle;                                             // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     CacheCharacter;                                          // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              OnsetSound_1P;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              OnsetSound_3P;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void PlayPlayerEffect();
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
