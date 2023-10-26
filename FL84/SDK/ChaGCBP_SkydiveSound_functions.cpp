#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SkydiveSound.ChaGCBP_SkydiveSound_C
// (Actor)

class UClass* AChaGCBP_SkydiveSound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SkydiveSound_C");

	return Clss;
}


// ChaGCBP_SkydiveSound_C ChaGCBP_SkydiveSound.Default__ChaGCBP_SkydiveSound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SkydiveSound_C* AChaGCBP_SkydiveSound_C::GetDefaultObj()
{
	static class AChaGCBP_SkydiveSound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SkydiveSound_C*>(AChaGCBP_SkydiveSound_C::StaticClass()->DefaultObject);

	return Default;
}

}


