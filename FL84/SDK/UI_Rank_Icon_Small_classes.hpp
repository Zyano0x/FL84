#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x454 - 0x400)
// WidgetBlueprintGeneratedClass UI_Rank_Icon_Small.UI_Rank_Icon_Small_C
class UUI_Rank_Icon_Small_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Rank;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Rank_Word;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Rank;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_Txt;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       TextBlock_StarNum;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_LegendRank;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Detail;                             // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        LevelID;                                           // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Star;                                              // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        IconSize;                                          // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TxtSize;                                           // 0x44C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Rank_Icon_Small_C* GetDefaultObj();

	void FormatViewJustIconCopy(int32 LevelID);
	void OnInitialized();
	void OnSolarUIClosed();
	void OnSolarUIOpened();
	void FormatViewCopy(int32 LevelID);
	class FString GetModuleName();
	void FormatViewJustIcon(int32 LevelID);
	void SetStar(bool Star, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	void FormatView(int32 LevelID);
	void PreConstruct(bool IsDesignTime);
	void SetRankIconView(int32 Param);
	void ExecuteUbergraph_UI_Rank_Icon_Small(int32 EntryPoint, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_Param, float CallFunc_Conv_IntToFloat_ReturnValue);
};

}


