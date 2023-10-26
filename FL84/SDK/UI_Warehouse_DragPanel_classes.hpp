#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x400 - 0x400)
// WidgetBlueprintGeneratedClass UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C
class UUI_Warehouse_DragPanel_C : public USolarUserWidget
{
public:

	static class UClass* StaticClass();
	static class UUI_Warehouse_DragPanel_C* GetDefaultObj();

	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void Construct();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	class FString GetModuleName();
};

}


