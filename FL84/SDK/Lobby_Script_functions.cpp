#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lobby_Script.Lobby_Script_C
// (Actor)

class UClass* ALobby_Script_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_Script_C");

	return Clss;
}


// Lobby_Script_C Lobby_Script.Default__Lobby_Script_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobby_Script_C* ALobby_Script_C::GetDefaultObj()
{
	static class ALobby_Script_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobby_Script_C*>(ALobby_Script_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_Script.Lobby_Script_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALobby_Script_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Script_C", "ReceiveEndPlay");

	Params::ALobby_Script_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_Script.Lobby_Script_C.ReceiveBeginPlayCopy
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALobby_Script_C::ReceiveBeginPlayCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Script_C", "ReceiveBeginPlayCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Script.Lobby_Script_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ALobby_Script_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Script_C", "GetModuleName");

	Params::ALobby_Script_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Lobby_Script.Lobby_Script_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALobby_Script_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Script_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Script.Lobby_Script_C.ExecuteUbergraph_Lobby_Script
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobby_Script_C::ExecuteUbergraph_Lobby_Script(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Script_C", "ExecuteUbergraph_Lobby_Script");

	Params::ALobby_Script_C_ExecuteUbergraph_Lobby_Script_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


