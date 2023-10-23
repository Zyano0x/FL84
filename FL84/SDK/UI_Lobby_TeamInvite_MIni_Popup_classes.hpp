#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x499 - 0x348)
// WidgetBlueprintGeneratedClass UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C
class UUI_Lobby_TeamInvite_Mini_Popup_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Enter;                                        // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USolarButton*                          Btn_Join_Common;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Player;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Player_2;                                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizentalBox_Spectator;                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_CreateRoom_Invitation;               // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Home_Invitation;                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Player;                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Skydiving_Invitation;                // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Skydiving_Transfer;                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Team_Application;                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Team_Invitation;                     // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Btn_Join;                                      // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_GameMode_Icon;                                 // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Join_Common_Light;                             // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Team_Num;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Title_BG_1;                                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Avatar;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Avatar_2;                                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Info_CreateRoom_Invitation;                  // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Info_Invitation;                             // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Pop_Common;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_CountDown;                             // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SizeBox_Team_Num;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTickerWidget_C*                       Text_NickName;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Capacity;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_GameMode;                                      // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Home;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Invitation;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Join_Common;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_OBCurr;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_OBTotal;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Player;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_PlayerIn;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Room_Name;                                     // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Skydiving;                                     // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Skydiving_1;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Close_C*                 UI_Component_Close;                                // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_PlayerHead_C*            UI_Component_PlayerHead_1;                         // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_PlayerHead_C*            UI_Component_PlayerHead_2;                         // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ET_Type_Invitation                Pop_Type;                                          // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_737[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Player;                                            // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNeedShow;                                        // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Lobby_TeamInvite_Mini_Popup_C* GetDefaultObj();

	class FString GetModuleName();
	void SetPlayer(int32 Num, int32 Temp_int_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, int32 Temp_int_Variable_1, const struct FLinearColor& K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText K2Node_Select_Default_1);
	void SetType(enum class ET_Type_Invitation Pop_Type, enum class ET_Type_Invitation Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ET_Type_Invitation Temp_byte_Variable_7, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ET_Type_Invitation Temp_byte_Variable_14, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class ET_Type_Invitation Temp_byte_Variable_21, enum class ESlateVisibility K2Node_Select_Default_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, enum class ET_Type_Invitation Temp_byte_Variable_22, int32 K2Node_Select_Default_3, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, enum class ET_Type_Invitation Temp_byte_Variable_23, class UObject* K2Node_Select_Default_4, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, enum class ET_Type_Invitation Temp_byte_Variable_24, int32 K2Node_Select_Default_5, enum class ESlateVisibility Temp_byte_Variable_25, enum class ESlateVisibility Temp_byte_Variable_26, enum class ESlateVisibility Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ESlateVisibility Temp_byte_Variable_30, enum class ET_Type_Invitation Temp_byte_Variable_31, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility Temp_byte_Variable_32, enum class ESlateVisibility Temp_byte_Variable_33, enum class ESlateVisibility Temp_byte_Variable_34, enum class ESlateVisibility Temp_byte_Variable_35, enum class ESlateVisibility Temp_byte_Variable_36, enum class ESlateVisibility Temp_byte_Variable_37, enum class ET_Type_Invitation Temp_byte_Variable_38, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility Temp_byte_Variable_39, enum class ESlateVisibility Temp_byte_Variable_40, enum class ESlateVisibility Temp_byte_Variable_41, enum class ESlateVisibility Temp_byte_Variable_42, enum class ESlateVisibility Temp_byte_Variable_43, enum class ESlateVisibility Temp_byte_Variable_44, enum class ET_Type_Invitation Temp_byte_Variable_45, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility Temp_byte_Variable_46, enum class ESlateVisibility Temp_byte_Variable_47, enum class ESlateVisibility Temp_byte_Variable_48, enum class ESlateVisibility Temp_byte_Variable_49, enum class ESlateVisibility Temp_byte_Variable_50, enum class ESlateVisibility Temp_byte_Variable_51, enum class ET_Type_Invitation Temp_byte_Variable_52, enum class ESlateVisibility K2Node_Select_Default_9, enum class ESlateVisibility Temp_byte_Variable_53, enum class ESlateVisibility Temp_byte_Variable_54, enum class ESlateVisibility Temp_byte_Variable_55, enum class ESlateVisibility Temp_byte_Variable_56, enum class ESlateVisibility Temp_byte_Variable_57, enum class ESlateVisibility Temp_byte_Variable_58, enum class ET_Type_Invitation Temp_byte_Variable_59, enum class ESlateVisibility K2Node_Select_Default_10, enum class ESlateVisibility Temp_byte_Variable_60, enum class ESlateVisibility Temp_byte_Variable_61, enum class ESlateVisibility Temp_byte_Variable_62, enum class ESlateVisibility Temp_byte_Variable_63, enum class ESlateVisibility Temp_byte_Variable_64, enum class ESlateVisibility Temp_byte_Variable_65, enum class ET_Type_Invitation Temp_byte_Variable_66, enum class ESlateVisibility K2Node_Select_Default_11, enum class ESlateVisibility Temp_byte_Variable_67, enum class ESlateVisibility Temp_byte_Variable_68, enum class ESlateVisibility Temp_byte_Variable_69, enum class ESlateVisibility Temp_byte_Variable_70, enum class ESlateVisibility Temp_byte_Variable_71, enum class ESlateVisibility Temp_byte_Variable_72, enum class ESlateVisibility K2Node_Select_Default_12);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


