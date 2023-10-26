#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BlinkAppear.ChaGCBP_BlinkAppear_C
// (None)

class UClass* UChaGCBP_BlinkAppear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BlinkAppear_C");

	return Clss;
}


// ChaGCBP_BlinkAppear_C ChaGCBP_BlinkAppear.Default__ChaGCBP_BlinkAppear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGCBP_BlinkAppear_C* UChaGCBP_BlinkAppear_C::GetDefaultObj()
{
	static class UChaGCBP_BlinkAppear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGCBP_BlinkAppear_C*>(UChaGCBP_BlinkAppear_C::StaticClass()->DefaultObject);

	return Default;
}

}


