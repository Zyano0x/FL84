#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C
// (Actor)

class UClass* AChaGCBP_SkydiveFly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SkydiveFly_C");

	return Clss;
}


// ChaGCBP_SkydiveFly_C ChaGCBP_SkydiveFly.Default__ChaGCBP_SkydiveFly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SkydiveFly_C* AChaGCBP_SkydiveFly_C::GetDefaultObj()
{
	static class AChaGCBP_SkydiveFly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SkydiveFly_C*>(AChaGCBP_SkydiveFly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C.ShowEncircleParticle
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsLocalTeam                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsDefender                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLowLevelGraphicsQuality_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_SkydiveFly_C::ShowEncircleParticle(bool bIsLocalTeam, bool bIsDefender, bool Temp_bool_Variable, bool CallFunc_IsLowLevelGraphicsQuality_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UParticleSystem* K2Node_Select_Default, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SkydiveFly_C", "ShowEncircleParticle");

	Params::AChaGCBP_SkydiveFly_C_ShowEncircleParticle_Params Parms{};

	Parms.bIsLocalTeam = bIsLocalTeam;
	Parms.bIsDefender = bIsDefender;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsLowLevelGraphicsQuality_ReturnValue = CallFunc_IsLowLevelGraphicsQuality_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C.OnRemoveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             NullableCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnRemoveInternal_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_SkydiveFly_C::OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters, bool CallFunc_OnRemoveInternal_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SkydiveFly_C", "OnRemoveInternal");

	Params::AChaGCBP_SkydiveFly_C_OnRemoveInternal_Params Parms{};

	Parms.NullableCharacter = NullableCharacter;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnRemoveInternal_ReturnValue = CallFunc_OnRemoveInternal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C.WhileActiveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WhileActiveInternal_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_SkydiveFly_C::WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_WhileActiveInternal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_SkydiveFly_C", "WhileActiveInternal");

	Params::AChaGCBP_SkydiveFly_C_WhileActiveInternal_Params Parms{};

	Parms.Character = Character;
	Parms.Parameters = Parameters;
	Parms.CallFunc_WhileActiveInternal_ReturnValue = CallFunc_WhileActiveInternal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


