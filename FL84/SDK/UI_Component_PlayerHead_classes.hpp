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
	uint8                                        Pad_1397[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsNonuseFrame;                                     // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Empty;                                             // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_Social                     Social;                                            // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GenderOn;                                          // 0x4C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_Gender                     Gender;                                            // 0x4C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_139A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Size;                                              // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Vip;                                               // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_TabLobbyItemState               StateHD;                                           // 0x4CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCustom;                                          // 0x4CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Component_PlayerHead_C* GetDefaultObj();

	void OnURLDownloadFinish_9CCD464C435F2E9704BB3DAB0B3C962A(bool bSuccess);
	void OnClicked_3F56B5CF49E0F073DCBEDDA49AB232E0();
	void OnURLDownloadFinish_DC116A0D4143ED0A8C60AAB0D9A9B672(bool bSuccess);
	void OnClicked_15DAE2214B808962D70939975EFBDF0B();
	void OnURLDownloadFinish_F350B1B5495D29602DD00CB6E3385755(bool bSuccess);
	void OnClicked_1A82CD4B447672DE5A02A884C5C776DF();
	void OnURLDownloadFinish_7E305FC846EC90DA6EAED6A6EE576468(bool bSuccess);
	void OnClicked_EB5BAD8D433DB9BB9D8CF5BA327F27A1();
	void OnURLDownloadFinish_773BC0F047B9423B83EF0C980B61708F(bool bSuccess);
	void OnClicked_2B61C5C647E2CDCBD02F369AC7617A9F();
	void OnURLDownloadFinish_4661E754461B4796DB5DD0A96A3D3E41(bool bSuccess);
	void OnClicked_D47E828F40FEC563A9D54D9E09DE9B6F();
	void OnURLDownloadFinish_7084E3D24956471E0472B38D4EE95145(bool bSuccess);
	void OnClicked_2E3AA8214D0178D8BC22BF94F222A562();
	void OnURLDownloadFinish_C89D6D2743E83C1388613F95DA35A393(bool bSuccess);
	void OnClicked_007FF82C459127F56B195CA92C9DEA63();
	void OnURLDownloadFinish_672D107547EBFD217AC4EF807328C964(bool bSuccess);
	void OnClicked_D21F6B0B42321562B4F97598CCD30C4D();
	void OnURLDownloadFinish_6469D46A4198782BA0F3839D3038264B(bool bSuccess);
	void OnClicked_7F5B273D4DF69BF783A9CD87AFD0DE8D();
	void OnURLDownloadFinish_1445CEB14F681FADD260F4B967D01F85(bool bSuccess);
	void OnClicked_CEA121B9456A37CD90E8CCA68D0D7A0B();
	void OnURLDownloadFinish_C8E3BC014C9EA6FBD4986CA5E89C9A9F(bool bSuccess);
	void OnClicked_D9BEE10A436706675DAFD79B843D0C36();
	void RefreshByPSCopy(class ASolarPlayerState* Ps, bool bWithoutGender);
	void OnSolarUIOpened();
	void OnInitialized();
	void ForceShowFrameCopy(int32 FrameID);
	void SetAvatarCopy(int32 AvatarID, const class FString& AvatarUrl);
	void Destruct();
	void ConstructCopy();
	void OnSolarUIClosed();
	void SetVipTypeCopy(uint8 VipType, int32 CallFunc_Conv_ByteToInt_ReturnValue);
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


