#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x439 - 0x400)
// WidgetBlueprintGeneratedClass UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C
class UUI_Lobby_MatchRoom_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarButton*                          Btn_MatchRoom;                                     // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Matchroom_Tips_Arrow;                          // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Matchroom_Tips;                            // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_MatchRoom;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarImageURL*                        SolarImageURL_Icon;                                // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USolarRichTextBlock*                   SolarRichTextBlock_Stage;                          // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Type_State_Desktop              StateDesktop;                                      // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Lobby_MatchRoom_C* GetDefaultObj();

	void OnClicked_6D1BCCC0495910AA6FB8FDBA3DBF74E8();
	void Construct();
	void Destruct();
	void OnInitialized();
	class FString GetModuleName();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Lobby_MatchRoom(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


