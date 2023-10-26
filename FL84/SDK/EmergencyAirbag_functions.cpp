#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmergencyAirbag.EmergencyAirbag_C
// (Actor)

class UClass* AEmergencyAirbag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmergencyAirbag_C");

	return Clss;
}


// EmergencyAirbag_C EmergencyAirbag.Default__EmergencyAirbag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEmergencyAirbag_C* AEmergencyAirbag_C::GetDefaultObj()
{
	static class AEmergencyAirbag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEmergencyAirbag_C*>(AEmergencyAirbag_C::StaticClass()->DefaultObject);

	return Default;
}

}


