#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HawkeyePerspectiveEffect.BP_HawkeyePerspectiveEffect_C
// (None)

class UClass* UBP_HawkeyePerspectiveEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HawkeyePerspectiveEffect_C");

	return Clss;
}


// BP_HawkeyePerspectiveEffect_C BP_HawkeyePerspectiveEffect.Default__BP_HawkeyePerspectiveEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HawkeyePerspectiveEffect_C* UBP_HawkeyePerspectiveEffect_C::GetDefaultObj()
{
	static class UBP_HawkeyePerspectiveEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HawkeyePerspectiveEffect_C*>(UBP_HawkeyePerspectiveEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


