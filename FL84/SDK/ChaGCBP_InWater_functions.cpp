#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_InWater.ChaGCBP_InWater_C
// (Actor)

class UClass* AChaGCBP_InWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_InWater_C");

	return Clss;
}


// ChaGCBP_InWater_C ChaGCBP_InWater.Default__ChaGCBP_InWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_InWater_C* AChaGCBP_InWater_C::GetDefaultObj()
{
	static class AChaGCBP_InWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_InWater_C*>(AChaGCBP_InWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


