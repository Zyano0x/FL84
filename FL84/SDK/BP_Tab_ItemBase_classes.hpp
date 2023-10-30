#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x478 - 0x400)
// WidgetBlueprintGeneratedClass BP_Tab_ItemBase.BP_Tab_ItemBase_C
class UBP_Tab_ItemBase_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                Text;                                              // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_HintData                           HintData;                                          // 0x420(0xB)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2460[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class E_TabStyle                        Style;                                             // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2461[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USolarRedHint_General_C*               HintWidget;                                        // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSelected;                                         // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2462[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ItemSelected;                                      // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USolarTextBlock*                       WText;                                             // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_TabItemObj_C*                      Obj;                                               // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               IconImage;                                         // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Tab_ItemBase_C* GetDefaultObj();

	void ReviseWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText CallFunc_LocalText2Text_Text);
	void SetProperties(class UBP_TabItemObj_C* Obj);
	void UpdateWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class FText CallFunc_LocalText2Text_Text);
	void InitWidget(class USolarRedHint_General_C** HintWidget, class USolarTextBlock** Text, class UImage** Icon);
	void SetSelected(bool IsSelected);
	void SetStyle(enum class E_TabStyle Style);
	void SetHintData(struct FS_HintData& S_HintData);
	void SetItemSize(const struct FVector2D& Size);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void PreConstruct(bool IsDesignTime);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnRevised();
	void OnLocalLangChangedEx(const class FString& InLang);
	void ExecuteUbergraph_BP_Tab_ItemBase(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_IsDesignTime, class USolarRedHint_General_C* CallFunc_InitWidget_HintWidget, class USolarTextBlock* CallFunc_InitWidget_Text, class UImage* CallFunc_InitWidget_Icon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UBP_TabItemObj_C* K2Node_DynamicCast_AsBP_Tab_Item_Obj, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, const class FString& K2Node_Event_InLang, bool CallFunc_IsValid_ReturnValue_4, class FText CallFunc_LocalText2Text_Text);
	void ItemSelected__DelegateSignature(const class FString& Key);
};

}


