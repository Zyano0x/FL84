#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x43C - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_Emoji_Item.UI_Component_Emoji_Item_C
class UUI_Component_Emoji_Item_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Use;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Item_BG;                                           // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Item_BG_Empty;                                     // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Item_icon;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Item_Quality                    Quality;                                           // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2605[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EmojiUseCD;                                        // 0x434(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ValidEmojiUseDistance;                             // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_Emoji_Item_C* GetDefaultObj();

	class FString GetModuleName();
	void SetQuality(enum class E_Item_Quality Quality, enum class E_Item_Quality Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* Temp_object_Variable_4, class UObject* Temp_object_Variable_5, class UObject* K2Node_Select_Default);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Component_Emoji_Item(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_IsDesignTime);
};

}


