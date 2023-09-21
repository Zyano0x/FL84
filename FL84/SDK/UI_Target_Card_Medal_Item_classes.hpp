#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x388 - 0x348)
// WidgetBlueprintGeneratedClass UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C
class UUI_Target_Card_Medal_Item_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarButton*                          Btn_Press;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Medal;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bLargeMedal;                                       // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               MedalIcon;                                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSmallMedal;                                       // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Medal;                                             // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Target_Card_Medal_Item_C* GetDefaultObj();

	class FString GetModuleName();
	void BPCalLuaInitData(int32 ID, int32 Type, int32 Level);
	void SetSmallIcon(class UTexture2D* NewParam, bool NewParam1, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_3, float K2Node_Select_Default, const struct FVector2D& Temp_struct_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FVector2D& Temp_struct_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, const struct FVector2D& K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2, bool Temp_bool_Variable_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void SetLargeIcon(class UTexture2D* NewParam1, bool NewParam, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& K2Node_Select_Default_1, bool Temp_bool_Variable_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class ESlateVisibility K2Node_Select_Default_2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ChangeTargetCardMedalView(int32 ID, int32 Type, int32 Level);
	void ExecuteUbergraph_UI_Target_Card_Medal_Item(int32 EntryPoint, int32 K2Node_CustomEvent_ID, int32 K2Node_CustomEvent_Type, int32 K2Node_CustomEvent_Level, bool K2Node_Event_IsDesignTime);
};

}


