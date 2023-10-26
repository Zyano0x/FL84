#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x428 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C
class UUI_Lobby_Mission_Reward_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Enter;                                        // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Btn_MissionReward;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_GameRecommend;                                 // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Mission_Reward_C* GetDefaultObj();

	void OnClicked_382AA8B344B07F258A4FCC9E9306F1C1();
	void OnSolarUIOpened();
	void Destruct();
	void ConstructCopy();
	void OnSolarUIClosed();
	class FString GetModuleName();
	void Construct();
	void ExecuteUbergraph_UI_Lobby_Mission_Reward(int32 EntryPoint);
};

}


