#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarAbility_WL07_EMP.BP_SolarAbility_WL07_EMP_C
// (Actor)

class UClass* ABP_SolarAbility_WL07_EMP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarAbility_WL07_EMP_C");

	return Clss;
}


// BP_SolarAbility_WL07_EMP_C BP_SolarAbility_WL07_EMP.Default__BP_SolarAbility_WL07_EMP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SolarAbility_WL07_EMP_C* ABP_SolarAbility_WL07_EMP_C::GetDefaultObj()
{
	static class ABP_SolarAbility_WL07_EMP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SolarAbility_WL07_EMP_C*>(ABP_SolarAbility_WL07_EMP_C::StaticClass()->DefaultObject);

	return Default;
}

}


