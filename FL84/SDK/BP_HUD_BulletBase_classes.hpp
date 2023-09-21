#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass BP_HUD_BulletBase.BP_HUD_BulletBase_C
class UBP_HUD_BulletBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_HUD_BulletBase_C* GetDefaultObj();

	void GetReloadBulletAnimation(class UWidgetAnimation** OutReloadAniamtion);
	void PlayReloadBulletAnimation(class UWidgetAnimation* CallFunc_GetReloadBulletAnimation_OutReloadAniamtion, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetBulletVisible(bool InbVisilble);
	void ReloadFinish(int32 InReservedAmmo, int32 InMaxAmmo);
	void SetBulletLightEffect(float InProgress);
	void GetBulletGaugeWidget(class UUserWidget** OutBulletGaugeWidget);
	void UpdateBulletGaugeProgress(float InBulletGaugeProgress, class UUserWidget* CallFunc_GetBulletGaugeWidget_OutBulletGaugeWidget, class UGaugeImage* K2Node_DynamicCast_AsGauge_Image, bool K2Node_DynamicCast_bSuccess);
	void GetUpdateBulletStateAnimation(class UWidgetAnimation** OutUpdateBulletStateAnimation);
	void PlayUpdateBulletStateAnimation(bool InbReload, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, class UWidgetAnimation* CallFunc_GetUpdateBulletStateAnimation_OutUpdateBulletStateAnimation, bool CallFunc_IsValid_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnActiveCrosshair(class UUserWidget* InActiveCrosshair);
	void OnChangeOverloadState(bool InbQuitState);
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);
	void OnInsufficientAmmo();
	void OnUpdateCharge(bool InbCharging, int32 InChargeMode, float InChargeProgress);
	void OnUpdateCoolDown(float InReloadProgress);
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);
	void OnUpdateAmmo(int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress, bool InbFirst);
	void OnUpdateReload(float InReloadProgress, int32 InReloadAmmo, int32 InMaxAmmo);
	void OnReloadFinish(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress);
	void ExecuteUbergraph_BP_HUD_BulletBase(int32 EntryPoint, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, float K2Node_Event_InReloadProgress_1, float K2Node_Event_InOverloadProgress, float K2Node_Event_InOverloadWarningRate, bool K2Node_Event_InbOverloadState, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_2, float K2Node_Event_InAmmoProgress_1, bool K2Node_Event_InbFirst, bool K2Node_Event_InbQuitState, bool K2Node_Event_bReloadSpeedup, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReloadAmmo_1, int32 K2Node_Event_InMaxAmmo_1, bool K2Node_Event_InbQuitState_1, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo, float K2Node_Event_InAmmoProgress, class UUserWidget* K2Node_Event_InActiveCrosshair);
};

}


