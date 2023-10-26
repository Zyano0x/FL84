#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BlindMark.ChaGCBP_BlindMark_C
// (Actor)

class UClass* AChaGCBP_BlindMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BlindMark_C");

	return Clss;
}


// ChaGCBP_BlindMark_C ChaGCBP_BlindMark.Default__ChaGCBP_BlindMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_BlindMark_C* AChaGCBP_BlindMark_C::GetDefaultObj()
{
	static class AChaGCBP_BlindMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_BlindMark_C*>(AChaGCBP_BlindMark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_BlindMark.ChaGCBP_BlindMark_C.OnRemoveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             NullableCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AChaGCBP_BlindMark_C::OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_BlindMark_C", "OnRemoveInternal");

	Params::AChaGCBP_BlindMark_C_OnRemoveInternal_Params Parms{};

	Parms.NullableCharacter = NullableCharacter;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_BlindMark.ChaGCBP_BlindMark_C.OnActiveInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters      NewLocalVar_0                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// class FString                      OtherEffectID                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TeammateEffectID                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetEffectContextFromCueParameters_ReturnValue           (None)
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDDispatcherBase*          CallFunc_GetHUDDispatcher_FromCharacter_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StartActorEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHUDNoticeParams            K2Node_MakeStruct_HUDNoticeParams                                (None)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_StartActorEffect_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AChaGCBP_BlindMark_C::OnActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, const struct FGameplayCueParameters& NewLocalVar_0, const class FString& OtherEffectID, const class FString& TeammateEffectID, const struct FGameplayEffectContextHandle& CallFunc_GetEffectContextFromCueParameters_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, bool CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue, class UHUDDispatcherBase* CallFunc_GetHUDDispatcher_FromCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_StartActorEffect_ReturnValue, bool Temp_bool_Variable, const struct FHUDNoticeParams& K2Node_MakeStruct_HUDNoticeParams, const class FString& K2Node_Select_Default, int32 CallFunc_StartActorEffect_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_BlindMark_C", "OnActiveInternal");

	Params::AChaGCBP_BlindMark_C_OnActiveInternal_Params Parms{};

	Parms.Character = Character;
	Parms.Parameters = Parameters;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.OtherEffectID = OtherEffectID;
	Parms.TeammateEffectID = TeammateEffectID;
	Parms.CallFunc_GetEffectContextFromCueParameters_ReturnValue = CallFunc_GetEffectContextFromCueParameters_ReturnValue;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue = CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue = CallFunc_IsTeammateWithLocalOrSpecTargetPlayer_ReturnValue;
	Parms.CallFunc_GetHUDDispatcher_FromCharacter_ReturnValue = CallFunc_GetHUDDispatcher_FromCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_StartActorEffect_ReturnValue = CallFunc_StartActorEffect_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_HUDNoticeParams = K2Node_MakeStruct_HUDNoticeParams;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_StartActorEffect_ReturnValue_1 = CallFunc_StartActorEffect_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


