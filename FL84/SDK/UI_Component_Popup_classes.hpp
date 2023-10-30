#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	//---------------------------------------------------------------------------------------------------------------------
	// CLASSES
	//---------------------------------------------------------------------------------------------------------------------

	// 0x1B1 (0x601 - 0x450)
	// WidgetBlueprintGeneratedClass UI_Component_Popup.UI_Component_Popup_C
	class UUI_Component_Popup_C : public USolarPanelWidget
	{
	public:
		struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
		class UWidgetAnimation* Anim_Exit;                                         // 0x458(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation* BG_Light_Anim;                                     // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		class UWidgetAnimation* Anim_Enter;                                        // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		class UBackgroundBlur* BlurBG;                                            // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UUI_Component_Close_C* Btn_Close;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UButton* Btn_Close_Mask;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USolarButton* Btn_Continue;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UUI_Component_Btn_C* Btn_Main;                                          // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UUI_Component_Btn_C* Btn_Sec;                                           // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USolarButton* Btn_Tip;                                           // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UNamedSlot* Content;                                           // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UImage* Img_BG_Logo;                                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UImage* Img_Btn1;                                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UImage* Img_Btn2;                                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USizeBox* Main;                                              // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UCanvasPanel* Panel_BG;                                          // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UCanvasPanel* Panel_BG_VX;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class UCanvasPanel* Panel_Continue;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USizeBox* Sec;                                               // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USolarTextBlock* Txt_Btn_Main;                                      // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USolarTextBlock* Txt_Btn_Sec;                                       // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USolarTextBlock* Txt_Continue;                                      // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		class USolarTextBlock* Txt_Title;                                         // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		int32                                        Top;                                               // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                        Bottom;                                            // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                ____;                                              // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
		bool                                         ____0_ID;                                          // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		uint8                                        Pad_36CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        ___0_ID;                                           // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                        ____A;                                              // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                         FirstButton;                                       // 0x534(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
		enum class E_State_Btn                       _____;                                             // 0x535(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                        Pad_36CD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                _____A;                                             // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
		int32                                        ____0_ID_A;                                          // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                         SecondButton;                                      // 0x54C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		enum class E_State_Btn                       O____;                                             // 0x54D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                        Pad_36CE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                O____A;                                             // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
		int32                                        O___0_ID;                                          // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                         ___s___;                                           // 0x564(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		uint8                                        Pad_36CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		FMulticastInlineDelegateProperty_            OnClickedBtnClose;                                 // 0x568(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		FMulticastInlineDelegateProperty_            OnClickedBtnFrist;                                 // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		FMulticastInlineDelegateProperty_            OnClickedBtnSecond;                                // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		bool                                         _______;                                           // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                         Btn_Icon_1;                                        // 0x599(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		uint8                                        Pad_36D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UObject* Icon_1;                                            // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                             Icon_Size_1;                                       // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                          Icon_Color_1;                                      // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                         Btn_Icon_2;                                        // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		uint8                                        Pad_36D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UObject* Icon_2;                                            // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                             Icon_Size_2;                                       // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                          Icon_Color_2;                                      // 0x5D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                         Tip;                                               // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		uint8                                        Pad_36D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		FMulticastInlineDelegateProperty_            OnClickedBtnTip;                                   // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		bool                                         ShowLogo;                                          // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

		static class UClass* StaticClass();
		static class UUI_Component_Popup_C* GetDefaultObj();

		void SetMainBtnText(int32 LocalTextId, const class FString& CallFunc_GetLocalText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
		void SetMainBtnState(enum class E_State_Btn NewState);
		void SetTitle(const class FString& NewParam, class FText CallFunc_Conv_StringToText_ReturnValue);
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ChangePopupState();
		void Construct();
		void BndEvt__Btn_Sec_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__Btn_Tip_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void __I___0();
		void ExecuteUbergraph_UI_Component_Popup(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, bool Temp_bool_Variable_9, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, bool Temp_bool_Variable_10, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, const class FString& CallFunc_GetLocalText_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, const class FString& CallFunc_GetLocalText_ReturnValue_1, const class FString& CallFunc_GetLocalText_ReturnValue_2, const class FString& K2Node_Select_Default_3, const class FString& K2Node_Select_Default_4, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_5, float CallFunc_Conv_IntToFloat_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, int32 CallFunc_PlaySound2Dbyname_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_9, enum class ESlateVisibility K2Node_Select_Default_10);
		void OnClickedBtnTip__DelegateSignature();
		void OnClickedBtnSecond__DelegateSignature();
		void OnClickedBtnFrist__DelegateSignature();
		void OnClickedBtnClose__DelegateSignature();
	};

}


