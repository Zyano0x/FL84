#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamBoostPrepare.ChaGCBP_TeamBoostPrepare_C
// (Actor)

class UClass* AChaGCBP_TeamBoostPrepare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamBoostPrepare_C");

	return Clss;
}


// ChaGCBP_TeamBoostPrepare_C ChaGCBP_TeamBoostPrepare.Default__ChaGCBP_TeamBoostPrepare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamBoostPrepare_C* AChaGCBP_TeamBoostPrepare_C::GetDefaultObj()
{
	static class AChaGCBP_TeamBoostPrepare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamBoostPrepare_C*>(AChaGCBP_TeamBoostPrepare_C::StaticClass()->DefaultObject);

	return Default;
}

}


