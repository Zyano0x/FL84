#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TeamPerspectiveInSmokeEffect.BP_TeamPerspectiveInSmokeEffect_C
// (None)

class UClass* UBP_TeamPerspectiveInSmokeEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TeamPerspectiveInSmokeEffect_C");

	return Clss;
}


// BP_TeamPerspectiveInSmokeEffect_C BP_TeamPerspectiveInSmokeEffect.Default__BP_TeamPerspectiveInSmokeEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TeamPerspectiveInSmokeEffect_C* UBP_TeamPerspectiveInSmokeEffect_C::GetDefaultObj()
{
	static class UBP_TeamPerspectiveInSmokeEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TeamPerspectiveInSmokeEffect_C*>(UBP_TeamPerspectiveInSmokeEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


