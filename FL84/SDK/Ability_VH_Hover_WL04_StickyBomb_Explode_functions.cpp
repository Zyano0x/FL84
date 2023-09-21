#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C
// (Actor)

class UClass* AAbility_VH_Hover_WL04_StickyBomb_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_VH_Hover_WL04_StickyBomb_Explode_C");

	return Clss;
}


// Ability_VH_Hover_WL04_StickyBomb_Explode_C Ability_VH_Hover_WL04_StickyBomb_Explode.Default__Ability_VH_Hover_WL04_StickyBomb_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbility_VH_Hover_WL04_StickyBomb_Explode_C* AAbility_VH_Hover_WL04_StickyBomb_Explode_C::GetDefaultObj()
{
	static class AAbility_VH_Hover_WL04_StickyBomb_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbility_VH_Hover_WL04_StickyBomb_Explode_C*>(AAbility_VH_Hover_WL04_StickyBomb_Explode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAbility_VH_Hover_WL04_StickyBomb_Explode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Hover_WL04_StickyBomb_Explode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C.ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_PostAkEventByName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAbility_VH_Hover_WL04_StickyBomb_Explode_C::ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostAkEventByName_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_VH_Hover_WL04_StickyBomb_Explode_C", "ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode");

	Params::AAbility_VH_Hover_WL04_StickyBomb_Explode_C_ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAkEventByName_ReturnValue = CallFunc_PostAkEventByName_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


