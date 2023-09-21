#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C
// (Actor, Pawn)

class UClass* ABP_SolarLobbyCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarLobbyCharacter_C");

	return Clss;
}


// BP_SolarLobbyCharacter_C BP_SolarLobbyCharacter.Default__BP_SolarLobbyCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SolarLobbyCharacter_C* ABP_SolarLobbyCharacter_C::GetDefaultObj()
{
	static class ABP_SolarLobbyCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SolarLobbyCharacter_C*>(ABP_SolarLobbyCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_SolarLobbyCharacter_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarLobbyCharacter_C", "GetModuleName");

	Params::ABP_SolarLobbyCharacter_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SolarLobbyCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarLobbyCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SolarLobbyCharacter_C::ExecuteUbergraph_BP_SolarLobbyCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarLobbyCharacter_C", "ExecuteUbergraph_BP_SolarLobbyCharacter");

	Params::ABP_SolarLobbyCharacter_C_ExecuteUbergraph_BP_SolarLobbyCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


