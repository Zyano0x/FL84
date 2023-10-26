#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C
// (Actor, Pawn)

class UClass* ABP_SolarVH_Tire_WL05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarVH_Tire_WL05_C");

	return Clss;
}


// BP_SolarVH_Tire_WL05_C BP_SolarVH_Tire_WL05.Default__BP_SolarVH_Tire_WL05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SolarVH_Tire_WL05_C* ABP_SolarVH_Tire_WL05_C::GetDefaultObj()
{
	static class ABP_SolarVH_Tire_WL05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SolarVH_Tire_WL05_C*>(ABP_SolarVH_Tire_WL05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SolarVH_Tire_WL05_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarVH_Tire_WL05_C", "ReceiveTick");

	Params::ABP_SolarVH_Tire_WL05_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C.ExecuteUbergraph_BP_SolarVH_Tire_WL05
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVehicleBroken_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealthPercentInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABP_SolarVH_Tire_WL05_C::ExecuteUbergraph_BP_SolarVH_Tire_WL05(int32 EntryPoint, bool CallFunc_IsVehicleBroken_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_DeltaSeconds, int32 CallFunc_GetHealthPercentInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarVH_Tire_WL05_C", "ExecuteUbergraph_BP_SolarVH_Tire_WL05");

	Params::ABP_SolarVH_Tire_WL05_C_ExecuteUbergraph_BP_SolarVH_Tire_WL05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVehicleBroken_ReturnValue = CallFunc_IsVehicleBroken_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetHealthPercentInt_ReturnValue = CallFunc_GetHealthPercentInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


