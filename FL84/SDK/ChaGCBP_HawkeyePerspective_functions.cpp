#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_HawkeyePerspective.ChaGCBP_HawkeyePerspective_C
// (Actor)

class UClass* AChaGCBP_HawkeyePerspective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_HawkeyePerspective_C");

	return Clss;
}


// ChaGCBP_HawkeyePerspective_C ChaGCBP_HawkeyePerspective.Default__ChaGCBP_HawkeyePerspective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_HawkeyePerspective_C* AChaGCBP_HawkeyePerspective_C::GetDefaultObj()
{
	static class AChaGCBP_HawkeyePerspective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_HawkeyePerspective_C*>(AChaGCBP_HawkeyePerspective_C::StaticClass()->DefaultObject);

	return Default;
}

}


