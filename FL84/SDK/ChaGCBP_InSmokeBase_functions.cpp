#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_InSmokeBase.ChaGCBP_InSmokeBase_C
// (Actor)

class UClass* AChaGCBP_InSmokeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_InSmokeBase_C");

	return Clss;
}


// ChaGCBP_InSmokeBase_C ChaGCBP_InSmokeBase.Default__ChaGCBP_InSmokeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_InSmokeBase_C* AChaGCBP_InSmokeBase_C::GetDefaultObj()
{
	static class AChaGCBP_InSmokeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_InSmokeBase_C*>(AChaGCBP_InSmokeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


