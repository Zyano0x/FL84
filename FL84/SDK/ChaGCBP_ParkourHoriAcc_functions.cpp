#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_ParkourHoriAcc.ChaGCBP_ParkourHoriAcc_C
// (Actor)

class UClass* AChaGCBP_ParkourHoriAcc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_ParkourHoriAcc_C");

	return Clss;
}


// ChaGCBP_ParkourHoriAcc_C ChaGCBP_ParkourHoriAcc.Default__ChaGCBP_ParkourHoriAcc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_ParkourHoriAcc_C* AChaGCBP_ParkourHoriAcc_C::GetDefaultObj()
{
	static class AChaGCBP_ParkourHoriAcc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_ParkourHoriAcc_C*>(AChaGCBP_ParkourHoriAcc_C::StaticClass()->DefaultObject);

	return Default;
}

}


