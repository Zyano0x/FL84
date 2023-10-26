#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Skill_DuckRolling.GC_Skill_DuckRolling_C
// (None)

class UClass* UGC_Skill_DuckRolling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Skill_DuckRolling_C");

	return Clss;
}


// GC_Skill_DuckRolling_C GC_Skill_DuckRolling.Default__GC_Skill_DuckRolling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Skill_DuckRolling_C* UGC_Skill_DuckRolling_C::GetDefaultObj()
{
	static class UGC_Skill_DuckRolling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Skill_DuckRolling_C*>(UGC_Skill_DuckRolling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Skill_DuckRolling.GC_Skill_DuckRolling_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGC_Skill_DuckRolling_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_OnActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Skill_DuckRolling_C", "OnActive");

	Params::UGC_Skill_DuckRolling_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_OnActive_ReturnValue = CallFunc_OnActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


