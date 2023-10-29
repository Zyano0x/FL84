#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x448 - 0x400)
// WidgetBlueprintGeneratedClass UI_ActivityBtn.UI_ActivityBtn_C
class UUI_ActivityBtn_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                       BgBlur;                                            // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarButton*                          Btn_TurnTo;                                        // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImageURL*                        ImageURL;                                          // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Mask;                                          // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Loading;                                     // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarTextBlock*                       Txt_Loading;                                       // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Close_C*                 UI_Component_Close;                                // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Component_Option_C*                UI_Component_Option;                               // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_ActivityBtn_C* GetDefaultObj();

	void OnClicked_999880174497A62AE2B588BFC4581F4F();
	void OnSolarUIClosed();
	void OnSolarUIOpened();
	void OnBackKey(enum class EWidgetBackKeyType BackKeyType);
	class FString GetModuleName();
	void Construct();
	void BP_EventSetBlur();
	void ExecuteUbergraph_UI_ActivityBtn(int32 EntryPoint);
};

}


