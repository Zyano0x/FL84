#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x420 - 0x400)
// WidgetBlueprintGeneratedClass UI_Marquees.UI_Marquees_C
class UUI_Marquees_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Bg;                                            // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Marquees;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Marquees;                                      // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Marquees_C* GetDefaultObj();

	void ReceiveTick(struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSolarUIOpened();
	void OnSolarUIClosed();
	void Construct();
	class FString GetModuleName();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Marquees(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


