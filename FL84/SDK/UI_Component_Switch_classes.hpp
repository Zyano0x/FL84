#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x2E9 - 0x260)
// WidgetBlueprintGeneratedClass UI_Component_Switch.UI_Component_Switch_C
class UUI_Component_Switch_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SwitchCycle;                                  // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Switch;                                       // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_Line;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Switch;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Text_Universal;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TouchArea;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCircleType;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Switch_On;                                         // 0x2A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             TouchSize;                                         // 0x2AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             SwitchSize;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCustomClicked;                                    // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSwitchClicked;                                   // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Text;                                              // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Component_Switch_C* GetDefaultObj();

	void SetType(bool IsCircleType, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, bool Temp_bool_Variable_2, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, bool Temp_bool_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default, class UObject* K2Node_Select_Default_1, class UObject* K2Node_Select_Default_2, class UObject* K2Node_Select_Default_3, class UObject* K2Node_Select_Default_4);
	void InitValue(bool InValue, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_3, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_4, float K2Node_Select_Default, float Temp_float_Variable_4, float Temp_float_Variable_5, bool Temp_bool_Variable_5, float K2Node_Select_Default_1, float Temp_float_Variable_6, float Temp_float_Variable_7, int32 K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float K2Node_Select_Default_4, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, float K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue_1);
	void SetValue(bool InValue, bool CallChangeEvent, bool PlayAnimation, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, enum class EUMGSequencePlayMode Temp_byte_Variable_3, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Component_Switch(int32 EntryPoint, int32 CallFunc_PlaySound2D_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void OnSwitchClicked__DelegateSignature();
	void OnStateChanged__DelegateSignature(bool NewValue);
};

}


