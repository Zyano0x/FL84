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
	 * WidgetBlueprintGeneratedClass Panel_Interact_Progress.Panel_Interact_Progress_C
	 * Size -> 0x00AD (FullSize[0x055D] - InheritedSize[0x04B0])
	 */
	class UPanel_Interact_Progress_C : public USolarProgressiveInteractButton
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Enter_Anim;                                              // 0x04B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Select_Anim;                                             // 0x04C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USolarButton*                                        Btn_Interact;                                            // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     CancelableSwitcher;                                      // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Icon;                                                // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              img_Icon_Light;                                          // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Light;                                               // 0x04E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Light_2;                                             // 0x04F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     InteractableSwitcher;                                    // 0x04F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_CD;                                                // 0x0500(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarAdapterWidget*                                 Panel_Interact_KeyMapping;                               // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_Progress_CountDown;                                // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_ReduceCD;                                          // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Button_ReduceCD_Clock_C*                         ReduceCD_Clock;                                          // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Button_ReduceCD_Light_C*                         ReduceCD_Light;                                          // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Cancel;                                              // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Interact;                                            // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Interact_Desktop;                                    // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Button_Selected_Anim_C*                          UI_Button_Selected_Anim;                                 // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Skill_CDRefresh_Anim_C*                          UI_Skill_CDRefresh_Anim;                                 // 0x0550(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ECountDownState                                            State;                                                   // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Interact_Type                                            InteractType;                                            // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowProgressBarPrevInteract;                             // 0x055A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       NonProgressText;                                         // 0x055B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HideNonCancellableTips;                                  // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void RefreshToNonCancellableInteracting();
		void RefreshToCancellableInteracting();
		void RefreshToPreInteract();
		void PlayFadeInAnim();
		void HidePassiveBuff();
		void ShowPassiveBuff(int32_t CharacterId, int32_t LocalTextId);
		void EnablePassiveBuffDisplay(int32_t CharacterId, int32_t LocalTextId);
		void SetProgressBarRatio(float Ratio);
		void SetProgressBarVisiblity(bool bShow);
		void SetInteractType(E_Interact_Type InteractType);
		void UpdateStateView(ECountDownState InState);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BP_UpdateStateView(ECountDownState InState);
		void BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void ExecuteUbergraph_Panel_Interact_Progress(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
