#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x320 - 0x308)
// BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C
class AAbility_VH_Hover_WL04_StickyBomb_Explode_C : public ASolarAbility
{
public:
	uint8                                        Pad_2157[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX_Hover_WL04_Hit;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAbility_VH_Hover_WL04_StickyBomb_Explode_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostAkEventByName_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


