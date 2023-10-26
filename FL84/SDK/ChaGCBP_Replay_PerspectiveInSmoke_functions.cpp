#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_Replay_PerspectiveInSmoke.ChaGCBP_Replay_PerspectiveInSmoke_C
// (Actor)

class UClass* AChaGCBP_Replay_PerspectiveInSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_Replay_PerspectiveInSmoke_C");

	return Clss;
}


// ChaGCBP_Replay_PerspectiveInSmoke_C ChaGCBP_Replay_PerspectiveInSmoke.Default__ChaGCBP_Replay_PerspectiveInSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_Replay_PerspectiveInSmoke_C* AChaGCBP_Replay_PerspectiveInSmoke_C::GetDefaultObj()
{
	static class AChaGCBP_Replay_PerspectiveInSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_Replay_PerspectiveInSmoke_C*>(AChaGCBP_Replay_PerspectiveInSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


