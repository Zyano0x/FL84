#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x438 - 0x350)
// WidgetBlueprintGeneratedClass UI_Component_Btn.UI_Component_Btn_C
class UUI_Component_Btn_C : public UComponentButtonBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Remind;                                       // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Hold;                                         // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Hover;                                        // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USolarImage*                           Img_Btn;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImage*                           Img_Icon;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImage*                           Img_Mask;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImage*                           Img_Shadow;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Press;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox;                                          // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Btn;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Icon;                                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Text_Btn;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            WidgetSlot;                                        // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Type_Btn                        BtnType;                                           // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_State_Btn                       BtnState;                                          // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BtnSize;                                           // 0x3C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUseBtnImag;                                      // 0x3CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsUseText;                                         // 0x3CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsUseLocID;                                        // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocID;                                             // 0x3E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESolarSupportLanguages            PreviewLang;                                       // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsIcon;                                            // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Icon;                                              // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Icon_Size;                                         // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_Btn_C* GetDefaultObj();

	void IsAvailable(bool* Availble, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void SetBtnTxt(const class FString& NewParam, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetBtnState(enum class E_State_Btn State, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class FString GetLocalText(const class FString& CallFunc_GetLocalText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update(bool IsDesignTime);
	void SetBtnText(const class FString& ___W, enum class E_State_Btn ____);
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
	void OnLocLangChanged(class UObject* Publisher, class UObject* Payload, TArray<class FString>& MetaData);
	void ExecuteUbergraph_UI_Component_Btn(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class E_Type_Btn Temp_byte_Variable_2, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, enum class E_Type_Btn Temp_byte_Variable_3, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, class UObject* Temp_object_Variable_6, class UObject* Temp_object_Variable_7, enum class E_Type_Btn Temp_byte_Variable_4, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, const struct FLinearColor& Temp_struct_Variable_21, const struct FLinearColor& Temp_struct_Variable_22, enum class E_Type_Btn Temp_byte_Variable_5, class UObject* Temp_object_Variable_8, class UObject* Temp_object_Variable_9, class UObject* Temp_object_Variable_10, class UObject* Temp_object_Variable_11, class UObject* Temp_object_Variable_12, class UObject* Temp_object_Variable_13, class UObject* Temp_object_Variable_14, class UObject* Temp_object_Variable_15, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class E_Type_Btn Temp_byte_Variable_8, const struct FLinearColor& Temp_struct_Variable_23, const struct FLinearColor& Temp_struct_Variable_24, const struct FLinearColor& Temp_struct_Variable_25, const struct FLinearColor& Temp_struct_Variable_26, const struct FLinearColor& Temp_struct_Variable_27, const struct FLinearColor& Temp_struct_Variable_28, const struct FLinearColor& Temp_struct_Variable_29, const struct FLinearColor& Temp_struct_Variable_30, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, class USolarGlobalEventSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsDesignTime, const class FString& K2Node_CustomEvent_____, enum class E_State_Btn K2Node_CustomEvent______1, const class FString& CallFunc_GetLocalText_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_Select_Default_2, class UObject* K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, class UObject* K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_31, enum class E_Type_Btn Temp_byte_Variable_11, const struct FLinearColor& K2Node_Select_Default_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_7, const struct FLinearColor& K2Node_Select_Default_8, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, enum class ESlateVisibility K2Node_Select_Default_9, class UObject* K2Node_CustomEvent_Publisher, class UObject* K2Node_CustomEvent_Payload, TArray<class FString>& K2Node_CustomEvent_Metadata);
	void OnReleased__DelegateSignature();
	void OnClicked__DelegateSignature();
	void OnPressed__DelegateSignature();
};

}


