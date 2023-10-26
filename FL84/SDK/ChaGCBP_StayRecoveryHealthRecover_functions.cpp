#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_StayRecoveryHealthRecover.ChaGCBP_StayRecoveryHealthRecover_C
// (Actor)

class UClass* AChaGCBP_StayRecoveryHealthRecover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_StayRecoveryHealthRecover_C");

	return Clss;
}


// ChaGCBP_StayRecoveryHealthRecover_C ChaGCBP_StayRecoveryHealthRecover.Default__ChaGCBP_StayRecoveryHealthRecover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_StayRecoveryHealthRecover_C* AChaGCBP_StayRecoveryHealthRecover_C::GetDefaultObj()
{
	static class AChaGCBP_StayRecoveryHealthRecover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_StayRecoveryHealthRecover_C*>(AChaGCBP_StayRecoveryHealthRecover_C::StaticClass()->DefaultObject);

	return Default;
}

}


