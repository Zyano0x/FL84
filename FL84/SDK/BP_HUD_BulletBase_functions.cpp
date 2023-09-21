#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_HUD_BulletBase.BP_HUD_BulletBase_C
// (None)

class UClass* UBP_HUD_BulletBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HUD_BulletBase_C");

	return Clss;
}


// BP_HUD_BulletBase_C BP_HUD_BulletBase.Default__BP_HUD_BulletBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HUD_BulletBase_C* UBP_HUD_BulletBase_C::GetDefaultObj()
{
	static class UBP_HUD_BulletBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HUD_BulletBase_C*>(UBP_HUD_BulletBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetReloadBulletAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            OutReloadAniamtion                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::GetReloadBulletAnimation(class UWidgetAnimation** OutReloadAniamtion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "GetReloadBulletAnimation");

	Params::UBP_HUD_BulletBase_C_GetReloadBulletAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutReloadAniamtion != nullptr)
		*OutReloadAniamtion = Parms.OutReloadAniamtion;

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayReloadBulletAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            CallFunc_GetReloadBulletAnimation_OutReloadAniamtion             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::PlayReloadBulletAnimation(class UWidgetAnimation* CallFunc_GetReloadBulletAnimation_OutReloadAniamtion, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "PlayReloadBulletAnimation");

	Params::UBP_HUD_BulletBase_C_PlayReloadBulletAnimation_Params Parms{};

	Parms.CallFunc_GetReloadBulletAnimation_OutReloadAniamtion = CallFunc_GetReloadBulletAnimation_OutReloadAniamtion;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbVisilble                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_BulletBase_C::SetBulletVisible(bool InbVisilble)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "SetBulletVisible");

	Params::UBP_HUD_BulletBase_C_SetBulletVisible_Params Parms{};

	Parms.InbVisilble = InbVisilble;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ReloadFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::ReloadFinish(int32 InReservedAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "ReloadFinish");

	Params::UBP_HUD_BulletBase_C_ReloadFinish_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletLightEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::SetBulletLightEffect(float InProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "SetBulletLightEffect");

	Params::UBP_HUD_BulletBase_C_SetBulletLightEffect_Params Parms{};

	Parms.InProgress = InProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetBulletGaugeWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                 OutBulletGaugeWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::GetBulletGaugeWidget(class UUserWidget** OutBulletGaugeWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "GetBulletGaugeWidget");

	Params::UBP_HUD_BulletBase_C_GetBulletGaugeWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutBulletGaugeWidget != nullptr)
		*OutBulletGaugeWidget = Parms.OutBulletGaugeWidget;

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.UpdateBulletGaugeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InBulletGaugeProgress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetBulletGaugeWidget_OutBulletGaugeWidget               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGaugeImage*                 K2Node_DynamicCast_AsGauge_Image                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_BulletBase_C::UpdateBulletGaugeProgress(float InBulletGaugeProgress, class UUserWidget* CallFunc_GetBulletGaugeWidget_OutBulletGaugeWidget, class UGaugeImage* K2Node_DynamicCast_AsGauge_Image, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "UpdateBulletGaugeProgress");

	Params::UBP_HUD_BulletBase_C_UpdateBulletGaugeProgress_Params Parms{};

	Parms.InBulletGaugeProgress = InBulletGaugeProgress;
	Parms.CallFunc_GetBulletGaugeWidget_OutBulletGaugeWidget = CallFunc_GetBulletGaugeWidget_OutBulletGaugeWidget;
	Parms.K2Node_DynamicCast_AsGauge_Image = K2Node_DynamicCast_AsGauge_Image;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetUpdateBulletStateAnimation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*            OutUpdateBulletStateAnimation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::GetUpdateBulletStateAnimation(class UWidgetAnimation** OutUpdateBulletStateAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "GetUpdateBulletStateAnimation");

	Params::UBP_HUD_BulletBase_C_GetUpdateBulletStateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutUpdateBulletStateAnimation != nullptr)
		*OutUpdateBulletStateAnimation = Parms.OutUpdateBulletStateAnimation;

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayUpdateBulletStateAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbReload                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            CallFunc_GetUpdateBulletStateAnimation_OutUpdateBulletStateAnimation(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::PlayUpdateBulletStateAnimation(bool InbReload, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, class UWidgetAnimation* CallFunc_GetUpdateBulletStateAnimation_OutUpdateBulletStateAnimation, bool CallFunc_IsValid_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "PlayUpdateBulletStateAnimation");

	Params::UBP_HUD_BulletBase_C_PlayUpdateBulletStateAnimation_Params Parms{};

	Parms.InbReload = InbReload;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUpdateBulletStateAnimation_OutUpdateBulletStateAnimation = CallFunc_GetUpdateBulletStateAnimation_OutUpdateBulletStateAnimation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnActiveCrosshair
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 InActiveCrosshair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::OnActiveCrosshair(class UUserWidget* InActiveCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnActiveCrosshair");

	Params::UBP_HUD_BulletBase_C_OnActiveCrosshair_Params Parms{};

	Parms.InActiveCrosshair = InActiveCrosshair;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeOverloadState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbQuitState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_BulletBase_C::OnChangeOverloadState(bool InbQuitState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnChangeOverloadState");

	Params::UBP_HUD_BulletBase_C_OnChangeOverloadState_Params Parms{};

	Parms.InbQuitState = InbQuitState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeReloadState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbQuitState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bReloadSpeedup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_BulletBase_C::OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnChangeReloadState");

	Params::UBP_HUD_BulletBase_C_OnChangeReloadState_Params Parms{};

	Parms.InbQuitState = InbQuitState;
	Parms.bReloadSpeedup = bReloadSpeedup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnInsufficientAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_HUD_BulletBase_C::OnInsufficientAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnInsufficientAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCharge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbCharging                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InChargeMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InChargeProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::OnUpdateCharge(bool InbCharging, int32 InChargeMode, float InChargeProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnUpdateCharge");

	Params::UBP_HUD_BulletBase_C_OnUpdateCharge_Params Parms{};

	Parms.InbCharging = InbCharging;
	Parms.InChargeMode = InChargeMode;
	Parms.InChargeProgress = InChargeProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCoolDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::OnUpdateCoolDown(float InReloadProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnUpdateCoolDown");

	Params::UBP_HUD_BulletBase_C_OnUpdateCoolDown_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateOverload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InOverloadProgress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InOverloadWarningRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbOverloadState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_BulletBase_C::OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnUpdateOverload");

	Params::UBP_HUD_BulletBase_C_OnUpdateOverload_Params Parms{};

	Parms.InOverloadProgress = InOverloadProgress;
	Parms.InOverloadWarningRate = InOverloadWarningRate;
	Parms.InbOverloadState = InbOverloadState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateAmmo
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InAmmoProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbFirst                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_HUD_BulletBase_C::OnUpdateAmmo(int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress, bool InbFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnUpdateAmmo");

	Params::UBP_HUD_BulletBase_C_OnUpdateAmmo_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InAmmoProgress = InAmmoProgress;
	Parms.InbFirst = InbFirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateReload
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::OnUpdateReload(float InReloadProgress, int32 InReloadAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnUpdateReload");

	Params::UBP_HUD_BulletBase_C_OnUpdateReload_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnReloadFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InbReloadSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InAmmoProgress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::OnReloadFinish(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo, float InAmmoProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "OnReloadFinish");

	Params::UBP_HUD_BulletBase_C_OnReloadFinish_Params Parms{};

	Parms.InbReloadSuccess = InbReloadSuccess;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InAmmoProgress = InAmmoProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ExecuteUbergraph_BP_HUD_BulletBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbCharging                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InChargeMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InChargeProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InReloadProgress_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InOverloadProgress                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InOverloadWarningRate                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbOverloadState                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InReservedAmmo_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAmmoProgress_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbFirst                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InbQuitState                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bReloadSpeedup                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InReloadProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReloadAmmo_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbQuitState_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_InbReloadSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InReloadAmmo                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InAmmoProgress                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_InActiveCrosshair                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_HUD_BulletBase_C::ExecuteUbergraph_BP_HUD_BulletBase(int32 EntryPoint, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, float K2Node_Event_InReloadProgress_1, float K2Node_Event_InOverloadProgress, float K2Node_Event_InOverloadWarningRate, bool K2Node_Event_InbOverloadState, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_2, float K2Node_Event_InAmmoProgress_1, bool K2Node_Event_InbFirst, bool K2Node_Event_InbQuitState, bool K2Node_Event_bReloadSpeedup, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReloadAmmo_1, int32 K2Node_Event_InMaxAmmo_1, bool K2Node_Event_InbQuitState_1, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo, float K2Node_Event_InAmmoProgress, class UUserWidget* K2Node_Event_InActiveCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HUD_BulletBase_C", "ExecuteUbergraph_BP_HUD_BulletBase");

	Params::UBP_HUD_BulletBase_C_ExecuteUbergraph_BP_HUD_BulletBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InbCharging = K2Node_Event_InbCharging;
	Parms.K2Node_Event_InChargeMode = K2Node_Event_InChargeMode;
	Parms.K2Node_Event_InChargeProgress = K2Node_Event_InChargeProgress;
	Parms.K2Node_Event_InReloadProgress_1 = K2Node_Event_InReloadProgress_1;
	Parms.K2Node_Event_InOverloadProgress = K2Node_Event_InOverloadProgress;
	Parms.K2Node_Event_InOverloadWarningRate = K2Node_Event_InOverloadWarningRate;
	Parms.K2Node_Event_InbOverloadState = K2Node_Event_InbOverloadState;
	Parms.K2Node_Event_InReservedAmmo_1 = K2Node_Event_InReservedAmmo_1;
	Parms.K2Node_Event_InMaxAmmo_2 = K2Node_Event_InMaxAmmo_2;
	Parms.K2Node_Event_InAmmoProgress_1 = K2Node_Event_InAmmoProgress_1;
	Parms.K2Node_Event_InbFirst = K2Node_Event_InbFirst;
	Parms.K2Node_Event_InbQuitState = K2Node_Event_InbQuitState;
	Parms.K2Node_Event_bReloadSpeedup = K2Node_Event_bReloadSpeedup;
	Parms.K2Node_Event_InReloadProgress = K2Node_Event_InReloadProgress;
	Parms.K2Node_Event_InReloadAmmo_1 = K2Node_Event_InReloadAmmo_1;
	Parms.K2Node_Event_InMaxAmmo_1 = K2Node_Event_InMaxAmmo_1;
	Parms.K2Node_Event_InbQuitState_1 = K2Node_Event_InbQuitState_1;
	Parms.K2Node_Event_InbReloadSuccess = K2Node_Event_InbReloadSuccess;
	Parms.K2Node_Event_InReloadAmmo = K2Node_Event_InReloadAmmo;
	Parms.K2Node_Event_InReservedAmmo = K2Node_Event_InReservedAmmo;
	Parms.K2Node_Event_InMaxAmmo = K2Node_Event_InMaxAmmo;
	Parms.K2Node_Event_InAmmoProgress = K2Node_Event_InAmmoProgress;
	Parms.K2Node_Event_InActiveCrosshair = K2Node_Event_InActiveCrosshair;

	UObject::ProcessEvent(Func, &Parms);

}

}


