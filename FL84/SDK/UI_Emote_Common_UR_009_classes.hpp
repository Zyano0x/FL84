#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x678 - 0x648)
// WidgetBlueprintGeneratedClass UI_Emote_Common_UR_009.UI_Emote_Common_UR_009_C
class UUI_Emote_Common_UR_009_C : public UEmojiBubbleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      EmojiEnd_Anim_1;                                   // 0x650(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      EmojiBegin_Anim_1;                                 // 0x658(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_Emoji_Bg;                                      // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Emoji_Bg_1;                                    // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Panel_Emoji;                                       // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Emote_Common_UR_009_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_Emote_Common_UR_009(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


