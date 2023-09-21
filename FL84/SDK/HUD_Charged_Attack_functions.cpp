#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_Charged_Attack.HUD_Charged_Attack_C
// (None)

class UClass* UHUD_Charged_Attack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_Charged_Attack_C");

	return Clss;
}


// HUD_Charged_Attack_C HUD_Charged_Attack.Default__HUD_Charged_Attack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_Charged_Attack_C* UHUD_Charged_Attack_C::GetDefaultObj()
{
	static class UHUD_Charged_Attack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_Charged_Attack_C*>(UHUD_Charged_Attack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InChargeMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbFirstEnter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::SetPercent(float InPercent, int32 InChargeMode, bool InbFirstEnter, bool K2Node_SwitchInteger_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "SetPercent");

	Params::UHUD_Charged_Attack_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;
	Parms.InChargeMode = InChargeMode;
	Parms.InbFirstEnter = InbFirstEnter;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnActiveCrosshair
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 InActiveCrosshair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::OnActiveCrosshair(class UUserWidget* InActiveCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnActiveCrosshair");

	Params::UHUD_Charged_Attack_C_OnActiveCrosshair_Params Parms{};

	Parms.InActiveCrosshair = InActiveCrosshair;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeOverloadState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbQuitState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Charged_Attack_C::OnChangeOverloadState(bool InbQuitState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnChangeOverloadState");

	Params::UHUD_Charged_Attack_C_OnChangeOverloadState_Params Parms{};

	Parms.InbQuitState = InbQuitState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeReloadState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbQuitState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReloadSpeedup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Charged_Attack_C::OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnChangeReloadState");

	Params::UHUD_Charged_Attack_C_OnChangeReloadState_Params Parms{};

	Parms.InbQuitState = InbQuitState;
	Parms.bReloadSpeedup = bReloadSpeedup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnInsufficientAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_Charged_Attack_C::OnInsufficientAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnInsufficientAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnReloadFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbReloadSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InAmmoProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::OnReloadFinish(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnReloadFinish");

	Params::UHUD_Charged_Attack_C_OnReloadFinish_Params Parms{};

	Parms.InbReloadSuccess = InbReloadSuccess;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InAmmoProgress = InAmmoProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InAmmoProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbFirst                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Charged_Attack_C::OnUpdateAmmo(int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress, bool InbFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnUpdateAmmo");

	Params::UHUD_Charged_Attack_C_OnUpdateAmmo_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InAmmoProgress = InAmmoProgress;
	Parms.InbFirst = InbFirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCoolDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::OnUpdateCoolDown(float InReloadProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnUpdateCoolDown");

	Params::UHUD_Charged_Attack_C_OnUpdateCoolDown_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateOverload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InOverloadProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InOverloadWarningRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbOverloadState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Charged_Attack_C::OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnUpdateOverload");

	Params::UHUD_Charged_Attack_C_OnUpdateOverload_Params Parms{};

	Parms.InOverloadProgress = InOverloadProgress;
	Parms.InOverloadWarningRate = InOverloadWarningRate;
	Parms.InbOverloadState = InbOverloadState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateReload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::OnUpdateReload(float InReloadProgress, int32 InReloadAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnUpdateReload");

	Params::UHUD_Charged_Attack_C_OnUpdateReload_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCharge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbCharging                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InChargeMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InChargeProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::OnUpdateCharge(bool InbCharging, int32 InChargeMode, float InChargeProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "OnUpdateCharge");

	Params::UHUD_Charged_Attack_C_OnUpdateCharge_Params Parms{};

	Parms.InbCharging = InbCharging;
	Parms.InChargeMode = InChargeMode;
	Parms.InChargeProgress = InChargeProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Charged_Attack.HUD_Charged_Attack_C.ExecuteUbergraph_HUD_Charged_Attack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbReloadSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InReloadAmmo_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAmmoProgress_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAmmoProgress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbFirst                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InReloadProgress_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InOverloadProgress                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InOverloadWarningRate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbOverloadState                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InReloadProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReloadAmmo                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbCharging                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InChargeMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InChargeProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InbQuitState                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bReloadSpeedup                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InbQuitState_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_InActiveCrosshair                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Charged_Attack_C::ExecuteUbergraph_HUD_Charged_Attack(int32 EntryPoint, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo_1, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_2, float K2Node_Event_InAmmoProgress_1, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo_1, float K2Node_Event_InAmmoProgress, bool K2Node_Event_InbFirst, float K2Node_Event_InReloadProgress_1, float K2Node_Event_InOverloadProgress, float K2Node_Event_InOverloadWarningRate, bool K2Node_Event_InbOverloadState, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InMaxAmmo, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_Event_InbQuitState, bool K2Node_Event_bReloadSpeedup, bool K2Node_Event_InbQuitState_1, class UUserWidget* K2Node_Event_InActiveCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Charged_Attack_C", "ExecuteUbergraph_HUD_Charged_Attack");

	Params::UHUD_Charged_Attack_C_ExecuteUbergraph_HUD_Charged_Attack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InbReloadSuccess = K2Node_Event_InbReloadSuccess;
	Parms.K2Node_Event_InReloadAmmo_1 = K2Node_Event_InReloadAmmo_1;
	Parms.K2Node_Event_InReservedAmmo_1 = K2Node_Event_InReservedAmmo_1;
	Parms.K2Node_Event_InMaxAmmo_2 = K2Node_Event_InMaxAmmo_2;
	Parms.K2Node_Event_InAmmoProgress_1 = K2Node_Event_InAmmoProgress_1;
	Parms.K2Node_Event_InReservedAmmo = K2Node_Event_InReservedAmmo;
	Parms.K2Node_Event_InMaxAmmo_1 = K2Node_Event_InMaxAmmo_1;
	Parms.K2Node_Event_InAmmoProgress = K2Node_Event_InAmmoProgress;
	Parms.K2Node_Event_InbFirst = K2Node_Event_InbFirst;
	Parms.K2Node_Event_InReloadProgress_1 = K2Node_Event_InReloadProgress_1;
	Parms.K2Node_Event_InOverloadProgress = K2Node_Event_InOverloadProgress;
	Parms.K2Node_Event_InOverloadWarningRate = K2Node_Event_InOverloadWarningRate;
	Parms.K2Node_Event_InbOverloadState = K2Node_Event_InbOverloadState;
	Parms.K2Node_Event_InReloadProgress = K2Node_Event_InReloadProgress;
	Parms.K2Node_Event_InReloadAmmo = K2Node_Event_InReloadAmmo;
	Parms.K2Node_Event_InMaxAmmo = K2Node_Event_InMaxAmmo;
	Parms.K2Node_Event_InbCharging = K2Node_Event_InbCharging;
	Parms.K2Node_Event_InChargeMode = K2Node_Event_InChargeMode;
	Parms.K2Node_Event_InChargeProgress = K2Node_Event_InChargeProgress;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_InbQuitState = K2Node_Event_InbQuitState;
	Parms.K2Node_Event_bReloadSpeedup = K2Node_Event_bReloadSpeedup;
	Parms.K2Node_Event_InbQuitState_1 = K2Node_Event_InbQuitState_1;
	Parms.K2Node_Event_InActiveCrosshair = K2Node_Event_InActiveCrosshair;

	UObject::ProcessEvent(Func, &Parms);

}

}


