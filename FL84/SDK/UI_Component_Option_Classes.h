#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * WidgetBlueprintGeneratedClass UI_Component_Option.UI_Component_Option_C
	 * Size -> 0x0080 (FullSize[0x04A0] - InheritedSize[0x0420])
	 */
	class UUI_Component_Option_C : public USolarCheckButtonWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        Panel_Disabled;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_Option;                                    // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Option;                                              // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       UseText;                                                 // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TDSR[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0448(0x0018) Edit, BlueprintVisible
		int32_t                                                    TextID;                                                  // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESolarSupportLanguages                                     TextPreviewLang;                                         // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C3FP[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontSizeForLang                               SpecialLangFont;                                         // 0x0468(0x0018) Edit, BlueprintVisible
		bool                                                       Disabled;                                                // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F2HB[0x7];                                   // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnOptionCheckStateChanged;                               // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bCustomClicked;                                          // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SVB6[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OptionType;                                              // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnInitialized();
		void OnListItemObjectSetCopy(class UObject* ListItemObject);
		class FString GetModuleName();
		void SetTextID(int32_t LocTextID);
		void SetText(const class FString& NewParam);
		void SetEnabled(bool Enabled);
		void SetOptionType(int32_t OptionType);
		void ManualOptionSetIsChecked(bool bIsChecked);
		void BP_OnEntryReleased();
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void OnListItemObjectSet(class UObject* ListItemObject);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OnSelected(bool bSelected);
		void SetDisbaled(bool Disabled);
		void RefreshOptionTxtUI();
		void ExecuteUbergraph_UI_Component_Option(int32_t EntryPoint);
		void OnOptionCheckStateChanged__DelegateSignature(bool bIsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
