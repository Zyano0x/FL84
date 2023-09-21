#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuickSummon_FootDown.BP_QuickSummon_FootDown_C
// (None)

class UClass* UBP_QuickSummon_FootDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuickSummon_FootDown_C");

	return Clss;
}


// BP_QuickSummon_FootDown_C BP_QuickSummon_FootDown.Default__BP_QuickSummon_FootDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_QuickSummon_FootDown_C* UBP_QuickSummon_FootDown_C::GetDefaultObj()
{
	static class UBP_QuickSummon_FootDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_QuickSummon_FootDown_C*>(UBP_QuickSummon_FootDown_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuickSummon_FootDown.BP_QuickSummon_FootDown_C.TryGetSummonHitResult
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  OutHitResult                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      InSummoner                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USolarSummonDetectionConfig* InSummonConfig                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_CanSummonFootDown_OutHitResult                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_CanSummonFootDown_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_QuickSummon_FootDown_C::TryGetSummonHitResult(struct FHitResult* OutHitResult, class AActor* InSummoner, class USolarSummonDetectionConfig* InSummonConfig, const struct FHitResult& CallFunc_CanSummonFootDown_OutHitResult, bool CallFunc_CanSummonFootDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuickSummon_FootDown_C", "TryGetSummonHitResult");

	Params::UBP_QuickSummon_FootDown_C_TryGetSummonHitResult_Params Parms{};

	Parms.InSummoner = InSummoner;
	Parms.InSummonConfig = InSummonConfig;
	Parms.CallFunc_CanSummonFootDown_OutHitResult = CallFunc_CanSummonFootDown_OutHitResult;
	Parms.CallFunc_CanSummonFootDown_ReturnValue = CallFunc_CanSummonFootDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHitResult != nullptr)
		*OutHitResult = std::move(Parms.OutHitResult);

	return Parms.ReturnValue;

}

}


