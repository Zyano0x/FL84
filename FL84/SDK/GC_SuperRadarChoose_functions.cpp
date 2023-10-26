#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_SuperRadarChoose.GC_SuperRadarChoose_C
// (Actor)

class UClass* AGC_SuperRadarChoose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_SuperRadarChoose_C");

	return Clss;
}


// GC_SuperRadarChoose_C GC_SuperRadarChoose.Default__GC_SuperRadarChoose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_SuperRadarChoose_C* AGC_SuperRadarChoose_C::GetDefaultObj()
{
	static class AGC_SuperRadarChoose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_SuperRadarChoose_C*>(AGC_SuperRadarChoose_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_SuperRadarChoose.GC_SuperRadarChoose_C.PlayPlayerEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_StartActorEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_StartActorEffect_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_SuperRadarChoose_C::PlayPlayerEffect(int32 CallFunc_StartActorEffect_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SuperRadarChoose_C", "PlayPlayerEffect");

	Params::AGC_SuperRadarChoose_C_PlayPlayerEffect_Params Parms{};

	Parms.CallFunc_StartActorEffect_ReturnValue = CallFunc_StartActorEffect_ReturnValue;
	Parms.CallFunc_StartActorEffect_ReturnValue_1 = CallFunc_StartActorEffect_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_SuperRadarChoose.GC_SuperRadarChoose_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGC_SuperRadarChoose_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SuperRadarChoose_C", "OnRemove");

	Params::AGC_SuperRadarChoose_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_SuperRadarChoose.GC_SuperRadarChoose_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_SuperRadarChoose_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_SuperRadarChoose_C", "OnActive");

	Params::AGC_SuperRadarChoose_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue_1 = CallFunc_PostEventAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


