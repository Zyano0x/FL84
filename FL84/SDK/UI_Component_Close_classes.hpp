#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x394 - 0x348)
// WidgetBlueprintGeneratedClass UI_Component_Close.UI_Component_Close_C
class UUI_Component_Close_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarButton*                          Btn_Close;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Close_Nml;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Black;                                             // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         White;                                             // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Icon_Size;                                         // 0x38C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_Close_C* GetDefaultObj();

	class FString GetModuleName();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Component_Close(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool K2Node_Event_IsDesignTime, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1);
	void OnPressed__DelegateSignature();
	void OnClicked__DelegateSignature();
};

}


