#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3D0 - 0x348)
// WidgetBlueprintGeneratedClass UI_RankUpgrade_Anim.UI_RankUpgrade_Anim_C
class UUI_RankUpgrade_Anim_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Rank_LostStar_Anim;                                // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_GetStar_Anim;                                 // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_07;                              // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_05;                              // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_04;                              // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_03;                              // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_02;                              // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_01;                              // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Downgrade_Anim;                               // 0x390(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Rank_Upgrade_Anim_06;                              // 0x398(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                MI_Down_HighRank;                                  // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MI_Down_LowRank;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MI_HighRank_Wipes;                                 // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UParticleSystemWidget*                 Particle_Upgrade;                                  // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Rank_Icon_C*                       UI_Rank_Icon_High;                                 // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Rank_Icon_C*                       UI_Rank_Icon_Low;                                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_RankUpgrade_Anim_C* GetDefaultObj();

	class FString GetModuleName();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_8();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_7();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_6();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_5();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_4();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_3();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_2();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_1();
	void SequenceEvent__ENTRYPOINTUI_RankUpgrade_Anim_0();
	void OnChangeRankEnd();
	void ExecuteUbergraph_UI_RankUpgrade_Anim(int32 EntryPoint);
};

}


