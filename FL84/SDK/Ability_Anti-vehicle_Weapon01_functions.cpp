#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C
// (Actor)

class UClass* AAbility_AntiMinusvehicle_Weapon01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Anti-vehicle_Weapon01_C");

	return Clss;
}


// Ability_Anti-vehicle_Weapon01_C Ability_Anti-vehicle_Weapon01.Default__Ability_Anti-vehicle_Weapon01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_AntiMinusvehicle_Weapon01_C* AAbility_AntiMinusvehicle_Weapon01_C::GetDefaultObj()
{
	static class AAbility_AntiMinusvehicle_Weapon01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_AntiMinusvehicle_Weapon01_C*>(AAbility_AntiMinusvehicle_Weapon01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_AntiMinusvehicle_Weapon01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Anti-vehicle_Weapon01_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_AntiMinusvehicle_Weapon01_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Anti-vehicle_Weapon01_C", "ReceiveTick");

	Params::AAbility_AntiMinusvehicle_Weapon01_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Ability_Anti-vehicle_Weapon01
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_AntiMinusvehicle_Weapon01_C::ExecuteUbergraph_Ability_AntiMinusvehicle_Weapon01(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Anti-vehicle_Weapon01_C", "ExecuteUbergraph_Ability_Anti-vehicle_Weapon01");

	Params::AAbility_AntiMinusvehicle_Weapon01_C_ExecuteUbergraph_Ability_AntiMinusvehicle_Weapon01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


