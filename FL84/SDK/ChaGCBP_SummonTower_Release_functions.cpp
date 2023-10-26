#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SummonTower_Release.ChaGCBP_SummonTower_Release_C
// (Actor)

class UClass* AChaGCBP_SummonTower_Release_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SummonTower_Release_C");

	return Clss;
}


// ChaGCBP_SummonTower_Release_C ChaGCBP_SummonTower_Release.Default__ChaGCBP_SummonTower_Release_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SummonTower_Release_C* AChaGCBP_SummonTower_Release_C::GetDefaultObj()
{
	static class AChaGCBP_SummonTower_Release_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SummonTower_Release_C*>(AChaGCBP_SummonTower_Release_C::StaticClass()->DefaultObject);

	return Default;
}

}


