#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamBoost.ChaGCBP_TeamBoost_C
// (Actor)

class UClass* AChaGCBP_TeamBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamBoost_C");

	return Clss;
}


// ChaGCBP_TeamBoost_C ChaGCBP_TeamBoost.Default__ChaGCBP_TeamBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamBoost_C* AChaGCBP_TeamBoost_C::GetDefaultObj()
{
	static class AChaGCBP_TeamBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamBoost_C*>(AChaGCBP_TeamBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


