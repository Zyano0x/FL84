#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BlackHole.ChaGCBP_BlackHole_C
// (Actor)

class UClass* AChaGCBP_BlackHole_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BlackHole_C");

	return Clss;
}


// ChaGCBP_BlackHole_C ChaGCBP_BlackHole.Default__ChaGCBP_BlackHole_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_BlackHole_C* AChaGCBP_BlackHole_C::GetDefaultObj()
{
	static class AChaGCBP_BlackHole_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_BlackHole_C*>(AChaGCBP_BlackHole_C::StaticClass()->DefaultObject);

	return Default;
}

}


