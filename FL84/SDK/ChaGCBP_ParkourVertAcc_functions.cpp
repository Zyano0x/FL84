#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_ParkourVertAcc.ChaGCBP_ParkourVertAcc_C
// (Actor)

class UClass* AChaGCBP_ParkourVertAcc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_ParkourVertAcc_C");

	return Clss;
}


// ChaGCBP_ParkourVertAcc_C ChaGCBP_ParkourVertAcc.Default__ChaGCBP_ParkourVertAcc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_ParkourVertAcc_C* AChaGCBP_ParkourVertAcc_C::GetDefaultObj()
{
	static class AChaGCBP_ParkourVertAcc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_ParkourVertAcc_C*>(AChaGCBP_ParkourVertAcc_C::StaticClass()->DefaultObject);

	return Default;
}

}


