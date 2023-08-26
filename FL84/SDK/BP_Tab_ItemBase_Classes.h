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
	 * WidgetBlueprintGeneratedClass BP_Tab_ItemBase.BP_Tab_ItemBase_C
	 * Size -> 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
	 */
	class UBP_Tab_ItemBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              Text;                                                    // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FVector2D                                           Size;                                                    // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_HintData                                         HintData;                                                // 0x0280(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		E_TabStyle                                                 Style;                                                   // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D4T6[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USolarRedHint_General_C*                             HintWidget;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSelected;                                               // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D851[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ItemSelected;                                            // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USolarTextBlock*                                     wText;                                                   // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_TabItemObj_C*                                    Obj;                                                     // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Icon;                                                    // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             IconImage;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetProperties(class UBP_TabItemObj_C* Obj);
		void UpdateWidget();
		void InitWidget(class USolarRedHint_General_C** HintWidget, class USolarTextBlock** Text, class UImage** Icon);
		void SetSelected(bool IsSelected);
		void SetStyle(E_TabStyle Style);
		void SetHintData(const struct FS_HintData& S_HintData);
		void SetItemSize(const struct FVector2D& Size);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void PreConstruct(bool IsDesignTime);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnRevised();
		void BP_OnEntryReleased();
		void OnLocalLangChanged(class UObject* Publisher, class UObject* Payload, TArray<class FString> MetaData);
		void ExecuteUbergraph_BP_Tab_ItemBase(int32_t EntryPoint);
		void ItemSelected__DelegateSignature(const class FString& Key);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
