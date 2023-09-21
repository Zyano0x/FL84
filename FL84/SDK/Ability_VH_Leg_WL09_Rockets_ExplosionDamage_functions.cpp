#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C
// (Actor)

class UClass* AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C");

	return Clss;
}


// Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Default__Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C* AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C::GetDefaultObj()
{
	static class AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C*>(AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C", "ReceiveTick");

	Params::AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C.ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C::ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C", "ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage");

	Params::AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C_ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


