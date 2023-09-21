#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C
// (Actor)

class UClass* AAbility_VH_Hover_WL04_StickyBomb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VH_Hover_WL04_StickyBomb_C");

	return Clss;
}


// Ability_VH_Hover_WL04_StickyBomb_C Ability_VH_Hover_WL04_StickyBomb.Default__Ability_VH_Hover_WL04_StickyBomb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VH_Hover_WL04_StickyBomb_C* AAbility_VH_Hover_WL04_StickyBomb_C::GetDefaultObj()
{
	static class AAbility_VH_Hover_WL04_StickyBomb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VH_Hover_WL04_StickyBomb_C*>(AAbility_VH_Hover_WL04_StickyBomb_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_VH_Hover_WL04_StickyBomb_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Hover_WL04_StickyBomb_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_VH_Hover_WL04_StickyBomb_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Hover_WL04_StickyBomb_C", "ReceiveTick");

	Params::AAbility_VH_Hover_WL04_StickyBomb_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbility_VH_Hover_WL04_StickyBomb_C::ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Hover_WL04_StickyBomb_C", "ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb");

	Params::AAbility_VH_Hover_WL04_StickyBomb_C_ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


