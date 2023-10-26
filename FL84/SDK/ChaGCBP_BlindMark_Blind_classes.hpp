#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2B9 - 0x2B0)
// BlueprintGeneratedClass ChaGCBP_BlindMark_Blind.ChaGCBP_BlindMark_Blind_C
class AChaGCBP_BlindMark_Blind_C : public AChaGC_CharacterActorCueBase
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSetLowPassFilter;                               // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AChaGCBP_BlindMark_Blind_C* GetDefaultObj();

	bool OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters);
	bool WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_IsPlayerLocallyControlled_ReturnValue);
};

}


