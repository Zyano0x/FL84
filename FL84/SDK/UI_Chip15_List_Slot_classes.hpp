#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x474 - 0x400)
// WidgetBlueprintGeneratedClass UI_Chip15_List_Slot.UI_Chip15_List_Slot_C
class UUI_Chip15_List_Slot_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Refresh;                                      // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Claim;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USolarButton*                          Btn_Chip;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Lock;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Signed;                                        // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Today;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SignToday;                                 // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SignTommorrow;                             // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Today_Light;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Chip;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Chip;                                          // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Num;                                           // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Type_Chip                       ChipType;                                          // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3780[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Num;                                               // 0x46C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Size;                                              // 0x470(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Chip15_List_Slot_C* GetDefaultObj();

	void Delegate_60782273403CCABC6C9448BF2FC3140F();
	void Delegate_6922DB1B4FADC0998B03BA8C43A42661();
	void Delegate_9F513A1F42418442B98D7CA450DFD876();
	void Delegate_AD62FAE1488520D5D4103DB03281440F();
	void Delegate_B4032484495C69B6551809B7340C479F();
	void Delegate_E9EBFF4240483ADB295E8B834D187CBA();
	void Delegate_E02A4D8949243B335EAF6C8F9ED71819();
	void Delegate_8FDE248F4934AC58622FAFADDF7DC1CF();
	void Delegate_7B459448409FFD2B14F4B2A8B56259DA();
	void Delegate_2F503FB6470488DBFD2A3BBB29931C7C();
	void Delegate_DBA8F1334D6EE1A420C4DFAA5B9F9CDE();
	void Delegate_8647701344AA077AF71B44903E6039B1();
	void Delegate_52255B804452C6D1A286DDB45C72A2D9();
	void Delegate_93320431488A6D2F270A74B3A54FCCB5();
	void Delegate_4CA928D2492E84F4B4780F999B55BA4B();
	void Delegate_220C508944B44E5DFB93A0AD21562E7A();
	void Delegate_E89F5280492E2067E56FF3AB79D437C1();
	void Delegate_E80CB2EC4374D9C1CC0EF0B05521CC3D();
	void Delegate_044E8C7A4A42B0E5C5888AB71244B286();
	void Delegate_EE9BB5E64E5D04F617B2FAB72A705987();
	void Delegate_FD8B64564192F0EE198480AB948FD1FC();
	void Delegate_2E126135497EE950505E8BBF3DAEE30F();
	void Delegate_419694FD4F3FA21A914285B5C61944AF();
	void Delegate_4724868B4728C105A06D2494022C7CDD();
	void Delegate_7D6C997D46FF8CE347C2A4B6F3328589();
	void Delegate_8AA550D74104778A32DB19AFA7089417();
	void Delegate_160A687E4E2623A9B0E5DB97C82ED0EA();
	void Delegate_5503AB344F8A3EB797F04390CF1B2211();
	void OnClicked_89BD402340CD260CC8525A992B398995();
	void OnClicked_501BBBFB452A3C8D712059BD5EA6668C();
	void OnClicked_1CA2162844D3F5DD7321CEB1E84C2BBB();
	void OnClicked_0FF2437A4F804D58DFD4759F1E842058();
	void OnClicked_0931F4E74B010F6BE5AC3C9CFD46D7CB();
	void OnClicked_DC0FA5B546767D38E7FA06BB91D67777();
	void OnClicked_D7B5A38E480EC513787935B44B21A62B();
	void OnClicked_545AF5FA40EEAA1854C8DFAB33B597F8();
	void OnClicked_CD0103A3448CF1D5102D048B65F89C25();
	void OnClicked_C42E9E1C4C8FA9278F336F9395BE7BD0();
	void OnClicked_23313A0A4CE305DB1068F28E9200039B();
	void OnClicked_D4701CC94A3F5C9FE7A71A85D937E5D0();
	void OnClicked_31D478F94C79E4AC2FDF64B92F6EBEB7();
	void OnClicked_E900A6EA4F164917B10445892F5E456E();
	void Destruct();
	void Construct();
	void OnInitialized();
	class FString GetModuleName();
	void SetNum(int32 Num, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetChip(enum class E_Type_Chip ChipType, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class E_Type_Chip Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class E_Type_Chip Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class E_Type_Chip Temp_byte_Variable_13, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class E_Type_Chip Temp_byte_Variable_14, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, enum class E_Type_Chip Temp_byte_Variable_15, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class ESlateVisibility Temp_byte_Variable_19, enum class E_Type_Chip Temp_byte_Variable_20, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_21, enum class ESlateVisibility Temp_byte_Variable_22, enum class ESlateVisibility Temp_byte_Variable_23, enum class ESlateVisibility Temp_byte_Variable_24, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_25, enum class E_Type_Chip Temp_byte_Variable_26, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, int32 K2Node_Select_Default_5, const struct FLinearColor& K2Node_Select_Default_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Chip15_List_Slot(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


