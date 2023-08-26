#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_TabControl_Base.UI_TabControl_Base_C
	 * Size -> 0x0119 (FullSize[0x0461] - InheritedSize[0x0348])
	 */
	class UUI_TabControl_Base_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		E_TabStyle                                                 Style;                                                   // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ONOK[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetSwitcher*                                     BindSwitcher;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DefaultSelection;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TMap<class FString, struct FS_TabItem>                     QueryItem_base;                                          // 0x0370(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class FString, class UBP_TabItemObj_C*>               QueryItem;                                               // 0x03C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnActiveTabChanged;                                      // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UListView*                                           BindList;                                                // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ItemDefaultSize;                                         // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_TabItem>                                  PresetItems;                                             // 0x0430(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash
		TArray<struct FS_TabItem>                                  Items;                                                   // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FString                                              CurrentSelection;                                        // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsDisableScroll;                                         // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		class FString GetModuleName();
		void AddItemByItemData(const struct FS_TabItem& TabData, bool* Success);
		void AddSizedItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, const struct FVector2D& Szie, bool* Success);
		void ReviseItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool* Success);
		void RefreshAllItems();
		void InsertItem(int32_t Index, const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget);
		void AddItemByPreset(const struct FS_TabItem& S_TabItem);
		void BindChildWidget();
		void SetBindWidget(class UListView** BindList);
		void ScrollToItem(const class FString& Key, bool Active, float InScrollOffset);
		void ClearItems();
		void SetStyle();
		void GetKeys(TArray<class FString>* Keys);
		void AddPresetItem();
		void SetActiveTab(const class FString& Key, bool* Success);
		void GetLinkedWidgetByKey(const class FString& Key, class UWidget** Widget);
		void RemoveItem(const class FString& Key, bool* Success);
		void AddItem(const class FString& Key, const class FString& Text, class UObject* Icon, const struct FS_HintData& HintDotData, class UWidget* LinkWidget, bool* Success);
		void PreConstruct(bool IsDesignTime);
		void OnItemClicked(class UObject* Item);
		void OnItemSelected(class UObject* Item, bool bIsSelected);
		void ExecuteUbergraph_UI_TabControl_Base(int32_t EntryPoint);
		void OnActiveTabChanged__DelegateSignature(const class FString& Key, int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
