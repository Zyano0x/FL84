#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LobbyGameState.BP_LobbyGameState_C
// (Actor)

class UClass* ABP_LobbyGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LobbyGameState_C");

	return Clss;
}


// BP_LobbyGameState_C BP_LobbyGameState.Default__BP_LobbyGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LobbyGameState_C* ABP_LobbyGameState_C::GetDefaultObj()
{
	static class ABP_LobbyGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LobbyGameState_C*>(ABP_LobbyGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


