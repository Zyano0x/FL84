#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x268 - 0x260)
// WidgetBlueprintGeneratedClass BP_HUD_ReloadBase.BP_HUD_ReloadBase_C
class UBP_HUD_ReloadBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_HUD_ReloadBase_C* GetDefaultObj();

	void SetSpeedUpBuff(bool bHaveBuff);
	void StopReloadAnimation(class UWidgetAnimation* CallFunc_GetReloadAnimation_OutReloadAnimation, bool CallFunc_IsValid_ReturnValue);
	void GetReloadAnimation(class UWidgetAnimation** OutReloadAnimation);
	void PlayReloadAnimation(class UWidgetAnimation* CallFunc_GetReloadAnimation_OutReloadAnimation, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnActiveCrosshair(class UUserWidget* InActiveCrosshair);
	void OnChangeOverloadState(bool InbQuitState);
	void OnInsufficientAmmo();
	void OnReloadFinish(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress);
	void OnUpdateAmmo(int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress, bool InbFirst);
	void OnUpdateCharge(bool InbCharging, int32 InChargeMode, float InChargeProgress);
	void OnUpdateCoolDown(float InReloadProgress);
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);
	void OnUpdateReload(float InReloadProgress, int32 InReloadAmmo, int32 InMaxAmmo);
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);
	void ExecuteUbergraph_BP_HUD_ReloadBase(int32 EntryPoint, bool K2Node_Event_InbQuitState, bool K2Node_Event_bReloadSpeedup, class UUserWidget* K2Node_Event_InActiveCrosshair, bool K2Node_Event_InbQuitState_1, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo_1, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_2, float K2Node_Event_InAmmoProgress_1, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo_1, float K2Node_Event_InAmmoProgress, bool K2Node_Event_InbFirst, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, float K2Node_Event_InReloadProgress_1, float K2Node_Event_InOverloadProgress, float K2Node_Event_InOverloadWarningRate, bool K2Node_Event_InbOverloadState, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InMaxAmmo);
};

}


