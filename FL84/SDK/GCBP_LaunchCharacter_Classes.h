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
	 * BlueprintGeneratedClass GCBP_LaunchCharacter.GCBP_LaunchCharacter_C
	 * Size -> 0x0009 (FullSize[0x02A1] - InheritedSize[0x0298])
	 */
	class AGCBP_LaunchCharacter_C : public AGameplayCueNotify_Actor
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSummonedJumpPad;                                       // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
