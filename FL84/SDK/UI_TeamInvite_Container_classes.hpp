#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x428 - 0x400)
// WidgetBlueprintGeneratedClass UI_TeamInvite_Container.UI_TeamInvite_Container_C
class UUI_TeamInvite_Container_C : public USolarUserWidget
{
public:
	class UCanvasPanel*                          Adapter;                                           // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Container;                             // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel;                                             // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Lobby_RoomInvite_MIni_Popup_C*     UI_Lobby_RoomInvite_MIni_Popup;                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Lobby_TeamInvite_Mini_Popup_C*     UI_Lobby_TeamInvite_Mini_Popup;                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_TeamInvite_Container_C* GetDefaultObj();

	void OnSolarUIClosed();
	void OnHide();
	void OnSolarUIOpened();
	void OnShow();
	void OnInitialized();
	class FString GetModuleName();
};

}


