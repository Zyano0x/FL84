#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Status_Damaged.GC_Vehicle_Status_Damaged_C
// (None)

class UClass* UGC_Vehicle_Status_Damaged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Status_Damaged_C");

	return Clss;
}


// GC_Vehicle_Status_Damaged_C GC_Vehicle_Status_Damaged.Default__GC_Vehicle_Status_Damaged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_Vehicle_Status_Damaged_C* UGC_Vehicle_Status_Damaged_C::GetDefaultObj()
{
	static class UGC_Vehicle_Status_Damaged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_Vehicle_Status_Damaged_C*>(UGC_Vehicle_Status_Damaged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_Vehicle_Status_Damaged.GC_Vehicle_Status_Damaged_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WhileActive_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarVehiclePawn*           K2Node_DynamicCast_AsSolar_Vehicle_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGC_Vehicle_Status_Damaged_C::WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_WhileActive_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Vehicle_Status_Damaged_C", "WhileActive");

	Params::UGC_Vehicle_Status_Damaged_C_WhileActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_WhileActive_ReturnValue = CallFunc_WhileActive_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Vehicle_Pawn = K2Node_DynamicCast_AsSolar_Vehicle_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_Vehicle_Status_Damaged.GC_Vehicle_Status_Damaged_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnRemove_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASolarVehiclePawn*           K2Node_DynamicCast_AsSolar_Vehicle_Pawn                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGC_Vehicle_Status_Damaged_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnRemove_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_Vehicle_Status_Damaged_C", "OnRemove");

	Params::UGC_Vehicle_Status_Damaged_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_OnRemove_ReturnValue = CallFunc_OnRemove_ReturnValue;
	Parms.K2Node_DynamicCast_AsSolar_Vehicle_Pawn = K2Node_DynamicCast_AsSolar_Vehicle_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


