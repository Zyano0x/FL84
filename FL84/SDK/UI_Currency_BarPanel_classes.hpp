#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// WidgetBlueprintGeneratedClass UI_Currency_BarPanel.UI_Currency_BarPanel_C
class UUI_Currency_BarPanel_C : public USolarUserWidget
{
public:
	class UUI_Currency_Bar_C*                    UI_Currency_Bar;                                   // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Currency_BarPanel_C* GetDefaultObj();

	void OnSolarUIOpened();
	void Destruct();
	void Construct();
	void OnSolarUIClosed();
	class FString GetModuleName();
};

}


