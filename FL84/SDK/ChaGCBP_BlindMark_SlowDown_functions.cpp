#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C
// (Actor)

class UClass* AChaGCBP_BlindMark_SlowDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BlindMark_SlowDown_C");

	return Clss;
}


// ChaGCBP_BlindMark_SlowDown_C ChaGCBP_BlindMark_SlowDown.Default__ChaGCBP_BlindMark_SlowDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_BlindMark_SlowDown_C* AChaGCBP_BlindMark_SlowDown_C::GetDefaultObj()
{
	static class AChaGCBP_BlindMark_SlowDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_BlindMark_SlowDown_C*>(AChaGCBP_BlindMark_SlowDown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C.OnRemoveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             NullableCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AChaGCBP_BlindMark_SlowDown_C::OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_BlindMark_SlowDown_C", "OnRemoveInternal");

	Params::AChaGCBP_BlindMark_SlowDown_C_OnRemoveInternal_Params Parms{};

	Parms.NullableCharacter = NullableCharacter;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C.WhileActiveInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetEffectContextFromCueParameters_ReturnValue           (None)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UParticleSystemComponent*>CallFunc_GetActorEffectPSComponents_ReturnValue                  (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_StartActorEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_BlindMark_SlowDown_C::WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContextFromCueParameters_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, int32 Temp_int_Array_Index_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, TArray<class UParticleSystemComponent*>& CallFunc_GetActorEffectPSComponents_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_BlindMark_SlowDown_C", "WhileActiveInternal");

	Params::AChaGCBP_BlindMark_SlowDown_C_WhileActiveInternal_Params Parms{};

	Parms.Character = Character;
	Parms.Parameters = Parameters;
	Parms.CallFunc_GetEffectContextFromCueParameters_ReturnValue = CallFunc_GetEffectContextFromCueParameters_ReturnValue;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue = CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_GetActorEffectPSComponents_ReturnValue = CallFunc_GetActorEffectPSComponents_ReturnValue;
	Parms.CallFunc_StartActorEffect_ReturnValue = CallFunc_StartActorEffect_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


