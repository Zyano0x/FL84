#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LobbyMode.BP_LobbyMode_C
// (Actor)

class UClass* ABP_LobbyMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LobbyMode_C");

	return Clss;
}


// BP_LobbyMode_C BP_LobbyMode.Default__BP_LobbyMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LobbyMode_C* ABP_LobbyMode_C::GetDefaultObj()
{
	static class ABP_LobbyMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LobbyMode_C*>(ABP_LobbyMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


