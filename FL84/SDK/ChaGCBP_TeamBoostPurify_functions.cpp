#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_TeamBoostPurify.ChaGCBP_TeamBoostPurify_C
// (Actor)

class UClass* AChaGCBP_TeamBoostPurify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_TeamBoostPurify_C");

	return Clss;
}


// ChaGCBP_TeamBoostPurify_C ChaGCBP_TeamBoostPurify.Default__ChaGCBP_TeamBoostPurify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_TeamBoostPurify_C* AChaGCBP_TeamBoostPurify_C::GetDefaultObj()
{
	static class AChaGCBP_TeamBoostPurify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_TeamBoostPurify_C*>(AChaGCBP_TeamBoostPurify_C::StaticClass()->DefaultObject);

	return Default;
}

}


