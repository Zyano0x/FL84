#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Freeze.GC_Freeze_C
// (Actor)

class UClass* AGC_Freeze_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Freeze_C");

	return Clss;
}


// GC_Freeze_C GC_Freeze.Default__GC_Freeze_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Freeze_C* AGC_Freeze_C::GetDefaultObj()
{
	static class AGC_Freeze_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Freeze_C*>(AGC_Freeze_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Freeze.GC_Freeze_C.RemoveFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UActorMaterialSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveMaterialChange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AGC_Freeze_C::RemoveFunc(class AActor* Actor, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UActorMaterialSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_RemoveMaterialChange_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "RemoveFunc");

	Params::AGC_Freeze_C_RemoveFunc_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_RemoveMaterialChange_ReturnValue = CallFunc_RemoveMaterialChange_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Freeze.GC_Freeze_C.ActiveFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TartgetActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetActor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAddMaterialChangeParams    K2Node_MakeStruct_AddMaterialChangeParams                        (None)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UActorMaterialSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialChangeHandle       CallFunc_K2_AddMaterialChange_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ContainsMaterialChange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AGC_Freeze_C::ActiveFunc(class AActor* TartgetActor, class AActor* TargetActor, const struct FAddMaterialChangeParams& K2Node_MakeStruct_AddMaterialChangeParams, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UActorMaterialSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FMaterialChangeHandle& CallFunc_K2_AddMaterialChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ContainsMaterialChange_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "ActiveFunc");

	Params::AGC_Freeze_C_ActiveFunc_Params Parms{};

	Parms.TartgetActor = TartgetActor;
	Parms.TargetActor = TargetActor;
	Parms.K2Node_MakeStruct_AddMaterialChangeParams = K2Node_MakeStruct_AddMaterialChangeParams;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_K2_AddMaterialChange_ReturnValue = CallFunc_K2_AddMaterialChange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ContainsMaterialChange_ReturnValue = CallFunc_ContainsMaterialChange_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Freeze.GC_Freeze_C.Is Teammate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Actor1                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor2                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsTeammate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsTeammate                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarVehiclePawn*           K2Node_DynamicCast_AsSolar_Vehicle_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeammateWith_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeammateWith_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGC_Freeze_C::Is_Teammate(class ASolarCharacter* Actor1, class AActor* Actor2, bool* IsTeammate, bool bIsTeammate, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTeammateWith_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTeammateWith_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "Is Teammate");

	Params::AGC_Freeze_C_Is_Teammate_Params Parms{};

	Parms.Actor1 = Actor1;
	Parms.Actor2 = Actor2;
	Parms.bIsTeammate = bIsTeammate;
	Parms.K2Node_DynamicCast_AsSolar_Vehicle_Pawn = K2Node_DynamicCast_AsSolar_Vehicle_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTeammateWith_ReturnValue = CallFunc_IsTeammateWith_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsTeammateWith_ReturnValue_1 = CallFunc_IsTeammateWith_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTeammate != nullptr)
		*IsTeammate = Parms.IsTeammate;

}


// Function GC_Freeze.GC_Freeze_C.PlaySoundEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPlay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_PlaySoundbyname_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PlaySoundbyname_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class ASolarCharacter*             CallFunc__C_GetLocalCharacter_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Teammate_IsTeammate                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGC_Freeze_C::PlaySoundEvent(class AActor* TargetActor, bool bPlay, const class FString& CallFunc_Replace_ReturnValue, int32 CallFunc_PlaySoundbyname_ReturnValue, int32 CallFunc_PlaySoundbyname_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ASolarCharacter* CallFunc__C_GetLocalCharacter_ReturnValue, bool CallFunc_Is_Teammate_IsTeammate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "PlaySoundEvent");

	Params::AGC_Freeze_C_PlaySoundEvent_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.bPlay = bPlay;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_PlaySoundbyname_ReturnValue = CallFunc_PlaySoundbyname_ReturnValue;
	Parms.CallFunc_PlaySoundbyname_ReturnValue_1 = CallFunc_PlaySoundbyname_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc__C_GetLocalCharacter_ReturnValue = CallFunc__C_GetLocalCharacter_ReturnValue;
	Parms.CallFunc_Is_Teammate_IsTeammate = CallFunc_Is_Teammate_IsTeammate;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Freeze.GC_Freeze_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGC_Freeze_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GC_Freeze.GC_Freeze_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Freeze_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "ReceiveEndPlay");

	Params::AGC_Freeze_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_Freeze.GC_Freeze_C.ExecuteUbergraph_GC_Freeze
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Freeze_C::ExecuteUbergraph_GC_Freeze(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Freeze_C", "ExecuteUbergraph_GC_Freeze");

	Params::AGC_Freeze_C_ExecuteUbergraph_GC_Freeze_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


