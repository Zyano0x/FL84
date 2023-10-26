#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C
// (Actor)

class UClass* AChaGCBP_RapidBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_RapidBoost_C");

	return Clss;
}


// ChaGCBP_RapidBoost_C ChaGCBP_RapidBoost.Default__ChaGCBP_RapidBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_RapidBoost_C* AChaGCBP_RapidBoost_C::GetDefaultObj()
{
	static class AChaGCBP_RapidBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_RapidBoost_C*>(AChaGCBP_RapidBoost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.WhileActive_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_StartScreenEffect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_TimeRemaining   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_Duration        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerLocallyControlled_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StartActorEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChaGCBP_RapidBoost_C::WhileActive_Impl(int32 CallFunc_StartScreenEffect_ReturnValue, float CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_TimeRemaining, float CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_Duration, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "WhileActive_Impl");

	Params::AChaGCBP_RapidBoost_C_WhileActive_Impl_Params Parms{};

	Parms.CallFunc_StartScreenEffect_ReturnValue = CallFunc_StartScreenEffect_ReturnValue;
	Parms.CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_TimeRemaining = CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_TimeRemaining;
	Parms.CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_Duration = CallFunc_K2_GetEffectMaxTimeRemainingAndDuration_Duration;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsPlayerLocallyControlled_ReturnValue = CallFunc_IsPlayerLocallyControlled_ReturnValue;
	Parms.CallFunc_StartActorEffect_ReturnValue = CallFunc_StartActorEffect_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnActive_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_StartActorEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void AChaGCBP_RapidBoost_C::OnActive_Impl(int32 CallFunc_StartActorEffect_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "OnActive_Impl");

	Params::AChaGCBP_RapidBoost_C_OnActive_Impl_Params Parms{};

	Parms.CallFunc_StartActorEffect_ReturnValue = CallFunc_StartActorEffect_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnPlayEndSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_InvalidateTimerHandle_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChaGCBP_RapidBoost_C::OnPlayEndSound(class AActor* CallFunc_GetOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_InvalidateTimerHandle_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "OnPlayEndSound");

	Params::AChaGCBP_RapidBoost_C_OnPlayEndSound_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_InvalidateTimerHandle_ReturnValue = CallFunc_K2_InvalidateTimerHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.SpawnEmitter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPSCPoolMethod          PoolingMethod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAbsoluteRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UParticleSystemComponent* AChaGCBP_RapidBoost_C::SpawnEmitter(class UParticleSystem* EmitterTemplate, class USceneComponent* Mesh, class FName BoneName, enum class EPSCPoolMethod PoolingMethod, bool bAbsoluteRotation, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "SpawnEmitter");

	Params::AChaGCBP_RapidBoost_C_SpawnEmitter_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.Mesh = Mesh;
	Parms.BoneName = BoneName;
	Parms.PoolingMethod = PoolingMethod;
	Parms.bAbsoluteRotation = bAbsoluteRotation;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerLocallyControlled_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_RapidBoost_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "OnRemove");

	Params::AChaGCBP_RapidBoost_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPlayerLocallyControlled_ReturnValue = CallFunc_IsPlayerLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AChaGCBP_RapidBoost_C::K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "K2_HandleGameplayCue");

	Params::AChaGCBP_RapidBoost_C_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.ExecuteUbergraph_ChaGCBP_RapidBoost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_MyTarget                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_Event_EventType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_Event_Parameters                                          (ConstParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              CallFunc_GetFrameCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetFrameCount_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChaGCBP_RapidBoost_C::ExecuteUbergraph_ChaGCBP_RapidBoost(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_GetFrameCount_ReturnValue, int64 CallFunc_GetFrameCount_ReturnValue_1, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_RapidBoost_C", "ExecuteUbergraph_ChaGCBP_RapidBoost");

	Params::AChaGCBP_RapidBoost_C_ExecuteUbergraph_ChaGCBP_RapidBoost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyTarget = K2Node_Event_MyTarget;
	Parms.K2Node_Event_EventType = K2Node_Event_EventType;
	Parms.K2Node_Event_Parameters = K2Node_Event_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFrameCount_ReturnValue = CallFunc_GetFrameCount_ReturnValue;
	Parms.CallFunc_GetFrameCount_ReturnValue_1 = CallFunc_GetFrameCount_ReturnValue_1;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


