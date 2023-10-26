#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x458 - 0x450)
// WidgetBlueprintGeneratedClass UI_LobbyBase.UI_LobbyBase_C
class UUI_LobbyBase_C : public USolarPanelWidget
{
public:
	class UPanelWidget*                          VideoWrapper;                                      // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_LobbyBase_C* GetDefaultObj();

	void InitLobbyBase(class UPanelWidget* InVideo);
	void AddVideoPanel(const struct FMargin& K2Node_MakeStruct_Margin, const struct FAnchors& K2Node_MakeStruct_Anchors, class UUI_Lobby_Video_Hunt_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
};

}


