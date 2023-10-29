#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x430 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C
class UUI_Lobby_Tips_Container_C : public USolarUserWidget
{
public:
	class USolarButton*                          Btn_BlockAllBtn;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarButton*                          Btn_BlockBtn01;                                    // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarButton*                          Btn_BlockBtn02;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarButton*                          Btn_BlockBtn03;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarButton*                          Btn_BlockBtn04;                                    // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_Container;                             // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Tips_Container_C* GetDefaultObj();

	void OnClicked_AB1E8EE54E384692712319B630A5DF61();
	void OnPressed_51E6B1D644C6FFCB2142C980FCD18B45();
	void OnHide();
	void OnShow();
	void Destruct();
	void Construct();
	class FString GetModuleName();
};

}


