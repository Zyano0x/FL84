#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x4A0 - 0x420)
// WidgetBlueprintGeneratedClass UI_Component_Option.UI_Component_Option_C
class UUI_Component_Option_C : public USolarCheckButtonWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Panel_Disabled;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarCheckBox*                        SolarCheckBox_Option;                              // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Option;                                        // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         UseText;                                           // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x448(0x18)(Edit, BlueprintVisible)
	int32                                        TextID;                                            // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESolarSupportLanguages            TextPreviewLang;                                   // 0x464(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontSizeForLang                 SpecialLangFont;                                   // 0x468(0x18)(Edit, BlueprintVisible)
	bool                                         Disabled;                                          // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnOptionCheckStateChanged;                         // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCustomClicked;                                    // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OptionType;                                        // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_Option_C* GetDefaultObj();

	void OnInitialized();
	void OnListItemObjectSetCopy(class UObject* ListItemObject);
	class FString GetModuleName();
	void SetTextID(int32 LocTextID);
	void SetText(const class FString& NewParam, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetEnabled(bool Enabled, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ECheckBoxState Temp_byte_Variable_4, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_3);
	void SetOptionType(int32 OptionType, int32 Temp_int_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle);
	void ManualOptionSetIsChecked(bool bIsChecked);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnSelected(bool bSelected);
	void SetDisbaled(bool Disabled);
	void RefreshOptionTxtUI();
	void ExecuteUbergraph_UI_Component_Option(int32 EntryPoint, enum class ECheckBoxState Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_ComponentBoundEvent_bIsChecked, bool K2Node_Event_bSelected, bool K2Node_CustomEvent_Disabled);
	void OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked);
};

}


