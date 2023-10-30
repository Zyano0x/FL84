#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x119 (0x519 - 0x400)
// WidgetBlueprintGeneratedClass UI_TabControl_Base.UI_TabControl_Base_C
class UUI_TabControl_Base_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_TabStyle                        Style;                                             // 0x408(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetSwitcher*                       BindSwitcher;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DefaultSelection;                                  // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, struct FS_TabItem>       QueryItem_base;                                    // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class FString, class UBP_TabItemObj_C*> QueryItem;                                         // 0x478(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnActiveTabChanged;                                // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UListView*                             BindList;                                          // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ItemDefaultSize;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_TabItem>                    PresetItems;                                       // 0x4E8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FS_TabItem>                    Items;                                             // 0x4F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class FString                                CurrentSelection;                                  // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsDisableScroll;                                   // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_TabControl_Base_C* GetDefaultObj();

	void Destruct();
	void OnInitialized();
	void OnDeinitialize();
	class FString GetModuleName();
	void AddItemByItemData(const struct FS_TabItem& TabData, bool* Success, const struct FS_TabItem& K2Node_SetFieldsInStruct_StructOut, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_SpawnObject_ReturnValue);
	void AddSizedItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, const struct FVector2D& Szie, bool* Success, const struct FVector2D& ItemSize, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_SpawnObject_ReturnValue);
	void ReviseItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool* Success, class UBP_TabItemObj_C* ItemObj, int32 TargetIndex, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, const struct FS_TabItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void RefreshAllItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_TabItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AddItemByItemData_Success, bool CallFunc_Less_IntInt_ReturnValue);
	void InsertItem(int32 Index, const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool Temp_bool_Variable, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void AddItemByPreset(struct FS_TabItem& S_TabItem, bool CallFunc_AddItemByItemData_Success);
	void BindChildWidget(class UListView* CallFunc_SetBindWidget_BindList);
	void SetBindWidget(class UListView** BindList);
	void ScrollToItem(const class FString& Key, bool Active, float InScrollOffset, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_SetActiveTab_Success);
	void ClearItems();
	void SetStyle();
	void GetKeys(TArray<class FString>* Keys, TArray<class FString>& CallFunc_Map_Keys_Keys);
	void AddPresetItem();
	void SetActiveTab(const class FString& Key, bool* Success, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FS_TabItem& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	void GetLinkedWidgetByKey(const class FString& Key, class UWidget** Widget, const struct FS_TabItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void RemoveItem(const class FString& Key, bool* Success, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1);
	void AddItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool* Success, const struct FS_LocalText& K2Node_MakeStruct_S_LocalText, const struct FS_TabItem& K2Node_MakeStruct_S_TabItem, int32 CallFunc_Array_AddUnique_ReturnValue, class UBP_TabItemObj_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UBP_TabItemObj_C* CallFunc_SpawnObject_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnItemClicked(class UObject* Item);
	void OnItemSelected(class UObject* Item, bool bIsSelected);
	void ExecuteUbergraph_UI_TabControl_Base(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_SetActiveTab_Success, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Item_1, class UObject* K2Node_CustomEvent_Item, bool K2Node_CustomEvent_bIsSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_TabItemObj_C* K2Node_DynamicCast_AsBP_Tab_Item_Obj, bool K2Node_DynamicCast_bSuccess, const struct FS_TabItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_SetActiveTab_Success_1, int32 CallFunc_Array_Find_ReturnValue);
	void OnActiveTabChanged__DelegateSignature(const class FString& Key, int32 Index);
};

}


