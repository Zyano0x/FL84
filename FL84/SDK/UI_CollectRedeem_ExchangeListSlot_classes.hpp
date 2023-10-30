#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0x469 - 0x400)
// WidgetBlueprintGeneratedClass UI_CollectRedeem_ExchangeListSlot.UI_CollectRedeem_ExchangeListSlot_C
class UUI_CollectRedeem_ExchangeListSlot_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Exchange;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Arrow;                                         // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_01;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG_02;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImage*                           Img_BG_03;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BtnBg;                                         // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Claimed;                                       // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Mask;                                          // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CollectRedeem_ItemSlot_C*          Item_Exchange;                                     // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Item_C*                  Item_Reward;                                       // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Text_Sacle;                                        // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Btn;                                           // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_CollectRedeem_ExChangeList      Status;                                            // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_CollectRedeem_ExchangeListSlot_C* GetDefaultObj();

	void OnClicked_E31C07844212E28058498ABFED5AB061();
	void OnClicked_6F9CF0754AEB8EB6ED7412B792AA60D5();
	void OnClicked_0343A694476A5C434F50F8B2917F0D8F();
	void OnClicked_02D42E734EAC2AAEE70CD18C96DB551B();
	void OnClicked_BB136F6249DE6AC0CB875AAAA8514D51();
	void OnClicked_AD65789E48D3C9028C0E73AA4C3F562A();
	void OnClicked_0E3656F441D9160A4FECA09DA078C4AC();
	void OnClicked_4B26B22D4016A682D3B4B2B932309491();
	void OnListItemObjectSetCopy(class UObject* ListItemObject);
	void Construct();
	class FString GetModuleName();
	void UpdateStatusView(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_2, enum class E_CollectRedeem_Mission Temp_byte_Variable_3, enum class E_CollectRedeem_Mission Temp_byte_Variable_4, enum class E_CollectRedeem_Mission Temp_byte_Variable_5, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_6, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_7, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_12, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_13, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_14, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_15, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESlateVisibility Temp_byte_Variable_17, enum class ESlateVisibility Temp_byte_Variable_18, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_19, enum class ESlateVisibility Temp_byte_Variable_20, enum class ESlateVisibility Temp_byte_Variable_21, enum class ESlateVisibility Temp_byte_Variable_22, enum class ESlateVisibility Temp_byte_Variable_23, enum class E_CollectRedeem_Mission K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class E_CollectRedeem_ExChangeList Temp_byte_Variable_24, enum class ESlateVisibility K2Node_Select_Default_4, const struct FLinearColor& K2Node_Select_Default_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FLinearColor& K2Node_Select_Default_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FLinearColor& K2Node_Select_Default_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, enum class ESlateVisibility K2Node_Select_Default_8, enum class ESlateVisibility K2Node_Select_Default_9);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_CollectRedeem_ExchangeListSlot(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsDesignTime);
};

}


