#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x380 - 0x348)
// WidgetBlueprintGeneratedClass Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C
class UBtn_Unlock_Anim_1_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Unlock;                                       // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Btn_Locked;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAnimStarted;                                     // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnAnimEnded;                                       // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBtn_Unlock_Anim_1_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_1();
	void SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_0();
	void OnAnimStart();
	void OnAnimEnd();
	void ExecuteUbergraph_Btn_Unlock_Anim_1(int32 EntryPoint);
	void OnAnimEnded__DelegateSignature();
	void OnAnimStarted__DelegateSignature();
};

}


