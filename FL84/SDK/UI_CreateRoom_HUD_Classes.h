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
	 * WidgetBlueprintGeneratedClass UI_CreateRoom_HUD.UI_CreateRoom_HUD_C
	 * Size -> 0x0059 (FullSize[0x0459] - InheritedSize[0x0400])
	 */
	class UUI_CreateRoom_HUD_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_Component_Btn_C*                                 Btn_GameStart;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Component_Btn_C*                                 Btn_RoomManage;                                          // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyPrompt_C*                                     Panel_Shortcut;                                          // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_KeyPrompt_C*                                     Panel_Shortcut_2;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      panel_spectators;                                        // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_HUD_Prize_C*                          PrizePool;                                               // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarRichTextBlock*                                 Txt_Countdown;                                           // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarTextBlock*                                     Txt_Spectators;                                          // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Manage;                                   // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Start;                                    // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsOwner;                                                // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class FString GetModuleName();
		void SetOnwerMode(bool IsOwner);
		void ShowSpectator(bool Show);
		void Construct();
		void StartTicking();
		void TikTok();
		void BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void UpdateButtonState(bool CanStart);
		void OnRoomInfoSwitch();
		void OnStartGame();
		void Event_RoomInfoSwitch();
		void Event_GameStart();
		void OnShow();
		void OnHide();
		void ExecuteUbergraph_UI_CreateRoom_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
