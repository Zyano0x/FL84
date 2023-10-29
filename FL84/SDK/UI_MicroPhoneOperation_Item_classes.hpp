#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAC (0x4AC - 0x400)
// WidgetBlueprintGeneratedClass UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C
class UUI_MicroPhoneOperation_Item_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BackBG;                                            // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_TeamPos;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_PosInTeam;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarCheckBox*                        SolarCheckBox_Switch;                              // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Color1;                                            // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color2;                                            // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color3;                                            // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Color4;                                            // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorBG1;                                          // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorBG2;                                          // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorBG3;                                          // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorBG4;                                          // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OrderId;                                           // 0x4A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_MicroPhoneOperation_Item_C* GetDefaultObj();

	void OnCheckStateChanged_130AC830494605719C4EDE8B779649B6(bool bIsChecked);
	void OnCheckStateChanged_574384DE4DD02AAA024903AEB16E050B(bool bIsChecked);
	void OnCheckStateChanged_37BB2EF14915073C1861E781365517F6(bool bIsChecked);
	void OnCheckStateChanged_6FBAC02741A74497590D4B942625D36A(bool bIsChecked);
	void Construct();
	void Destruct();
	class FString GetModuleName();
	void SetOrder(int32 OrderId, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, bool K2Node_SwitchInteger_CmpSuccess);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_MicroPhoneOperation_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


