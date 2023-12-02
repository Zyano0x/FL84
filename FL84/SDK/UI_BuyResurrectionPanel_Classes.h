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
	 * WidgetBlueprintGeneratedClass UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C
	 * Size -> 0x0039 (FullSize[0x0439] - InheritedSize[0x0400])
	 */
	class UUI_BuyResurrectionPanel_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPanel_Interact_Progress_C*                          Panel_Interact_Progress;                                 // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Root;                                                    // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUD_Notice_BuyResurrection_C*                    UI_HUD_Notice_BuyResurrection;                           // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPC_BuyResurrection_C*                              BuyComp;                                                 // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              NotifyString;                                            // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsBeingRevived;                                          // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBtnVis(bool Show);
		void SetBtnaAndTipVisibility(bool Visibility);
		void Event_Init(class UBPC_BuyResurrection_C* BuyComp);
		void EventOnStateChange(EResurrectionState NewState);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnReviveStateChange(class ASolarPlayerState* RevivingMePlayer);
		void BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature();
		void NotifyTeammateRevive();
		void ExecuteUbergraph_UI_BuyResurrectionPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
