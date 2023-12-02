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
	 * WidgetBlueprintGeneratedClass UI_KeyMappingPrompt.UI_KeyMappingPrompt_C
	 * Size -> 0x0083 (FullSize[0x0483] - InheritedSize[0x0400])
	 */
	class UUI_KeyMappingPrompt_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_Press;                                              // 0x0408(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            Empty;                                                   // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            EmptyDisable;                                            // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Gamepad_C*                             Gamepad;                                                 // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalLayout;                                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Icon;                                                    // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Bg;                                                  // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Keyboard_C*                            Keyboard;                                                // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     KeySwitcher;                                             // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Mouse_C*                               Mouse;                                                   // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_Root;                                            // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Hold;                                                // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Key;                                                 // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Shortcut;                                            // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalLayOut;                                          // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_KeyPromptStyle                                           Style;                                                   // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDisableEmpty;                                           // 0x0481(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bEnableInputSettingHide;                                 // 0x0482(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnInputDeviceChanged_46E905534BA7BD1099477F8FEBF0E5EE(const struct FInputDeviceProxy& InputDeviceProxy);
		void OnInputMappingUpdate_95EED30040CE4342E6C1A2A7AA22CF8C();
		void OnInputDeviceChanged_B1FC5C164D7B96EBECFC2192B5CD6E2C(const struct FInputDeviceProxy& InputDeviceProxy);
		void OnInputMappingUpdate_D946EA104A45CCDE7D2A3484301271F9();
		void OnInputDeviceChanged_05D917764389BFE78B8ACE9D2DB63DAF(const struct FInputDeviceProxy& InputDeviceProxy);
		void OnInputMappingUpdate_E69571E043B812E15D0DF8AF61AA2FFA();
		void OnChangeAdapterSlotWidgetParametersCopy(TArray<struct FWidgetOverrideParam> Params);
		void Destruct();
		void Construct();
		void OnInitialized();
		class FString GetModuleName();
		void SetEnableInputSettingHide(bool bEnable);
		void SetOperationTypeImpl(E_InputOperationType InType);
		void RefreshEmptyDisplay(bool bInEmpty);
		void SetEnableEmptyDispaly(bool bEnable);
		void SetStyle(E_KeyPromptStyle Style);
		void OnChangeAdapterSlotWidgetGameplayTag(const struct FGameplayTag& InGameplayTag, TArray<class FString> MetaData);
		void OnChangeAdapterSlotWidgetParameters(TArray<struct FWidgetOverrideParam> Params);
		void OnLoadAdapterSlotWidgetFinished();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_KeyMappingPrompt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
