#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SkywardDiveLaunch.ChaGCBP_SkywardDiveLaunch_C
// (Actor)

class UClass* AChaGCBP_SkywardDiveLaunch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SkywardDiveLaunch_C");

	return Clss;
}


// ChaGCBP_SkywardDiveLaunch_C ChaGCBP_SkywardDiveLaunch.Default__ChaGCBP_SkywardDiveLaunch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SkywardDiveLaunch_C* AChaGCBP_SkywardDiveLaunch_C::GetDefaultObj()
{
	static class AChaGCBP_SkywardDiveLaunch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SkywardDiveLaunch_C*>(AChaGCBP_SkywardDiveLaunch_C::StaticClass()->DefaultObject);

	return Default;
}

}


