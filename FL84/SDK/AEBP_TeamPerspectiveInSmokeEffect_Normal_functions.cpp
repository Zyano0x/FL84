#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AEBP_TeamPerspectiveInSmokeEffect_Normal.AEBP_TeamPerspectiveInSmokeEffect_Normal_C
// (None)

class UClass* UAEBP_TeamPerspectiveInSmokeEffect_Normal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AEBP_TeamPerspectiveInSmokeEffect_Normal_C");

	return Clss;
}


// AEBP_TeamPerspectiveInSmokeEffect_Normal_C AEBP_TeamPerspectiveInSmokeEffect_Normal.Default__AEBP_TeamPerspectiveInSmokeEffect_Normal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAEBP_TeamPerspectiveInSmokeEffect_Normal_C* UAEBP_TeamPerspectiveInSmokeEffect_Normal_C::GetDefaultObj()
{
	static class UAEBP_TeamPerspectiveInSmokeEffect_Normal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAEBP_TeamPerspectiveInSmokeEffect_Normal_C*>(UAEBP_TeamPerspectiveInSmokeEffect_Normal_C::StaticClass()->DefaultObject);

	return Default;
}

}


