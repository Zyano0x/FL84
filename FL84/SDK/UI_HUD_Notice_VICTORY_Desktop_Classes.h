#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C
	 * Size -> 0x0014 (FullSize[0x04B4] - InheritedSize[0x04A0])
	 */
	class UUI_HUD_Notice_VICTORY_Desktop_C : public UUINoticeVictory
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_KeyPrompt_C*                                     UI_KeyPrompt_Back;                                       // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    CountDownTime;                                           // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		void PreConstruct(bool IsDesignTime);
		void CloseSelf();
		void OnEndAnimFinish();
		void ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
