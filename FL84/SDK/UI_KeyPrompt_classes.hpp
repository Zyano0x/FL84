#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2B9 - 0x260)
// WidgetBlueprintGeneratedClass UI_KeyPrompt.UI_KeyPrompt_C
class UUI_KeyPrompt_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               BtnKey;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarAdapterWidget*                   Panel_Shortcut;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_KeyPromptStyle                  Seven_;                                            // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionName;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	enum class E_InputOperationType              ____;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableBtn;                                        // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bDisableEmpty;                                     // 0x29A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24CE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bEnableInputSettingHide;                           // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActionDescLocID;                                   // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableHighResolution;                             // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_KeyPrompt_C* GetDefaultObj();

	void SetActionName(const class FString& InActionName);
	void RefreshKeyPromptUI(TArray<struct FWidgetOverrideParam>& CallFunc_BuildOverrideParams_Array, class UUserWidget* CallFunc_GetAdapteeWidget_ReturnValue, class UUI_KeyMappingPrompt_C* K2Node_DynamicCast_AsUI_Key_Mapping_Prompt, bool K2Node_DynamicCast_bSuccess);
	void GetSplitActionName(const class FString& SourceString, class FString* NewParam, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue);
	void BuildOverrideActionDescParam(int32 LocTextID, struct FWidgetOverrideParam* WidgetOverrideParam, const struct FWidgetOverrideParam& K2Node_MakeStruct_WidgetOverrideParam);
	void BuildOverrideParams(TArray<struct FWidgetOverrideParam>* Array, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FWidgetOverrideParam& CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetSplitActionName_NewParam, const struct FWidgetOverrideParam& K2Node_MakeStruct_WidgetOverrideParam, bool CallFunc_TryGetRowData_HasKey, const struct FSolarTablesData_InputMapping& CallFunc_TryGetRowData_ReturnValue, const struct FWidgetOverrideParam& CallFunc_BuildOverrideActionDescParam_WidgetOverrideParam_1, TArray<struct FWidgetOverrideParam>& K2Node_MakeArray_Array);
	void SetOperationType(enum class E_InputOperationType Type, class UUserWidget* CallFunc_GetAdapteeWidget_ReturnValue, class UUI_KeyMappingPrompt_C* K2Node_DynamicCast_AsUI_Key_Mapping_Prompt, bool K2Node_DynamicCast_bSuccess);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_KeyPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnClicked__DelegateSignature();
};

}


