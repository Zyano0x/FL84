#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_Replay_Perspective.ChaGCBP_Replay_Perspective_C
// (Actor)

class UClass* AChaGCBP_Replay_Perspective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_Replay_Perspective_C");

	return Clss;
}


// ChaGCBP_Replay_Perspective_C ChaGCBP_Replay_Perspective.Default__ChaGCBP_Replay_Perspective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_Replay_Perspective_C* AChaGCBP_Replay_Perspective_C::GetDefaultObj()
{
	static class AChaGCBP_Replay_Perspective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_Replay_Perspective_C*>(AChaGCBP_Replay_Perspective_C::StaticClass()->DefaultObject);

	return Default;
}

}


