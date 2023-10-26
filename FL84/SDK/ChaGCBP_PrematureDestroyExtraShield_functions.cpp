#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_PrematureDestroyExtraShield.ChaGCBP_PrematureDestroyExtraShield_C
// (Actor)

class UClass* AChaGCBP_PrematureDestroyExtraShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_PrematureDestroyExtraShield_C");

	return Clss;
}


// ChaGCBP_PrematureDestroyExtraShield_C ChaGCBP_PrematureDestroyExtraShield.Default__ChaGCBP_PrematureDestroyExtraShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_PrematureDestroyExtraShield_C* AChaGCBP_PrematureDestroyExtraShield_C::GetDefaultObj()
{
	static class AChaGCBP_PrematureDestroyExtraShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_PrematureDestroyExtraShield_C*>(AChaGCBP_PrematureDestroyExtraShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


