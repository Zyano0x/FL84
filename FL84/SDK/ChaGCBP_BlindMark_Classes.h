#pragma once

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
	 * BlueprintGeneratedClass ChaGCBP_BlindMark.ChaGCBP_BlindMark_C
	 * Size -> 0x000C (FullSize[0x02BC] - InheritedSize[0x02B0])
	 */
	class AChaGCBP_BlindMark_C : public AChaGC_CharacterActorCueBase
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    EffectHandle;                                            // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, const struct FGameplayCueParameters& Parameters);
		bool OnActiveInternal(class ASolarCharacter* Character, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
