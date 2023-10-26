#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_HighAlert.ChaGCBP_HighAlert_C
// (Actor)

class UClass* AChaGCBP_HighAlert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_HighAlert_C");

	return Clss;
}


// ChaGCBP_HighAlert_C ChaGCBP_HighAlert.Default__ChaGCBP_HighAlert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_HighAlert_C* AChaGCBP_HighAlert_C::GetDefaultObj()
{
	static class AChaGCBP_HighAlert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_HighAlert_C*>(AChaGCBP_HighAlert_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ReceiveAlertEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAlertDirection         InDirection                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_HighAlert_C::ReceiveAlertEvent(enum class EAlertDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_HighAlert_C", "ReceiveAlertEvent");

	Params::AChaGCBP_HighAlert_C_ReceiveAlertEvent_Params Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ExecuteUbergraph_ChaGCBP_HighAlert
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertDirection         K2Node_Event_InDirection                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AChaGCBP_HighAlert_C::ExecuteUbergraph_ChaGCBP_HighAlert(int32 EntryPoint, enum class EAlertDirection K2Node_Event_InDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_HighAlert_C", "ExecuteUbergraph_ChaGCBP_HighAlert");

	Params::AChaGCBP_HighAlert_C_ExecuteUbergraph_ChaGCBP_HighAlert_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InDirection = K2Node_Event_InDirection;

	UObject::ProcessEvent(Func, &Parms);

}

}


