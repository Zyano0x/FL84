#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_RoutineDestroyExtraShield.ChaGCBP_RoutineDestroyExtraShield_C
// (Actor)

class UClass* AChaGCBP_RoutineDestroyExtraShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_RoutineDestroyExtraShield_C");

	return Clss;
}


// ChaGCBP_RoutineDestroyExtraShield_C ChaGCBP_RoutineDestroyExtraShield.Default__ChaGCBP_RoutineDestroyExtraShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_RoutineDestroyExtraShield_C* AChaGCBP_RoutineDestroyExtraShield_C::GetDefaultObj()
{
	static class AChaGCBP_RoutineDestroyExtraShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_RoutineDestroyExtraShield_C*>(AChaGCBP_RoutineDestroyExtraShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


