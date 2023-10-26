#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_UnlimitedAmmo.GC_UnlimitedAmmo_C
// (Actor)

class UClass* AGC_UnlimitedAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_UnlimitedAmmo_C");

	return Clss;
}


// GC_UnlimitedAmmo_C GC_UnlimitedAmmo.Default__GC_UnlimitedAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_UnlimitedAmmo_C* AGC_UnlimitedAmmo_C::GetDefaultObj()
{
	static class AGC_UnlimitedAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_UnlimitedAmmo_C*>(AGC_UnlimitedAmmo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_UnlimitedAmmo.GC_UnlimitedAmmo_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InSameTeamWithFirstPlayerController_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)

bool AGC_UnlimitedAmmo_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const class FString& Temp_string_Variable, bool CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_UnlimitedAmmo_C", "OnRemove");

	Params::AGC_UnlimitedAmmo_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue = CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue;
	Parms.CallFunc_InSameTeamWithFirstPlayerController_ReturnValue = CallFunc_InSameTeamWithFirstPlayerController_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_UnlimitedAmmo.GC_UnlimitedAmmo_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_StartActorEffect_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerLocallyControlled_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InSameTeamWithFirstPlayerController_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_StartScreenEffect_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)

bool AGC_UnlimitedAmmo_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const class FString& Temp_string_Variable, int32 CallFunc_StartActorEffect_ReturnValue, bool CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 CallFunc_StartScreenEffect_ReturnValue, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_UnlimitedAmmo_C", "OnActive");

	Params::AGC_UnlimitedAmmo_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_StartActorEffect_ReturnValue = CallFunc_StartActorEffect_ReturnValue;
	Parms.CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue = CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue;
	Parms.CallFunc_IsPlayerLocallyControlled_ReturnValue = CallFunc_IsPlayerLocallyControlled_ReturnValue;
	Parms.CallFunc_InSameTeamWithFirstPlayerController_ReturnValue = CallFunc_InSameTeamWithFirstPlayerController_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_StartScreenEffect_ReturnValue = CallFunc_StartScreenEffect_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


