#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x86 (0x486 - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_SecondTab.UI_Component_SecondTab_C
class UUI_Component_SecondTab_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarButton*                          Btn_SecondTab;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg_Lim;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Line;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Line_Lim;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_BG;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Line;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_1Line;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_SecendTab;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRedHint_General_C*               Solar_RedHintPoint;                                // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Tap;                                           // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        _0_ID;                                             // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                __;                                                // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ___0_;                                             // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Tab__;                                             // 0x47C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Color_SecondTab                 ColorType;                                         // 0x484(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRedNum;                                        // 0x485(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Component_SecondTab_C* GetDefaultObj();

	void BP_OnItemSelectionChangedCopy(bool bIsSelected);
	void Destruct();
	void ConstructCopy();
	void OnListItemObjectSetCopy(class UObject* ListItemObject);
	class FString GetModuleName();
	void SetIsSelected(bool IsSelected, enum class E_Color_SecondTab Color, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class E_Color_SecondTab Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class E_Color_SecondTab Temp_byte_Variable_7, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable_4, enum class E_Color_SecondTab Temp_byte_Variable_8, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, enum class E_Color_SecondTab Temp_byte_Variable_9, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, enum class E_Color_SecondTab Temp_byte_Variable_10, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, enum class E_Color_SecondTab Temp_byte_Variable_11, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, float K2Node_Select_Default, bool Temp_bool_Variable_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class E_Color_SecondTab Temp_byte_Variable_16, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, const struct FLinearColor& K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, const struct FLinearColor& K2Node_Select_Default_8, const struct FLinearColor& K2Node_Select_Default_9, const struct FLinearColor& K2Node_Select_Default_10, const struct FLinearColor& K2Node_Select_Default_11, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ChangeTabState();
	void ExecuteUbergraph_UI_Component_SecondTab(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, float Temp_float_Variable, float Temp_float_Variable_1, enum class E_Color_SecondTab Temp_byte_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class E_Color_SecondTab Temp_byte_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, enum class E_Color_SecondTab Temp_byte_Variable_4, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, enum class E_Color_SecondTab Temp_byte_Variable_5, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, bool Temp_bool_Variable_5, const struct FLinearColor& Temp_struct_Variable_16, enum class E_Color_SecondTab Temp_byte_Variable_6, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, bool Temp_bool_Variable_6, enum class E_Type_RedHint Temp_byte_Variable_7, enum class E_Type_RedHint Temp_byte_Variable_8, enum class E_Color_SecondTab Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class E_Color_SecondTab Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class E_Color_SecondTab Temp_byte_Variable_19, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const class FString& CallFunc_GetLocalText_ReturnValue, const class FString& K2Node_Select_Default_2, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, const struct FLinearColor& K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, const struct FLinearColor& K2Node_Select_Default_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default_9, enum class E_Type_RedHint K2Node_Select_Default_10, const struct FLinearColor& K2Node_Select_Default_11, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float K2Node_Select_Default_12, enum class ESlateVisibility K2Node_Select_Default_13, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_14);
};

}

