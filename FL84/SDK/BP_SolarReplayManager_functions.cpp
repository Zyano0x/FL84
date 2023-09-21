#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C
// (None)

class UClass* UBP_SolarReplayManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarReplayManager_C");

	return Clss;
}


// BP_SolarReplayManager_C BP_SolarReplayManager.Default__BP_SolarReplayManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SolarReplayManager_C* UBP_SolarReplayManager_C::GetDefaultObj()
{
	static class UBP_SolarReplayManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SolarReplayManager_C*>(UBP_SolarReplayManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


