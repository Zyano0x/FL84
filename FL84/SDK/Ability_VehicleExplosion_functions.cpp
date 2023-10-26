#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VehicleExplosion.Ability_VehicleExplosion_C
// (Actor)

class UClass* AAbility_VehicleExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VehicleExplosion_C");

	return Clss;
}


// Ability_VehicleExplosion_C Ability_VehicleExplosion.Default__Ability_VehicleExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VehicleExplosion_C* AAbility_VehicleExplosion_C::GetDefaultObj()
{
	static class AAbility_VehicleExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VehicleExplosion_C*>(AAbility_VehicleExplosion_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_VehicleExplosion_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VehicleExplosion_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_VehicleExplosion_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VehicleExplosion_C", "ReceiveTick");

	Params::AAbility_VehicleExplosion_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ExecuteUbergraph_Ability_VehicleExplosion
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_VehicleExplosion_C::ExecuteUbergraph_Ability_VehicleExplosion(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VehicleExplosion_C", "ExecuteUbergraph_Ability_VehicleExplosion");

	Params::AAbility_VehicleExplosion_C_ExecuteUbergraph_Ability_VehicleExplosion_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


