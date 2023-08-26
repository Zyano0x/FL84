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
	 * WidgetBlueprintGeneratedClass BP_HUD_BulletBase.BP_HUD_BulletBase_C
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UBP_HUD_BulletBase_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void GetReloadBulletAnimation(class UWidgetAnimation** OutReloadAniamtion);
		void PlayReloadBulletAnimation();
		void SetBulletVisible(bool InbVisilble);
		void ReloadFinish(int32_t InReservedAmmo, int32_t InMaxAmmo);
		void SetBulletLightEffect(float InProgress);
		void GetBulletGaugeWidget(class UUserWidget** OutBulletGaugeWidget);
		void UpdateBulletGaugeProgress(float InBulletGaugeProgress);
		void GetUpdateBulletStateAnimation(class UWidgetAnimation** OutUpdateBulletStateAnimation);
		void PlayUpdateBulletStateAnimation(bool InbReload);
		void OnActiveCrosshair(class UUserWidget* InActiveCrosshair);
		void OnChangeOverloadState(bool InbQuitState);
		void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);
		void OnInsufficientAmmo();
		void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);
		void OnUpdateCoolDown(float InReloadProgress);
		void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);
		void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);
		void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);
		void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress);
		void ExecuteUbergraph_BP_HUD_BulletBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
