#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x408 - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_Item_VoiceSlot.UI_Component_Item_VoiceSlot_C
class UUI_Component_Item_VoiceSlot_C : public USolarUserWidget
{
public:
	class UImage*                                Img_Hero;                                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_Item_VoiceSlot_C* GetDefaultObj();

	void OnInitialized();
	class FString GetModuleName();
};

}


