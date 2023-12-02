#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_CountDown.UI_CountDown_C
	 * Size -> 0x0040 (FullSize[0x0440] - InheritedSize[0x0400])
	 */
	class UUI_CountDown_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Flip;                                                    // 0x0408(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Number;                                                  // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUD_Notice_Lv3_C*                                UI_HUD_Notice_Lv3;                                       // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     wStyle;                                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    Time;                                                    // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AGHW[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TimeName;                                                // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void SequenceEvent__ENTRYPOINTUI_CountDown_1(class UOverlay* NumberContainer);
		void SetMiniCountDownText(const class FString& InText);
		void SetCountDownStyle(E_CountDownStyle Style);
		void Finish();
		void NumberContainer_Event_2(class UOverlay* NumberContainer);
		void PreConstruct(bool IsDesignTime);
		void CustomEvent_3();
		void CountDownBySingleNumber(int32_t Number);
		void CustomEvent_1(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue);
		void CustomEvent_2(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue);
		void ExecuteUbergraph_UI_CountDown(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
