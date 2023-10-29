#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0x44A - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C
class UUI_Lobby_Sanctuary_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Sanctuary;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBtn_Unlock_Anim_2_C*                  Btn_Unlock_Anim_1;                                 // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Arrow;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Sanctuary;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_SanctuaryContent;                            // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Anim_Circle_1_C*                   Sanctuary_Matching;                                // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Txt_Sanctuary;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              UI_Lobby_Sanctuary;                                // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Matching;                                          // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Lobby_Sanctuary_C* GetDefaultObj();

	void Destruct();
	void OnSolarUIOpened();
	void OnSolarUIClosed();
	void ConstructCopy();
	class FString GetModuleName();
	void BP_RefreshSanctuaryUI(bool bInLocked, bool bInMatching, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_4, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, bool Temp_bool_Variable_7, float Temp_float_Variable_2, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, float K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_Lobby_Sanctuary(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


