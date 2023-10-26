#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x422 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C
class UUI_Lobby_Invite_Btn_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Invite;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Bg_1;                                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Txt;                                       // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsDesktop;                                         // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_State_Desktop              StateDesktop;                                      // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_Invite_Btn_C* GetDefaultObj();

	void SetStateDesktop(bool IsDesktop, enum class E_Type_State_Desktop StateDesktop, enum class E_Type_State_Desktop Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& K2Node_Select_Default, class UObject* K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Lobby_Invite_Btn(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


