#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC7 (0x40F - 0x348)
// WidgetBlueprintGeneratedClass UI_Component_PlayerHead.UI_Component_PlayerHead_C
class UUI_Component_PlayerHead_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarButton*                          Btn_ShowCard;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Frame;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImageURL*                        Img_Avatar;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_AvatarFrame;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BGLine;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Empty;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Gender;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Gender_Bg;                                     // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Social;                                        // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Normal;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_FrameAnim;                                   // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_1;                                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_2;                                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Avatar;                                       // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Vip;                                          // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Vip_Icon_Type_C*                   UI_Vip;                                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowBusinessCardBtn;                               // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsNonuseFrame;                                     // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Empty;                                             // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_Social                     Social;                                            // 0x402(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GenderOn;                                          // 0x403(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_Gender                     Gender;                                            // 0x404(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Size;                                              // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vip;                                               // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsExamine;                                         // 0x40D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsCustom;                                          // 0x40E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Component_PlayerHead_C* GetDefaultObj();

	class FString GetModuleName();
	void SetAvatarSize(bool IsCustom, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& K2Node_Select_Default);
	void SetDefaultSteamAvatar();
	void SetVipType(uint8 VipType, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void SetAvatarState(bool IsCollapsed, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetAvatarIcon(int32 InAvatarID, class UTexture2D* CallFunc_GetAvatarIconWithID_OutAvatar);
	void SetEmptyState(bool IsEmpty, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetPlayerGender(enum class E_Type_Gender Gender, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class E_Type_Gender Temp_byte_Variable_3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class E_Type_Gender Temp_byte_Variable_4, const struct FLinearColor& K2Node_Select_Default, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, enum class E_Type_Gender Temp_byte_Variable_5, class UObject* K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility K2Node_Select_Default_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4);
	void SetSocialIcon(enum class E_Type_Social Social, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class E_Type_Social Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class E_Type_Social Temp_byte_Variable_4, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void Update();
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Component_PlayerHead(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_4, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FMargin& K2Node_MakeStruct_Margin_1);
	void OnReleased__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}


