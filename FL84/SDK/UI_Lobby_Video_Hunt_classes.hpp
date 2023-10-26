#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x418 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Video_Hunt.UI_Lobby_Video_Hunt_C
class UUI_Lobby_Video_Hunt_C : public USolarUserWidget
{
public:
	class UButton*                               Btn_Close;                                         // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_VideoPlayer;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Video_Hunt_C* GetDefaultObj();

	class FString GetModuleName();
};

}


