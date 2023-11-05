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
	 * BlueprintGeneratedClass ChaGCBP_BlindMark_Blind.ChaGCBP_BlindMark_Blind_C
	 * Size -> 0x0009 (FullSize[0x02B9] - InheritedSize[0x02B0])
	 */
	class AChaGCBP_BlindMark_Blind_C : public AChaGC_CharacterActorCueBase
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       HasSetLowPassFilter;                                     // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, const struct FGameplayCueParameters& Parameters);
		bool WhileActiveInternal(class ASolarCharacter* Character, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
