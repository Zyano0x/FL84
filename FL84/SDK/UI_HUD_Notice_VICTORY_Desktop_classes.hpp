#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x4B4 - 0x4A0)
// WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C
class UUI_HUD_Notice_VICTORY_Desktop_C : public UUINoticeVictory
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_KeyPrompt_C*                       UI_KeyPrompt_Back;                                 // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CountDownTime;                                     // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_HUD_Notice_VICTORY_Desktop_C* GetDefaultObj();

	class FString GetModuleName();
	void PreConstruct(bool IsDesignTime);
	void CloseSelf();
	void OnEndAnimFinish();
	void ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


