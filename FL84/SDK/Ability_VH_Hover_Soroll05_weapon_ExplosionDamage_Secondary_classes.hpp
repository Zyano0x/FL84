#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x319 - 0x308)
// BlueprintGeneratedClass Ability_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary.Ability_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C
class AAbility_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C : public ASolarAbility
{
public:
	uint8                                        Pad_19E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HasExploded;                                       // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AAbility_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Ability_VH_Hover_Soroll05_weapon_ExplosionDamage_Secondary(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


