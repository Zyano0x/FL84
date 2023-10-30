#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x540 - 0x519)
// WidgetBlueprintGeneratedClass UI_TabControl_Vertical.UI_TabControl_Vertical_C
class UUI_TabControl_Vertical_C : public UUI_TabControl_Base_C
{
public:
	uint8                                        Pad_37AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Line;                                          // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Tab_Panel;                                         // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarListView*                        TabList;                                           // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_TabControl_Vertical_C* GetDefaultObj();

	void SetBindWidget(class UListView** BindList, class UListView* CallFunc_SetBindWidget_BindList);
	void SetStyle(enum class E_TabStyle Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_TabControl_Vertical(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


