#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_MassInvisibilityRange.ChaGCBP_MassInvisibilityRange_C
// (None)

class UClass* UChaGCBP_MassInvisibilityRange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_MassInvisibilityRange_C");

	return Clss;
}


// ChaGCBP_MassInvisibilityRange_C ChaGCBP_MassInvisibilityRange.Default__ChaGCBP_MassInvisibilityRange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGCBP_MassInvisibilityRange_C* UChaGCBP_MassInvisibilityRange_C::GetDefaultObj()
{
	static class UChaGCBP_MassInvisibilityRange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGCBP_MassInvisibilityRange_C*>(UChaGCBP_MassInvisibilityRange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_MassInvisibilityRange.ChaGCBP_MassInvisibilityRange_C.OnExecute
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ASolarCharacter*             K2Node_DynamicCast_AsSolar_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCharacterLocation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InSameTeamWithFirstPlayerController_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UChaGCBP_MassInvisibilityRange_C::OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCharacterLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_MassInvisibilityRange_C", "OnExecute");

	Params::UChaGCBP_MassInvisibilityRange_C_OnExecute_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsSolar_Character = K2Node_DynamicCast_AsSolar_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCharacterLocation_ReturnValue = CallFunc_GetCharacterLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_InSameTeamWithFirstPlayerController_ReturnValue = CallFunc_InSameTeamWithFirstPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


