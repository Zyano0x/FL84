#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x438 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C
class UUI_Lobby_Mainmenu_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Garage_1;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Warehouse;                                     // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Btn_Weapons;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRedHint_General_C*               HintPoint_Garage;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRedHint_General_C*               HintPoint_Weapon;                                  // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRedHint_General_C*               RedHint_Warehouse;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Mainmenu_C* GetDefaultObj();

	void OnClicked_23CC45774944B31ABA66DA93367D722A();
	void OnClicked_B3A4D3A848E06ADF4FB7DF935B09B29F();
	void OnClicked_E8715F264B086C3FF399AF95BBE14E4C();
	void Destruct();
	void OnSolarUIOpened();
	void Construct();
	void OnSolarUIClosed();
	class FString GetModuleName();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Lobby_Mainmenu(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


