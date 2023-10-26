#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_JetSlowFalling.ChaGCBP_JetSlowFalling_C
// (None)

class UClass* UChaGCBP_JetSlowFalling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_JetSlowFalling_C");

	return Clss;
}


// ChaGCBP_JetSlowFalling_C ChaGCBP_JetSlowFalling.Default__ChaGCBP_JetSlowFalling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGCBP_JetSlowFalling_C* UChaGCBP_JetSlowFalling_C::GetDefaultObj()
{
	static class UChaGCBP_JetSlowFalling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGCBP_JetSlowFalling_C*>(UChaGCBP_JetSlowFalling_C::StaticClass()->DefaultObject);

	return Default;
}

}


