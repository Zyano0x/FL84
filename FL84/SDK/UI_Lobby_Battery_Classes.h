#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * WidgetBlueprintGeneratedClass UI_Lobby_Battery.UI_Lobby_Battery_C
	 * Size -> 0x0278 (FullSize[0x04D8] - InheritedSize[0x0260])
	 */
	class UUI_Lobby_Battery_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_Charging;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_Battery;                                     // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateBrush                                         ProgressBarBgImage;                                      // 0x0278(0x0098) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ProgressBarMarqueeImage;                                 // 0x0310(0x0098) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ProgressBarFillNormal;                                   // 0x03A8(0x0098) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         ProgressBarFillCharging;                                 // 0x0440(0x0098) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ForceRefreshBatteryUI();
		void RefreshBatteryUI(int32_t BatteryLevelNewParam, bool bCharging);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void EventRefreshBatteryUI();
		void Destruct();
		void ExecuteUbergraph_UI_Lobby_Battery(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
