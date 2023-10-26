#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AEBP_InSmokeBase.AEBP_InSmokeBase_C
// (None)

class UClass* UAEBP_InSmokeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AEBP_InSmokeBase_C");

	return Clss;
}


// AEBP_InSmokeBase_C AEBP_InSmokeBase.Default__AEBP_InSmokeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAEBP_InSmokeBase_C* UAEBP_InSmokeBase_C::GetDefaultObj()
{
	static class UAEBP_InSmokeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAEBP_InSmokeBase_C*>(UAEBP_InSmokeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


