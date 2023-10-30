#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x94 (0x494 - 0x400)
// WidgetBlueprintGeneratedClass UI_Chip30_List_Slot.UI_Chip30_List_Slot_C
class UUI_Chip30_List_Slot_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Refresh;                                      // 0x408(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Claim;                                        // 0x410(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USolarButton*                          Btn_Chip;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Chip;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Down_BG;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Lock;                                          // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Today;                                         // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Tommorrow_Light;                               // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Lock;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_ToDay;                                       // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Today_Light;                                 // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Tomorrow;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Chip;                                      // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Chip;                                          // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Num;                                           // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Type_Chip                       ChipType;                                          // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_108B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Num;                                               // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Size_X;                                            // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Chip30_List_Slot_C* GetDefaultObj();

	void Delegate_1ECC6EE54242A09C828D8ABD59371CB0();
	void Delegate_641CCF9441C802144A99718DE117AF23();
	void Delegate_EB9F536C44640354350BB4ACAC7D31A4();
	void Delegate_03741E7747241FDC7E44F7A0438892EE();
	void Delegate_088DF2B841403EBF8130D095EE4845A1();
	void Delegate_BC5F9D0F41395C63003CFFACCE025424();
	void Delegate_D87AC81547EB35C0202E75873A8D5261();
	void Delegate_CFEFAC744EF8668D035DC0875D640354();
	void Delegate_56A7603143565E625EE3A7915054AD05();
	void Delegate_B89F80D04346DADAFCDD43A066943525();
	void Delegate_F6B60FCC41DB30F2CD169A9590F4C88C();
	void Delegate_B7B626504941509D1DFADCBF389C714A();
	void Delegate_9837F2D34171EB66B0EC3F8751FB340C();
	void Delegate_D4D4C5BD4F60644B379962BC3A0A026E();
	void Delegate_45D849BC4F2649A4BCC078B2146D0240();
	void Delegate_0BDF111842B39DEA390FE7A2F7EEA8D6();
	void Delegate_17A0BB984E9A03863FD5FF99E6BA435A();
	void Delegate_7C2992224661144643C158A77D2DD3E6();
	void Delegate_1C10CED64413DE1A687DCEB88D2F1E53();
	void Delegate_43CC4C014EE47C174E8B3DAD5F821DE7();
	void Delegate_54600A8347C4F4592773849161AA60AF();
	void Delegate_B4C36BAE47EE0A47DCA4A6811B0B0B2A();
	void Delegate_D2444CDC40A23026A04AA6B768563913();
	void Delegate_FB2274C049DE6C8C0CE2A6A15DD46AC1();
	void Delegate_50858BEB48CD2BAD7E28B38F87BB7DB0();
	void Delegate_43848A754064B3A0FA6F6CA3D5962908();
	void Delegate_6887F5B44A22AC00BCAB66AD5A8CA75D();
	void Delegate_AF70968E427BCB440EDB4490C275712B();
	void Delegate_395E92074E9FDD6C1CC10E9CEBEB5BC2();
	void Delegate_0F249D2948FD7309D25EFB9EF8C8C67F();
	void Delegate_72CD505C448BA6DC29C5FF92D8DB1A4F();
	void Delegate_38299C42443755B85680F89855F4CC39();
	void Delegate_6F43171144F3D221F8CE47AA09AFA137();
	void Delegate_7072A1D34177CF002A3EE4A94F6435B1();
	void Delegate_553294CB40548907D686A188479F934A();
	void Delegate_AF5EB14B4348BA79E941E4A432186E55();
	void Delegate_63816D56406E687F47CB61B911E46A71();
	void Delegate_80C4AD7442C5DFC6087FE297D379AC1E();
	void Delegate_230422C640800F67B263F29272A71397();
	void Delegate_70B3C5394E1D6DA4AAED67B3FAA6F59B();
	void Delegate_953E4FC44C9EA3F347BE5F987FD88ED0();
	void Delegate_8CB2E2E5460D54852EF757AF16AF5FB1();
	void Delegate_BEC7E7824F27495FD7E73A9012EE55E8();
	void Delegate_C0977B1E499D7E8340A33D93B4046F3A();
	void Delegate_2C8842F642D2FDDB9A6B2EB45FB08B07();
	void Delegate_AB5403D643D17F1D3202469AD669790E();
	void Delegate_D4161E6C408028D1487A0685FEF1858C();
	void Delegate_AE0C5EC641BFC2C552A857BB6B270239();
	void Delegate_BB6593B04A7363D33446289425B1AC40();
	void Delegate_FC4E6F9F47592149BD5CB6B727BA8FDE();
	void Delegate_5D7849234CA97A70A095838591DCBC3D();
	void Delegate_CA0D9849490FB21822144FA911615E38();
	void Delegate_7EE2B5E748C8806B80556C80FC964208();
	void Delegate_C57B78784F593342BEA7B2912A4C7611();
	void Delegate_13F8799441E8A29359212B99BC7DA3CF();
	void Delegate_C763B45D4D810173C52245930DDF5D05();
	void Delegate_BE1126C747151BAB8395089BA37218BA();
	void Delegate_3B846FBA43F98F783E70F39C9E539E8D();
	void OnClicked_DD51BF90486A7457EB5528BA8F05A9F1();
	void OnClicked_9DBC2AD044B0F51B6ED468ABA669D267();
	void OnClicked_BA14FD66476D4678D81D55A99ED4DD43();
	void OnClicked_D9AF5A144BF1A8C8135B40A1E3C7507B();
	void OnClicked_F783499A4D89B36A20E1DCA787C90A72();
	void OnClicked_B9DFB52049EE4EDFEA77388B48E013A8();
	void OnClicked_5627D5354ED1445D6D00568F709BBBBD();
	void OnClicked_16BBE87A4C36C99B189EDE94D32DF148();
	void OnClicked_E4C1B5B7498A1215AC2176BF78CFA368();
	void OnClicked_520519E84241EE4DE3C477B4F88A44C4();
	void OnClicked_D2F87C5D4869AD9797178AB61971F031();
	void OnClicked_5C0A110C4AE6668690C1F4A00827A282();
	void OnClicked_00D113A04AE6B7A28FEA239F97580D9D();
	void OnClicked_733EF83D49A136FB6BF10A91BDB155B6();
	void OnClicked_FB88993D423743D307D5C5ABB589F31B();
	void OnClicked_EF8776E9474C50E194C3CCAA7F612472();
	void OnClicked_F7F1E9FB4A71410A3A8E148394609EC6();
	void OnClicked_AB8D2D3A4E7D313A7B1BF2AF67345D66();
	void OnClicked_DAC52EDC43E743530E3FE693BD9A9FA9();
	void OnClicked_9A03A1B34BFC11F88DA05C80A690FC70();
	void OnClicked_F648B4834D0ED974DCE1CFB986B29AD2();
	void OnClicked_260F83DE4C67A54B5900ABB9F17D8705();
	void OnClicked_A9AD8DFF462AA9E6A46AE59178C61D0F();
	void OnClicked_0C4499BF4F101E2873567EB462FBFCCA();
	void OnClicked_03BC33734D81FBF4EB3F6D8D23DC7EC1();
	void OnClicked_3A0D61B040548DE15006FBBE891674C3();
	void OnClicked_7A14F6A8429B06CD7495ABA67C62FE93();
	void OnClicked_07AEA3E24D0F122651A550BF9AE32716();
	void OnClicked_3AF4C35A484715847586299341A30B29();
	void Destruct();
	void Construct();
	void OnInitialized();
	class FString GetModuleName();
	void SetNum(int32 Num, class FText CallFunc_Conv_IntToText_ReturnValue);
	void SetChip(enum class E_Type_Chip ChipType, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, enum class E_Type_Chip Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class E_Type_Chip Temp_byte_Variable_5, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, enum class E_Type_Chip Temp_byte_Variable_6, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, enum class E_Type_Chip Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class E_Type_Chip Temp_byte_Variable_12, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESlateVisibility Temp_byte_Variable_14, enum class E_Type_Chip Temp_byte_Variable_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, float K2Node_Select_Default_5, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_Select_Default_6, const struct FLinearColor& K2Node_Select_Default_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_8);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Chip30_List_Slot(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


