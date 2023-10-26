#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Status_Broken.GC_Vehicle_Status_Broken_C
// (None)

class UClass* UGC_Vehicle_Status_Broken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Status_Broken_C");

	return Clss;
}


// GC_Vehicle_Status_Broken_C GC_Vehicle_Status_Broken.Default__GC_Vehicle_Status_Broken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Vehicle_Status_Broken_C* UGC_Vehicle_Status_Broken_C::GetDefaultObj()
{
	static class UGC_Vehicle_Status_Broken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Vehicle_Status_Broken_C*>(UGC_Vehicle_Status_Broken_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Vehicle_Status_Broken.GC_Vehicle_Status_Broken_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarVehiclePawn*           K2Node_DynamicCast_AsSolar_Vehicle_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGC_Vehicle_Status_Broken_C::OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Vehicle_Status_Broken_C", "OnActive");

	Params::UGC_Vehicle_Status_Broken_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnActive_ReturnValue = CallFunc_OnActive_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Vehicle_Pawn = K2Node_DynamicCast_AsSolar_Vehicle_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Vehicle_Status_Broken.GC_Vehicle_Status_Broken_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WhileActive_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarVehiclePawn*           K2Node_DynamicCast_AsSolar_Vehicle_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGC_Vehicle_Status_Broken_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_WhileActive_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Vehicle_Status_Broken_C", "WhileActive");

	Params::UGC_Vehicle_Status_Broken_C_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_WhileActive_ReturnValue = CallFunc_WhileActive_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Vehicle_Pawn = K2Node_DynamicCast_AsSolar_Vehicle_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


