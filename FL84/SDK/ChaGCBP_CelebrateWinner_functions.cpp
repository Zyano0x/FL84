#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_CelebrateWinner.ChaGCBP_CelebrateWinner_C
// (Actor)

class UClass* AChaGCBP_CelebrateWinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_CelebrateWinner_C");

	return Clss;
}


// ChaGCBP_CelebrateWinner_C ChaGCBP_CelebrateWinner.Default__ChaGCBP_CelebrateWinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_CelebrateWinner_C* AChaGCBP_CelebrateWinner_C::GetDefaultObj()
{
	static class AChaGCBP_CelebrateWinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_CelebrateWinner_C*>(AChaGCBP_CelebrateWinner_C::StaticClass()->DefaultObject);

	return Default;
}

}


