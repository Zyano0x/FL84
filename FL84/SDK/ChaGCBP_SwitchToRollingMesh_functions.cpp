#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C
// (Actor)

class UClass* AChaGCBP_SwitchToRollingMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SwitchToRollingMesh_C");

	return Clss;
}


// ChaGCBP_SwitchToRollingMesh_C ChaGCBP_SwitchToRollingMesh.Default__ChaGCBP_SwitchToRollingMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SwitchToRollingMesh_C* AChaGCBP_SwitchToRollingMesh_C::GetDefaultObj()
{
	static class AChaGCBP_SwitchToRollingMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SwitchToRollingMesh_C*>(AChaGCBP_SwitchToRollingMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStopAirLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::TryStopAirLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "TryStopAirLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStopRollingLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::TryStopRollingLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "TryStopRollingLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStartAirLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::TryStartAirLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "TryStartAirLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStartRollingLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::TryStartRollingLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "TryStartRollingLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.StopLoopSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::StopLoopSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "StopLoopSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.UpdateRollingSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USolarAkGameObject*          AkGameObject                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASolarCharacterBase*         K2Node_DynamicCast_AsSolar_Character_Base                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USolarAkGameObject*          CallFunc_GetSolarAkGameObject_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_SwitchToRollingMesh_C::UpdateRollingSound(class USolarAkGameObject* AkGameObject, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ASolarCharacterBase* K2Node_DynamicCast_AsSolar_Character_Base, bool K2Node_DynamicCast_bSuccess, class USolarAkGameObject* CallFunc_GetSolarAkGameObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "UpdateRollingSound");

	Params::AChaGCBP_SwitchToRollingMesh_C_UpdateRollingSound_Params Parms{};

	Parms.AkGameObject = AkGameObject;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMaxSpeed_ReturnValue = CallFunc_GetMaxSpeed_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Character_Base = K2Node_DynamicCast_AsSolar_Character_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSolarAkGameObject_ReturnValue = CallFunc_GetSolarAkGameObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.UpdateParticleParamsBySpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_SwitchToRollingMesh_C::UpdateParticleParamsBySpeed(float Speed, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "UpdateParticleParamsBySpeed");

	Params::AChaGCBP_SwitchToRollingMesh_C_UpdateParticleParamsBySpeed_Params Parms{};

	Parms.Speed = Speed;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue_1 = CallFunc_GetFloatValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.OnRemoveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             NullableCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_SwitchToRollingMesh_C::OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "OnRemoveInternal");

	Params::AChaGCBP_SwitchToRollingMesh_C_OnRemoveInternal_Params Parms{};

	Parms.NullableCharacter = NullableCharacter;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.WhileActiveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UB_DuckRollingMeshComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AChaGCBP_SwitchToRollingMesh_C::WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UB_DuckRollingMeshComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "WhileActiveInternal");

	Params::AChaGCBP_SwitchToRollingMesh_C_WhileActiveInternal_Params Parms{};

	Parms.Character = Character;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.OnActiveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActiveInternal_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_SwitchToRollingMesh_C::OnActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActiveInternal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "OnActiveInternal");

	Params::AChaGCBP_SwitchToRollingMesh_C_OnActiveInternal_Params Parms{};

	Parms.Character = Character;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnActiveInternal_ReturnValue = CallFunc_OnActiveInternal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_SwitchToRollingMesh_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "ReceiveTick");

	Params::AChaGCBP_SwitchToRollingMesh_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_SwitchToRollingMesh_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "ReceiveEndPlay");

	Params::AChaGCBP_SwitchToRollingMesh_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AChaGCBP_SwitchToRollingMesh_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSizeXY_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AChaGCBP_SwitchToRollingMesh_C::ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_VSizeXY_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SwitchToRollingMesh_C", "ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh");

	Params::AChaGCBP_SwitchToRollingMesh_C_ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


