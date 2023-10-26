#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x428 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_RedPacket.UI_Lobby_RedPacket_C
class UUI_Lobby_RedPacket_C : public USolarUserWidget
{
public:
	class UWidgetAnimation*                      Anim_Enter;                                        // 0x400(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_RedPacket;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Countdown;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Time;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Close_C*                 UI_Component_Close;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_RedPacket_C* GetDefaultObj();

	void OnClicked_D48740D1452E41F88FC37EAE15204FAF();
	void Destruct();
	void OnSolarUIOpened();
	void Construct();
	void OnSolarUIClosed();
	class FString GetModuleName();
};

}


