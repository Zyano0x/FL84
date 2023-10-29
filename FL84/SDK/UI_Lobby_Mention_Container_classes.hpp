#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C
class UUI_Lobby_Mention_Container_C : public USolarUserWidget
{
public:
	class UCanvasPanel*                          CanvasPanel_Container;                             // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Mention_Container_C* GetDefaultObj();

	void OnSolarUIClosed();
	void OnSolarUIOpened();
	void OnInitialized();
	class FString GetModuleName();
};

}


