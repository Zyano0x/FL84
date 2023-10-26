#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_InvisibleByZone.ChaGCBP_InvisibleByZone_C
// (Actor)

class UClass* AChaGCBP_InvisibleByZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_InvisibleByZone_C");

	return Clss;
}


// ChaGCBP_InvisibleByZone_C ChaGCBP_InvisibleByZone.Default__ChaGCBP_InvisibleByZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_InvisibleByZone_C* AChaGCBP_InvisibleByZone_C::GetDefaultObj()
{
	static class AChaGCBP_InvisibleByZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_InvisibleByZone_C*>(AChaGCBP_InvisibleByZone_C::StaticClass()->DefaultObject);

	return Default;
}

}


