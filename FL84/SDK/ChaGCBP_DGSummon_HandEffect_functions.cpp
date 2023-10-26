#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_DGSummon_HandEffect.ChaGCBP_DGSummon_HandEffect_C
// (Actor)

class UClass* AChaGCBP_DGSummon_HandEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_DGSummon_HandEffect_C");

	return Clss;
}


// ChaGCBP_DGSummon_HandEffect_C ChaGCBP_DGSummon_HandEffect.Default__ChaGCBP_DGSummon_HandEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_DGSummon_HandEffect_C* AChaGCBP_DGSummon_HandEffect_C::GetDefaultObj()
{
	static class AChaGCBP_DGSummon_HandEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_DGSummon_HandEffect_C*>(AChaGCBP_DGSummon_HandEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


