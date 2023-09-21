#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x378 - 0x348)
// WidgetBlueprintGeneratedClass UI_AvatarFrame_Publish_Moderator.UI_AvatarFrame_Publish_Moderator_C
class UUI_AvatarFrame_Publish_Moderator_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Loop_Anim;                                         // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Clicked;                                        // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Released;                                       // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_AvatarFrame_Publish_Moderator_C* GetDefaultObj();

	class FString GetModuleName();
	void SetAvatarIcon(int32 InAvatarID);
	void SetEmptyState(bool IsEmpty);
	void SetPlayerGender(enum class E_Type_Gender Gender);
	void SetSocialIcon(enum class E_Type_Social Social);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update();
	void ExecuteUbergraph_UI_AvatarFrame_Publish_Moderator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime);
	void On_Released__DelegateSignature();
	void On_Clicked__DelegateSignature();
};

}


