#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * WidgetBlueprintGeneratedClass BP_HUD_ReloadBase.BP_HUD_ReloadBase_C
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UBP_HUD_ReloadBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetSpeedUpBuff(bool bHaveBuff);
		void StopReloadAnimation();
		void GetReloadAnimation(class UWidgetAnimation** OutReloadAnimation);
		void PlayReloadAnimation();
		void OnActiveCrosshair(class UUserWidget* InActiveCrosshair);
		void OnChangeOverloadState(bool InbQuitState);
		void OnInsufficientAmmo();
		void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress);
		void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);
		void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);
		void OnUpdateCoolDown(float InReloadProgress);
		void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);
		void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);
		void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);
		void ExecuteUbergraph_BP_HUD_ReloadBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
