#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10D (0x50D - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_Item.UI_Component_Item_C
class UUI_Component_Item_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Loop;                                         // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Puzzle_Unlock_Anim;                                // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Sold_Anim;                                         // 0x418(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Enter_Anim;                                        // 0x420(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Receive_Anim;                                      // 0x428(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Btn_Item;                                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_TrialTag;                                    // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_Light;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_NoQuality;                                  // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Equiped;                                       // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Light_Bg;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Light_Lines;                                   // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Light_Wipes;                                   // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Light_Wipes_1;                                 // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Loop_Light;                                    // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Puzzle;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Selected;                                      // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Sold_Mask;                                     // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Claim;                                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Received;                                          // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Item;                                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRedHint_General_C*               SolarRedHint_General;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_Item;                                     // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRichTextBlock*                   Txt_ChatBubble;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Number;                                        // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Owned;                                         // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Item_VoiceSlot_C*        UI_Component_Item_VideoSlot;                       // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Unlock;                                            // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Type_Item                       ItemState;                                         // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        __;                                                // 0x4FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Item_Quality                    Quality;                                           // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Select;                                            // 0x501(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Experience;                                        // 0x502(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Num;                                               // 0x503(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Puzzle;                                            // 0x504(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Equiped;                                           // 0x505(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         RedHint;                                           // 0x506(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D9B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Txt_Size;                                          // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoQuality;                                         // 0x50C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Component_Item_C* GetDefaultObj();

	void OnClicked_723C67DD400B66B736FD0CBDC510A2DD();
	void OnClicked_AA1454A9469261F6CCC1DD98BBFD7F82();
	void OnClicked_CB7466DC444AF13C708B1C9E37A6950B();
	void OnClicked_C928AC644E794D11589D68AAA5414153();
	void OnClicked_FBC578EB48477967BC6043B13EF0C839();
	void OnClicked_B842C32E48BD5FD4CB078C98B7EEEFE8();
	void OnClicked_919FFA81433A98552AA9C98FE75F3FA8();
	void OnClicked_4C1640E14D551E3F66DDFC98EBC29593();
	void OnClicked_761AE6E449DB82C1C41BAD982FF6C479();
	void OnClicked_D8100847440BA75C5B48CEB629894A73();
	void OnClicked_87315C8443738EAEEC20EFA9F8E8E1B0();
	void OnClicked_278AE97F4E63F3AFFCB1B0AE99F29BD5();
	void OnClicked_5179EFCC4C432259FFA958A11AF6EE65();
	void OnClicked_7B94023A406D4C3742B0E68C208423B9();
	void OnClicked_6DE342C1479DB8A03AA73FA264A153B2();
	void OnClicked_DDDC654C4981476C6EAD6D819957EB1C();
	void OnClicked_D2CFB50A42F1C0D50658839FCBCFA9DD();
	void OnClicked_A504C1B241DA08F689EAE091A2C0EC65();
	void OnClicked_A3803B3143D22762C8FCC583A68AD973();
	void OnClicked_08B584CA495AEB40715414910CADF1DB();
	void OnClicked_8A4D14324F42FBD639768A970F72028E();
	void OnClicked_81049F6A42D6C026883A4386C48374E2();
	void OnClicked_925F580046CDEACEB20DA2A9FFBD26F5();
	void OnClicked_69C0D3634514B4FB11C37FACB99F0047();
	void OnClicked_EFC1B65941C637A23D22F5BB61E26B5A();
	void OnClicked_77B6E8F9412546618F9A93A524F856D3();
	void OnClicked_FF03E4E044F4BBD0B1CF479D00640F05();
	void OnClicked_3BB5106646C237DF00A6DBAF581BBB55();
	void OnClicked_0FFAEAEB4786B6827F4ED89377745435();
	void OnClicked_6577459A45CA702ED92E459B17F09F10();
	void OnClicked_F2CB0AB04C4FB6C0AB04AA8563A1D55D();
	void OnClicked_C52674BB4BB5DC6C532EAEA3A0C9420F();
	void OnClicked_DF81FBBD404C03487BD8A6AAFC708FC5();
	void OnClicked_D3D119094CADA9EE0034D3882FBC0A53();
	void OnClicked_1C989F6B421187D3616FDEB2A6C31C44();
	void OnClicked_6C1C771046F28CA9B5FE1880E92DFA2C();
	void OnClicked_39EB712D4A6375A41EF1C791D3D7F7A1();
	void OnClicked_AF70AEF4457120B0484CC6A716A3E62F();
	void OnClicked_5B94B5B54DAC8C51626AE988E883120D();
	void OnClicked_8652EDD74E97941F49F19CB5677BF15C();
	void OnClicked_8F5B09504062C4388F150DBFF5A21ACD();
	void OnClicked_7279E455424565564AACED96154A3053();
	void OnClicked_3E8B899B4A42FAD4D400EBA2A354842D();
	void OnClicked_1A0D71A741F478A005B06097CAF5A6B5();
	void OnClicked_BEB338C247C7D164CFC594A117C0819F();
	void OnClicked_4CC6B8614E0B2D8367B6F4B9B7419779();
	void OnClicked_035E06974FF768D2E5F353920F3213C2();
	void OnClicked_9167598E47B2E7F69D115BB564B2A5B3();
	void OnClicked_C7D6CA6842630DA31A1F719BBDEA8681();
	void OnClicked_00A4237E461988EE07E10CA67C453AE2();
	void OnClicked_C5EBFFA14213384EB831E28272A30662();
	void OnClicked_72ABC91A4B1E5D22513549AAA4FBEF22();
	void OnClicked_B887BE70441F5F98D57696B9AD77AB90();
	void OnClicked_E3A0FA87430CB21FBB8AB9A9D66E6982();
	void OnClicked_AE80A7AB4388DAA642D146B81D0F3342();
	void OnClicked_E4AF98474C40FED97BF836BCBB0C4A88();
	void OnClicked_156660874F9876B4C84D41B4A6FA37D6();
	void OnClicked_4A8CA25A455CD1059B29418098AE6AC4();
	void OnClicked_BF30FBDD412BE237AE518694E3991D17();
	void OnClicked_0A4D207A43739DBF9F02ED9AC577ECD6();
	void OnClicked_1745FCA34C100BD2938B97A561D7458D();
	void OnClicked_2D0F86AD4E9A2277FDBF36BB21A5FBE3();
	void OnClicked_AC010B8F4753C56F092D3EAD7152FE5E();
	void OnClicked_84DEE1344D80111645B2E8955A12A0D2();
	void OnClicked_A83E6B18468D941E50D2F993C5AD66A2();
	void OnClicked_1C62AA0B4465A7EADBB84EBEAEFF971C();
	void OnClicked_C33D994A4C3B37DF6EB71099256DC314();
	void OnClicked_D015F40F4DF935130B1089AFEE35E1F3();
	void OnClicked_982702DA4AD8D9D5E0F8B4BD5495A142();
	void OnClicked_8394DF9C4F23145D5519168A873CA64A();
	void OnClicked_DF5E44084FCAFDA9C798D29FC28FCDCE();
	void OnClicked_D92DD94F43C45ACFEA5A24B4C4DF5778();
	void OnClicked_E15133D745F1A3008753DCB599AD57F0();
	void OnClicked_BD7421FE4E7D296B995BEF9146819075();
	void BP_OnItemSelectionChangedCopy(bool bIsSelected);
	void PlayEnterAnim();
	void OnListItemObjectSetCopy(class UObject* ListItemObject);
	class FString GetModuleName();
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void PreConstruct(bool IsDesignTime);
	void ChangItemState();
	void PlayReceiveAnimEvent();
	void StopReceiveAnimEvent();
	void ExecuteUbergraph_UI_Component_Item(int32 EntryPoint, enum class E_Type_Item Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class E_Type_Item Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class E_Item_Quality Temp_byte_Variable_12, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, enum class E_Type_Item Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_21, enum class ESlateVisibility Temp_byte_Variable_22, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_23, enum class ESlateVisibility Temp_byte_Variable_24, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_25, enum class ESlateVisibility Temp_byte_Variable_26, enum class E_Type_Item Temp_byte_Variable_27, enum class ESlateVisibility Temp_byte_Variable_28, enum class ESlateVisibility Temp_byte_Variable_29, enum class ESlateVisibility Temp_byte_Variable_30, enum class ESlateVisibility Temp_byte_Variable_31, enum class ESlateVisibility Temp_byte_Variable_32, enum class E_Item_Quality Temp_byte_Variable_33, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, enum class E_Item_Quality Temp_byte_Variable_34, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_35, enum class ESlateVisibility Temp_byte_Variable_36, enum class E_Item_Quality Temp_byte_Variable_37, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, const struct FLinearColor& Temp_struct_Variable_17, enum class E_Item_Quality Temp_byte_Variable_38, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, const struct FLinearColor& Temp_struct_Variable_21, const struct FLinearColor& Temp_struct_Variable_22, const struct FLinearColor& Temp_struct_Variable_23, enum class E_Type_Item Temp_byte_Variable_39, enum class ESlateVisibility Temp_byte_Variable_40, enum class ESlateVisibility Temp_byte_Variable_41, enum class ESlateVisibility Temp_byte_Variable_42, enum class ESlateVisibility Temp_byte_Variable_43, enum class ESlateVisibility Temp_byte_Variable_44, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_45, enum class ESlateVisibility Temp_byte_Variable_46, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_47, enum class ESlateVisibility Temp_byte_Variable_48, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsDesignTime, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, class UObject* K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility K2Node_Select_Default_9, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_10, const struct FLinearColor& K2Node_Select_Default_11, enum class ESlateVisibility K2Node_Select_Default_12, const struct FLinearColor& K2Node_Select_Default_13, const struct FLinearColor& K2Node_Select_Default_14, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility K2Node_Select_Default_15, enum class ESlateVisibility K2Node_Select_Default_16);
};

}


