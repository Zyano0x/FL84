#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Replay_PerspectiveInSmoke.BP_Replay_PerspectiveInSmoke_C
// (None)

class UClass* UBP_Replay_PerspectiveInSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Replay_PerspectiveInSmoke_C");

	return Clss;
}


// BP_Replay_PerspectiveInSmoke_C BP_Replay_PerspectiveInSmoke.Default__BP_Replay_PerspectiveInSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Replay_PerspectiveInSmoke_C* UBP_Replay_PerspectiveInSmoke_C::GetDefaultObj()
{
	static class UBP_Replay_PerspectiveInSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Replay_PerspectiveInSmoke_C*>(UBP_Replay_PerspectiveInSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


