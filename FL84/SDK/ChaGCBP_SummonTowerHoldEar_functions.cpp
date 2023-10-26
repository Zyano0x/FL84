#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SummonTowerHoldEar.ChaGCBP_SummonTowerHoldEar_C
// (Actor)

class UClass* AChaGCBP_SummonTowerHoldEar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SummonTowerHoldEar_C");

	return Clss;
}


// ChaGCBP_SummonTowerHoldEar_C ChaGCBP_SummonTowerHoldEar.Default__ChaGCBP_SummonTowerHoldEar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SummonTowerHoldEar_C* AChaGCBP_SummonTowerHoldEar_C::GetDefaultObj()
{
	static class AChaGCBP_SummonTowerHoldEar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SummonTowerHoldEar_C*>(AChaGCBP_SummonTowerHoldEar_C::StaticClass()->DefaultObject);

	return Default;
}

}


