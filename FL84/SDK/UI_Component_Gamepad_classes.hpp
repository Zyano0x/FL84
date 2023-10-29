#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x464 - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_Gamepad.UI_Component_Gamepad_C
class UUI_Component_Gamepad_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_DoubleClick;                                   // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Hold;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_MainKey;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ModifierKey;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImage*                           Img_PlusIcon;                                      // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Normal;                                    // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_MainKey;                                   // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_ModifierKey;                               // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bCustomRefresh;                                    // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionName;                                        // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        Size;                                              // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_Gamepad_C* GetDefaultObj();

	void Destruct();
	void OnInitialized();
	void Construct();
	class FString GetModuleName();
	void SetMainKeySelection();
	void SetMainKeyNormal();
	void GetGamepadIconByKey(const struct FKey& InKey, class UPaperSprite** GamepadIcon);
	void SetData(const struct FKey& ModifierKey, const struct FKey& MainKey, const struct FKey& LocalMainKey, const struct FKey& LocalModifierKey, class UPaperSprite* CallFunc_GetGamepadIconByKey_GamepadIcon, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UPaperSprite* CallFunc_GetGamepadIconByKey_GamepadIcon_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Component_Gamepad(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


