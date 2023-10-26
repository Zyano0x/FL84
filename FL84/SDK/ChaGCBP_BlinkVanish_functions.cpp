#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BlinkVanish.ChaGCBP_BlinkVanish_C
// (None)

class UClass* UChaGCBP_BlinkVanish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BlinkVanish_C");

	return Clss;
}


// ChaGCBP_BlinkVanish_C ChaGCBP_BlinkVanish.Default__ChaGCBP_BlinkVanish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGCBP_BlinkVanish_C* UChaGCBP_BlinkVanish_C::GetDefaultObj()
{
	static class UChaGCBP_BlinkVanish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGCBP_BlinkVanish_C*>(UChaGCBP_BlinkVanish_C::StaticClass()->DefaultObject);

	return Default;
}

}


