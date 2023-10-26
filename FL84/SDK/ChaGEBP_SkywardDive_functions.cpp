#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGEBP_SkywardDive.ChaGEBP_SkywardDive_C
// (None)

class UClass* UChaGEBP_SkywardDive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGEBP_SkywardDive_C");

	return Clss;
}


// ChaGEBP_SkywardDive_C ChaGEBP_SkywardDive.Default__ChaGEBP_SkywardDive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGEBP_SkywardDive_C* UChaGEBP_SkywardDive_C::GetDefaultObj()
{
	static class UChaGEBP_SkywardDive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGEBP_SkywardDive_C*>(UChaGEBP_SkywardDive_C::StaticClass()->DefaultObject);

	return Default;
}

}


