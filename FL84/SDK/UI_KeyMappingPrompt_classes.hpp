#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x83 (0x483 - 0x400)
// WidgetBlueprintGeneratedClass UI_KeyMappingPrompt.UI_KeyMappingPrompt_C
class UUI_KeyMappingPrompt_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Press;                                        // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              Empty;                                             // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              EmptyDisable;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Gamepad_C*               Gamepad;                                           // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalLayout;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Icon;                                              // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Keyboard_C*              Keyboard;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       KeySwitcher;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Mouse_C*                 Mouse;                                             // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Root;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Hold;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Key;                                           // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Shortcut;                                      // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalLayOut;                                    // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_KeyPromptStyle                  Style;                                             // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisableEmpty;                                     // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bEnableInputSettingHide;                           // 0x482(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_KeyMappingPrompt_C* GetDefaultObj();

	void OnInputDeviceChanged_32249EEC4425047317C65FBD8D8E4B99(const struct FInputDeviceProxy& InputDeviceProxy);
	void OnInputMappingUpdate_C92FDE2E464291B6BCBAAC93163D7A3C();
	void OnInputDeviceChanged_9F60CD7C4DBC9B88103818B4B6C13858(const struct FInputDeviceProxy& InputDeviceProxy);
	void OnInputMappingUpdate_ACF521D44B06BD987E67CFB70952AA12();
	void OnInputDeviceChanged_16D4ECF54591CFCDC3FC4BB0BA155013(const struct FInputDeviceProxy& InputDeviceProxy);
	void OnInputMappingUpdate_7F87AD5043ED7E47A24B7A9A4576BAF4();
	void Construct();
	void Destruct();
	void OnChangeAdapterSlotWidgetParametersCopy(TArray<struct FWidgetOverrideParam>& Params);
	void OnInitialized();
	class FString GetModuleName();
	void SetEnableInputSettingHide(bool bEnable);
	void SetOperationTypeImpl(enum class E_InputOperationType InType, enum class E_InputOperationType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default);
	void RefreshEmptyDisplay(bool bInEmpty, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
	void SetEnableEmptyDispaly(bool bEnable);
	void SetStyle(enum class E_KeyPromptStyle Style, const struct FMargin& Temp_struct_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class E_KeyPromptStyle Temp_byte_Variable, const struct FMargin& Temp_struct_Variable_1, const struct FMargin& Temp_struct_Variable_2, const struct FMargin& Temp_struct_Variable_3, enum class E_KeyPromptStyle Temp_byte_Variable_1, class UPanelWidget* Temp_object_Variable, enum class E_KeyPromptStyle Temp_byte_Variable_2, class UWidget* Temp_object_Variable_1, enum class E_KeyPromptStyle Temp_byte_Variable_3, class UWidget* Temp_object_Variable_2, enum class E_KeyPromptStyle Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin_2, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_3, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_Select_Default_1, const struct FMargin& Temp_struct_Variable_4, const struct FMargin& Temp_struct_Variable_5, enum class E_KeyPromptStyle Temp_byte_Variable_10, class UPanelWidget* K2Node_Select_Default_2, const struct FMargin& K2Node_Select_Default_3, class UWidget* K2Node_Select_Default_4, class UWidget* K2Node_Select_Default_5, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_2, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_3);
	void OnChangeAdapterSlotWidgetGameplayTag(struct FGameplayTag& InGameplayTag, TArray<class FString>& MetaData);
	void OnChangeAdapterSlotWidgetParameters(TArray<struct FWidgetOverrideParam>& Params);
	void OnLoadAdapterSlotWidgetFinished();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_KeyMappingPrompt(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTag& K2Node_Event_InGameplayTag, TArray<class FString>& K2Node_Event_MetaData, TArray<struct FWidgetOverrideParam>& K2Node_Event_Params, bool K2Node_Event_IsDesignTime, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


