#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Ability_ZombieTruck.GC_Vehicle_Ability_ZombieTruck_C
// (None)

class UClass* UGC_Vehicle_Ability_ZombieTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Ability_ZombieTruck_C");

	return Clss;
}


// GC_Vehicle_Ability_ZombieTruck_C GC_Vehicle_Ability_ZombieTruck.Default__GC_Vehicle_Ability_ZombieTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Vehicle_Ability_ZombieTruck_C* UGC_Vehicle_Ability_ZombieTruck_C::GetDefaultObj()
{
	static class UGC_Vehicle_Ability_ZombieTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Vehicle_Ability_ZombieTruck_C*>(UGC_Vehicle_Ability_ZombieTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Vehicle_Ability_ZombieTruck.GC_Vehicle_Ability_ZombieTruck_C.OnRemove
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_SolarVH_Tire_WL05_C*     K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnRemove_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

bool UGC_Vehicle_Ability_ZombieTruck_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnRemove_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Vehicle_Ability_ZombieTruck_C", "OnRemove");

	Params::UGC_Vehicle_Ability_ZombieTruck_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05 = K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnRemove_ReturnValue = CallFunc_OnRemove_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Vehicle_Ability_ZombieTruck.GC_Vehicle_Ability_ZombieTruck_C.WhileActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_SolarVH_Tire_WL05_C*     K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WhileActive_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

bool UGC_Vehicle_Ability_ZombieTruck_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WhileActive_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Vehicle_Ability_ZombieTruck_C", "WhileActive");

	Params::UGC_Vehicle_Ability_ZombieTruck_C_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05 = K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WhileActive_ReturnValue = CallFunc_WhileActive_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


