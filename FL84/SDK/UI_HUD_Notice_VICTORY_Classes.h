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
	 * WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C
	 * Size -> 0x000C (FullSize[0x04AC] - InheritedSize[0x04A0])
	 */
	class UUI_HUD_Notice_VICTORY_C : public UUINoticeVictory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CountDownTime;                                           // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		void CloseSelf();
		void OnEndAnimFinish();
		void PreConstruct(bool IsDesignTime);
		void OnSolarUIClosed();
		void ExecuteUbergraph_UI_HUD_Notice_VICTORY(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
