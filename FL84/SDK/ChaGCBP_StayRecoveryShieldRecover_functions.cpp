#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_StayRecoveryShieldRecover.ChaGCBP_StayRecoveryShieldRecover_C
// (Actor)

class UClass* AChaGCBP_StayRecoveryShieldRecover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_StayRecoveryShieldRecover_C");

	return Clss;
}


// ChaGCBP_StayRecoveryShieldRecover_C ChaGCBP_StayRecoveryShieldRecover.Default__ChaGCBP_StayRecoveryShieldRecover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_StayRecoveryShieldRecover_C* AChaGCBP_StayRecoveryShieldRecover_C::GetDefaultObj()
{
	static class AChaGCBP_StayRecoveryShieldRecover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_StayRecoveryShieldRecover_C*>(AChaGCBP_StayRecoveryShieldRecover_C::StaticClass()->DefaultObject);

	return Default;
}

}


