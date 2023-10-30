#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x45C - 0x400)
// WidgetBlueprintGeneratedClass UI_UserFission_Progress_Idol.UI_UserFission_Progress_Idol_C
class UUI_UserFission_Progress_Idol_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Bar_BG;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Bar;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Progress;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Progress_Score;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_Idol_C*     RewardSlot_1;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_Idol_C*     RewardSlot_2;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_Idol_C*     RewardSlot_3;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_Idol_C*     RewardSlot_4;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_Idol_C*     RewardSlot_5;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Text_Progress;                                     // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Style;                                             // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_UserFission_Progress_Idol_C* GetDefaultObj();

	void OnClicked_B1592C6B406ECEC7AFA4F5B68CFC04C4();
	void OnClicked_53A4F9B14B3DDCF8A3206F891D9BED1B();
	void OnClicked_18E53CF9469A391F1C3CC1B93C50A870();
	void OnClicked_89C84DF54C3BB2A2D790478EEEE71439();
	void OnClicked_C0F5E6674126E2AF9CE69FB3C4A373D6();
	void OnClicked_D94532B84783D447ED0804AD191016B6();
	void OnClicked_AFA7CC1840B3C773C89901A5C7047A93();
	void OnClicked_A1F5BB24416C50FE9BCEC98B1F7FEE4F();
	void OnClicked_5D878B724C25FB689AF0129C91A9E1FC();
	void OnClicked_97FF0A3043182FE85FA4128ECA8F775C();
	void Destruct();
	void ConstructCopy();
	class FString GetModuleName();
	void SetStyle(int32 Style, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 Temp_int_Variable, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, int32 Temp_int_Variable_1, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, int32 Temp_int_Variable_2, const struct FVector2D& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_UserFission_Progress_Idol(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


