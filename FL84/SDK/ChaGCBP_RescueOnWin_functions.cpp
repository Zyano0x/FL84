#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_RescueOnWin.ChaGCBP_RescueOnWin_C
// (Actor)

class UClass* AChaGCBP_RescueOnWin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_RescueOnWin_C");

	return Clss;
}


// ChaGCBP_RescueOnWin_C ChaGCBP_RescueOnWin.Default__ChaGCBP_RescueOnWin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_RescueOnWin_C* AChaGCBP_RescueOnWin_C::GetDefaultObj()
{
	static class AChaGCBP_RescueOnWin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_RescueOnWin_C*>(AChaGCBP_RescueOnWin_C::StaticClass()->DefaultObject);

	return Default;
}

}


