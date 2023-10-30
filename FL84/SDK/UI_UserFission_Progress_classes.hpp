#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C (0x45C - 0x400)
// WidgetBlueprintGeneratedClass UI_UserFission_Progress.UI_UserFission_Progress_C
class UUI_UserFission_Progress_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Bar_BG;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Bar;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Progress;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Progress_Score;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_C*          RewardSlot_1;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_C*          RewardSlot_2;                                      // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_C*          RewardSlot_3;                                      // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_C*          RewardSlot_4;                                      // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserFission_RewardSlot_C*          RewardSlot_5;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Text_Progress;                                     // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Style;                                             // 0x458(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_UserFission_Progress_C* GetDefaultObj();

	void OnClicked_CA612B6647EF4028291F9CA18BABF47C();
	void OnClicked_A857CA7C4EBDE3E587F101B8CB28B925();
	void OnClicked_ED8AB56241BB339CD4A1F7AA112B2033();
	void OnClicked_4DEF67E04C08C756B3765D9C0D581EBB();
	void OnClicked_20254D7D4C47FC43DD516D913F9D9667();
	void OnClicked_D5BE853143C01426CC12DE955F87E71D();
	void OnClicked_7208726142552038DAF911B3E586E5A2();
	void OnClicked_FE759D364A735D888F45BD83F41FAF17();
	void OnClicked_14014EAB474C0EA6DF8A3F936262B99A();
	void OnClicked_CFFFAFF9461867E37119458BD2CD8302();
	void Destruct();
	void ConstructCopy();
	class FString GetModuleName();
	void SetStyle(int32 Style, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 Temp_int_Variable, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, int32 Temp_int_Variable_1, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, int32 Temp_int_Variable_2, const struct FVector2D& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_UserFission_Progress(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


