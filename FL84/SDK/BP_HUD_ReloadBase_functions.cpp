#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_HUD_ReloadBase.BP_HUD_ReloadBase_C
// (None)

class UClass* UBP_HUD_ReloadBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUD_ReloadBase_C");

	return Clss;
}


// BP_HUD_ReloadBase_C BP_HUD_ReloadBase.Default__BP_HUD_ReloadBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUD_ReloadBase_C* UBP_HUD_ReloadBase_C::GetDefaultObj()
{
	static class UBP_HUD_ReloadBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUD_ReloadBase_C*>(UBP_HUD_ReloadBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHaveBuff                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_ReloadBase_C::SetSpeedUpBuff(bool bHaveBuff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "SetSpeedUpBuff");

	Params::UBP_HUD_ReloadBase_C_SetSpeedUpBuff_Params Parms{};

	Parms.bHaveBuff = bHaveBuff;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            CallFunc_GetReloadAnimation_OutReloadAnimation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_ReloadBase_C::StopReloadAnimation(class UWidgetAnimation* CallFunc_GetReloadAnimation_OutReloadAnimation, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "StopReloadAnimation");

	Params::UBP_HUD_ReloadBase_C_StopReloadAnimation_Params Parms{};

	Parms.CallFunc_GetReloadAnimation_OutReloadAnimation = CallFunc_GetReloadAnimation_OutReloadAnimation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            OutReloadAnimation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::GetReloadAnimation(class UWidgetAnimation** OutReloadAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "GetReloadAnimation");

	Params::UBP_HUD_ReloadBase_C_GetReloadAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutReloadAnimation != nullptr)
		*OutReloadAnimation = Parms.OutReloadAnimation;

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            CallFunc_GetReloadAnimation_OutReloadAnimation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::PlayReloadAnimation(class UWidgetAnimation* CallFunc_GetReloadAnimation_OutReloadAnimation, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "PlayReloadAnimation");

	Params::UBP_HUD_ReloadBase_C_PlayReloadAnimation_Params Parms{};

	Parms.CallFunc_GetReloadAnimation_OutReloadAnimation = CallFunc_GetReloadAnimation_OutReloadAnimation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 InActiveCrosshair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::OnActiveCrosshair(class UUserWidget* InActiveCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnActiveCrosshair");

	Params::UBP_HUD_ReloadBase_C_OnActiveCrosshair_Params Parms{};

	Parms.InActiveCrosshair = InActiveCrosshair;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbQuitState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_ReloadBase_C::OnChangeOverloadState(bool InbQuitState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnChangeOverloadState");

	Params::UBP_HUD_ReloadBase_C_OnChangeOverloadState_Params Parms{};

	Parms.InbQuitState = InbQuitState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnInsufficientAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUD_ReloadBase_C::OnInsufficientAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnInsufficientAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbReloadSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InAmmoProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::OnReloadFinish(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnReloadFinish");

	Params::UBP_HUD_ReloadBase_C_OnReloadFinish_Params Parms{};

	Parms.InbReloadSuccess = InbReloadSuccess;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InAmmoProgress = InAmmoProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InAmmoProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbFirst                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_ReloadBase_C::OnUpdateAmmo(int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress, bool InbFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnUpdateAmmo");

	Params::UBP_HUD_ReloadBase_C_OnUpdateAmmo_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InAmmoProgress = InAmmoProgress;
	Parms.InbFirst = InbFirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbCharging                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InChargeMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InChargeProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::OnUpdateCharge(bool InbCharging, int32 InChargeMode, float InChargeProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnUpdateCharge");

	Params::UBP_HUD_ReloadBase_C_OnUpdateCharge_Params Parms{};

	Parms.InbCharging = InbCharging;
	Parms.InChargeMode = InChargeMode;
	Parms.InChargeProgress = InChargeProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::OnUpdateCoolDown(float InReloadProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnUpdateCoolDown");

	Params::UBP_HUD_ReloadBase_C_OnUpdateCoolDown_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InOverloadProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InOverloadWarningRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbOverloadState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_ReloadBase_C::OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnUpdateOverload");

	Params::UBP_HUD_ReloadBase_C_OnUpdateOverload_Params Parms{};

	Parms.InOverloadProgress = InOverloadProgress;
	Parms.InOverloadWarningRate = InOverloadWarningRate;
	Parms.InbOverloadState = InbOverloadState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::OnUpdateReload(float InReloadProgress, int32 InReloadAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnUpdateReload");

	Params::UBP_HUD_ReloadBase_C_OnUpdateReload_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbQuitState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReloadSpeedup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_ReloadBase_C::OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "OnChangeReloadState");

	Params::UBP_HUD_ReloadBase_C_OnChangeReloadState_Params Parms{};

	Parms.InbQuitState = InbQuitState;
	Parms.bReloadSpeedup = bReloadSpeedup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbQuitState                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bReloadSpeedup                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_InActiveCrosshair                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbQuitState_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InbReloadSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InReloadAmmo_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAmmoProgress_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAmmoProgress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbFirst                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InbCharging                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InChargeMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InChargeProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InReloadProgress_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InOverloadProgress                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InOverloadWarningRate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbOverloadState                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InReloadProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReloadAmmo                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_ReloadBase_C::ExecuteUbergraph_BP_HUD_ReloadBase(int32 EntryPoint, bool K2Node_Event_InbQuitState, bool K2Node_Event_bReloadSpeedup, class UUserWidget* K2Node_Event_InActiveCrosshair, bool K2Node_Event_InbQuitState_1, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo_1, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_2, float K2Node_Event_InAmmoProgress_1, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo_1, float K2Node_Event_InAmmoProgress, bool K2Node_Event_InbFirst, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, float K2Node_Event_InReloadProgress_1, float K2Node_Event_InOverloadProgress, float K2Node_Event_InOverloadWarningRate, bool K2Node_Event_InbOverloadState, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_ReloadBase_C", "ExecuteUbergraph_BP_HUD_ReloadBase");

	Params::UBP_HUD_ReloadBase_C_ExecuteUbergraph_BP_HUD_ReloadBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InbQuitState = K2Node_Event_InbQuitState;
	Parms.K2Node_Event_bReloadSpeedup = K2Node_Event_bReloadSpeedup;
	Parms.K2Node_Event_InActiveCrosshair = K2Node_Event_InActiveCrosshair;
	Parms.K2Node_Event_InbQuitState_1 = K2Node_Event_InbQuitState_1;
	Parms.K2Node_Event_InbReloadSuccess = K2Node_Event_InbReloadSuccess;
	Parms.K2Node_Event_InReloadAmmo_1 = K2Node_Event_InReloadAmmo_1;
	Parms.K2Node_Event_InReservedAmmo_1 = K2Node_Event_InReservedAmmo_1;
	Parms.K2Node_Event_InMaxAmmo_2 = K2Node_Event_InMaxAmmo_2;
	Parms.K2Node_Event_InAmmoProgress_1 = K2Node_Event_InAmmoProgress_1;
	Parms.K2Node_Event_InReservedAmmo = K2Node_Event_InReservedAmmo;
	Parms.K2Node_Event_InMaxAmmo_1 = K2Node_Event_InMaxAmmo_1;
	Parms.K2Node_Event_InAmmoProgress = K2Node_Event_InAmmoProgress;
	Parms.K2Node_Event_InbFirst = K2Node_Event_InbFirst;
	Parms.K2Node_Event_InbCharging = K2Node_Event_InbCharging;
	Parms.K2Node_Event_InChargeMode = K2Node_Event_InChargeMode;
	Parms.K2Node_Event_InChargeProgress = K2Node_Event_InChargeProgress;
	Parms.K2Node_Event_InReloadProgress_1 = K2Node_Event_InReloadProgress_1;
	Parms.K2Node_Event_InOverloadProgress = K2Node_Event_InOverloadProgress;
	Parms.K2Node_Event_InOverloadWarningRate = K2Node_Event_InOverloadWarningRate;
	Parms.K2Node_Event_InbOverloadState = K2Node_Event_InbOverloadState;
	Parms.K2Node_Event_InReloadProgress = K2Node_Event_InReloadProgress;
	Parms.K2Node_Event_InReloadAmmo = K2Node_Event_InReloadAmmo;
	Parms.K2Node_Event_InMaxAmmo = K2Node_Event_InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}

}


