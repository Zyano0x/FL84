#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_UAVRescue.ChaGCBP_UAVRescue_C
// (Actor)

class UClass* AChaGCBP_UAVRescue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_UAVRescue_C");

	return Clss;
}


// ChaGCBP_UAVRescue_C ChaGCBP_UAVRescue.Default__ChaGCBP_UAVRescue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_UAVRescue_C* AChaGCBP_UAVRescue_C::GetDefaultObj()
{
	static class AChaGCBP_UAVRescue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_UAVRescue_C*>(AChaGCBP_UAVRescue_C::StaticClass()->DefaultObject);

	return Default;
}

}


