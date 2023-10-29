#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x441 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Banner.UI_Lobby_Banner_C
class UUI_Lobby_Banner_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              BannerSizeBox;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Warehouse_DragPanel_C*             DragPanel;                                         // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImageURL*                        Image_URL;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Hover;                                         // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Shortcut_HD;                                 // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarListView*                        SolarListView_Banner;                              // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarListView*                        SolarListView_Image;                               // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_TabLobbyItemState               StateHD;                                           // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Banner_C* GetDefaultObj();

	void OnURLDownloadFinish_D0B3E8F54C02B48E23F6E19AADE0C269(bool bSuccess);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnSolarUIClosed();
	void OnSolarUIOpened();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	class FString GetModuleName();
	void SetStateHD(enum class E_TabLobbyItemState State, enum class E_TabLobbyItemState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_UI_Lobby_Banner(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPlatformSwitch_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1);
};

}


