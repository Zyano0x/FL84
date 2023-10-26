#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Replay_Perspective.BP_Replay_Perspective_C
// (None)

class UClass* UBP_Replay_Perspective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Replay_Perspective_C");

	return Clss;
}


// BP_Replay_Perspective_C BP_Replay_Perspective.Default__BP_Replay_Perspective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Replay_Perspective_C* UBP_Replay_Perspective_C::GetDefaultObj()
{
	static class UBP_Replay_Perspective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Replay_Perspective_C*>(UBP_Replay_Perspective_C::StaticClass()->DefaultObject);

	return Default;
}

}


