#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ZombieTruck.GA_ZombieTruck_C
// (None)

class UClass* UGA_ZombieTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ZombieTruck_C");

	return Clss;
}


// GA_ZombieTruck_C GA_ZombieTruck.Default__GA_ZombieTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ZombieTruck_C* UGA_ZombieTruck_C::GetDefaultObj()
{
	static class UGA_ZombieTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ZombieTruck_C*>(UGA_ZombieTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ZombieTruck.GA_ZombieTruck_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ZombieTruck_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ZombieTruck_C", "K2_OnEndAbility");

	Params::UGA_ZombieTruck_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ZombieTruck.GA_ZombieTruck_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_ZombieTruck_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ZombieTruck_C", "K2_CommitExecute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ZombieTruck.GA_ZombieTruck_C.ExecuteUbergraph_GA_ZombieTruck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SolarVH_Tire_WL05_C*     K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SolarVH_Tire_WL05_C*     K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_ZombieTruck_C::ExecuteUbergraph_GA_ZombieTruck(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05, bool K2Node_DynamicCast_bSuccess, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05_1, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_IsDedicatedServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ZombieTruck_C", "ExecuteUbergraph_GA_ZombieTruck");

	Params::UGA_ZombieTruck_C_ExecuteUbergraph_GA_ZombieTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05 = K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05_1 = K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


