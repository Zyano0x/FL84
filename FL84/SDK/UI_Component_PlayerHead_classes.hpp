#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCF (0x4CF - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_PlayerHead.UI_Component_PlayerHead_C
class UUI_Component_PlayerHead_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarButton*                          Btn_ShowCard;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas_Frame;                                      // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImageURL*                        Img_Avatar;                                        // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_AvatarFrame;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BGLine;                                        // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Empty;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Gender;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Gender_Bg;                                     // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Hover;                                         // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Social;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Normal;                                    // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_FrameAnim;                                   // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_1;                                            // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_2;                                            // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Avatar;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Vip;                                          // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Vip_Icon_Type_C*                   UI_Vip;                                            // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowBusinessCardBtn;                               // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1100[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsNonuseFrame;                                     // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Empty;                                             // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_Social                     Social;                                            // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GenderOn;                                          // 0x4C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_Gender                     Gender;                                            // 0x4C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1101[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Size;                                              // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vip;                                               // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_TabLobbyItemState               StateHD;                                           // 0x4CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCustom;                                          // 0x4CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Component_PlayerHead_C* GetDefaultObj();

	void OnURLDownloadFinish_09CB3A59433C3EABCD75228610239A64(bool bSuccess);
	void OnClicked_ADF504FE454B9D66EE50E084BD8BEAAD();
	void OnURLDownloadFinish_BE6929F84477FD3730955E94E3D6F798(bool bSuccess);
	void OnClicked_82B2CB65408A0519B14C6FBB18691947();
	void OnURLDownloadFinish_561B74D249A24A218A0336AA5FA489FA(bool bSuccess);
	void OnClicked_4D9925BA45202E6FA49C64BB84BD3E90();
	void OnURLDownloadFinish_C5C714194EBEA80E044BD694BFED3003(bool bSuccess);
	void OnClicked_CEC598D74A5621E91118E4BCD9BAA400();
	void OnURLDownloadFinish_5362021B48841B10E8AF38BB3D96BC46(bool bSuccess);
	void OnClicked_8B36ECEC4D615D7DE1021E9A21B810CC();
	void OnURLDownloadFinish_446A171247EA75195AFAFDB1355417CA(bool bSuccess);
	void OnClicked_7201186E4B60A373A5D61C878D0BE040();
	void OnURLDownloadFinish_4AB30C1F496FA9C4B65E70AB14A29295(bool bSuccess);
	void OnClicked_8E28BA6F4169250A6611609E7795FF06();
	void OnURLDownloadFinish_4A98C12C44A9373E366675A7D2887871(bool bSuccess);
	void OnClicked_3ED9FDFC4C7F2B6235A3E8B8EDBDF760();
	void OnURLDownloadFinish_315D87294232BC9ADD148781380865FA(bool bSuccess);
	void OnClicked_CA3EDE0B435A58D60188E9A83D63D20A();
	void OnURLDownloadFinish_7D9E7BC94435279380A131B96DDFBD97(bool bSuccess);
	void OnClicked_A53551694E512C065375FAAE143D1335();
	void OnURLDownloadFinish_A7C8F1524BB3D8F068BF5AB66F40B0ED(bool bSuccess);
	void OnClicked_27F510AF4D099D2B687E18A7BB100D46();
	void OnURLDownloadFinish_830D21604113AC8AD903C4BB465FA15F(bool bSuccess);
	void OnClicked_38F91928491697C2F68025B38D842DD4();
	void SetVipTypeCopy(uint8 VipType, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void ConstructCopy();
	void ForceShowFrameCopy(int32 FrameID);
	void SetAvatarCopy(int32 AvatarID, const class FString& AvatarUrl);
	void OnInitialized();
	void OnSolarUIClosed();
	void OnSolarUIOpened();
	void Destruct();
	void RefreshByPSCopy(class ASolarPlayerState* Ps, bool bWithoutGender);
	class FString GetModuleName();
	void ForceShowFrame(int32 FrameID);
	void RefreshByPS(class ASolarPlayerState* Ps, bool bWithoutGender);
	void SetAvatarSize(bool IsCustom, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& K2Node_Select_Default);
	void SetAvatar(int32 AvatarID, const class FString& AvatarUrl);
	void SetStateHD(enum class E_TabLobbyItemState StateHD, enum class E_TabLobbyItemState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default);
	void SetDefaultSteamAvatar();
	void SetVipType(uint8 VipType, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void SetAvatarState(bool IsCollapsed, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetAvatarIcon(int32 InAvatarID, class UTexture2D* CallFunc_GetAvatarIconWithID_OutAvatar);
	void SetEmptyState(bool IsEmpty, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void SetPlayerGender(enum class E_Type_Gender Gender, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class E_Type_Gender Temp_byte_Variable_3, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class E_Type_Gender Temp_byte_Variable_4, const struct FLinearColor& K2Node_Select_Default, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, enum class E_Type_Gender Temp_byte_Variable_5, class UObject* K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility K2Node_Select_Default_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4);
	void SetSocialIcon(enum class E_Type_Social Social, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class E_Type_Social Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class E_Type_Social Temp_byte_Variable_4, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void Update();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_Component_PlayerHead(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_4, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FMargin& K2Node_MakeStruct_Margin);
	void OnReleased__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}


