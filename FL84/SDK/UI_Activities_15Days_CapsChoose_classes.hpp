#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x72 (0x472 - 0x400)
// WidgetBlueprintGeneratedClass UI_Activities_15Days_CapsChoose.UI_Activities_15Days_CapsChoose_C
class UUI_Activities_15Days_CapsChoose_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Default_Loop_Anim;                                 // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Btn_Choose;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_01;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Capsuler_1;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Capsuler_2;                                    // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Capsuler_3;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Capsuler_4;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Frame;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Default;                                   // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Obtained;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Owned;                                     // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Selected;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Capsuler;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_15Days_Status                   Status;                                            // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_15Days_Capsuler                 Capsuler;                                          // 0x471(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Activities_15Days_CapsChoose_C* GetDefaultObj();

	void OnClicked_9F8B226544C8E638336271B68426B333();
	void OnClicked_47BCAC11438AD7A76B2BE0891FA9BABC();
	void OnClicked_D0D58AA14CD6B1C5352B61BAB418BE88();
	void OnClicked_BC2434C349FE28A59C5FC4BF33D6BFA4();
	void OnClicked_30598C1A418059617EE0B8A9376C1DFA();
	void Construct();
	class FString GetModuleName();
	void UpdateCapsChooseStatus(enum class E_15Days_Status Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class E_15Days_Status Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class E_15Days_Status Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class E_15Days_Status Temp_byte_Variable_15, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class E_15Days_Capsuler Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class E_15Days_Capsuler Temp_byte_Variable_21, enum class ESlateVisibility Temp_byte_Variable_22, enum class ESlateVisibility Temp_byte_Variable_23, enum class ESlateVisibility Temp_byte_Variable_24, enum class ESlateVisibility Temp_byte_Variable_25, enum class E_15Days_Capsuler Temp_byte_Variable_26, enum class ESlateVisibility Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ESlateVisibility Temp_byte_Variable_30, enum class E_15Days_Capsuler Temp_byte_Variable_31, enum class ESlateVisibility Temp_byte_Variable_32, enum class ESlateVisibility Temp_byte_Variable_33, enum class ESlateVisibility Temp_byte_Variable_34, enum class ESlateVisibility Temp_byte_Variable_35, enum class E_15Days_Status Temp_byte_Variable_36, enum class ESlateVisibility Temp_byte_Variable_37, enum class ESlateVisibility Temp_byte_Variable_38, enum class ESlateVisibility Temp_byte_Variable_39, enum class ESlateVisibility Temp_byte_Variable_40, enum class E_15Days_Status Temp_byte_Variable_41, enum class ESlateVisibility Temp_byte_Variable_42, enum class ESlateVisibility Temp_byte_Variable_43, enum class ESlateVisibility Temp_byte_Variable_44, enum class ESlateVisibility Temp_byte_Variable_45, enum class E_15Days_Status Temp_byte_Variable_46, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility K2Node_Select_Default_9, const struct FLinearColor& K2Node_Select_Default_10, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Activities_15Days_CapsChoose(int32 EntryPoint, enum class E_15Days_Status Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class E_15Days_Status Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class E_15Days_Status Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class E_15Days_Capsuler Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class E_15Days_Capsuler Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class E_15Days_Capsuler Temp_byte_Variable_21, enum class ESlateVisibility Temp_byte_Variable_22, enum class ESlateVisibility Temp_byte_Variable_23, enum class ESlateVisibility Temp_byte_Variable_24, enum class ESlateVisibility Temp_byte_Variable_25, enum class E_15Days_Capsuler Temp_byte_Variable_26, enum class ESlateVisibility Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ESlateVisibility Temp_byte_Variable_30, enum class E_15Days_Status Temp_byte_Variable_31, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, enum class E_15Days_Status Temp_byte_Variable_32, enum class ESlateVisibility Temp_byte_Variable_33, enum class ESlateVisibility Temp_byte_Variable_34, enum class ESlateVisibility Temp_byte_Variable_35, enum class ESlateVisibility Temp_byte_Variable_36, enum class E_15Days_Status Temp_byte_Variable_37, enum class ESlateVisibility Temp_byte_Variable_38, enum class ESlateVisibility Temp_byte_Variable_39, enum class ESlateVisibility Temp_byte_Variable_40, enum class ESlateVisibility Temp_byte_Variable_41, enum class E_15Days_Status Temp_byte_Variable_42, enum class ESlateVisibility Temp_byte_Variable_43, enum class ESlateVisibility Temp_byte_Variable_44, enum class ESlateVisibility Temp_byte_Variable_45, enum class ESlateVisibility Temp_byte_Variable_46, bool K2Node_Event_IsDesignTime, const struct FLinearColor& K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility K2Node_Select_Default_9, enum class ESlateVisibility K2Node_Select_Default_10, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


