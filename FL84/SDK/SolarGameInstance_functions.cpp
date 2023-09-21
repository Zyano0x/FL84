#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
// (None)

class UClass* USolarGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarGameInstance_C");

	return Clss;
}


// SolarGameInstance_C SolarGameInstance.Default__SolarGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USolarGameInstance_C* USolarGameInstance_C::GetDefaultObj()
{
	static class USolarGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarGameInstance_C*>(USolarGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::LuaOnBroadcastModeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaOnBroadcastModeChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BroadcastPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USolarGameInstance_C::LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaGetBroadcastPlayerName");

	Params::USolarGameInstance_C_LuaGetBroadcastPlayerName_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (BroadcastPlayerName != nullptr)
		*BroadcastPlayerName = std::move(Parms.BroadcastPlayerName);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BroadcastPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USolarGameInstance_C::LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaGetBroadcastHeroName");

	Params::USolarGameInstance_C_LuaGetBroadcastHeroName_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (BroadcastPlayerName != nullptr)
		*BroadcastPlayerName = std::move(Parms.BroadcastPlayerName);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::SolarGM_TestCrashWithBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_TestCrashWithBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::SolarGM_TestEnsureMsgWithBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_TestEnsureMsgWithBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USolarGameInstance_C::ExecuteUbergraph_SolarGameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ExecuteUbergraph_SolarGameInstance");

	Params::USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::OnBroadcastModeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnBroadcastModeChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


