#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarWaterActor.BP_SolarWaterActor_C
// (Actor)

class UClass* ABP_SolarWaterActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarWaterActor_C");

	return Clss;
}


// BP_SolarWaterActor_C BP_SolarWaterActor.Default__BP_SolarWaterActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SolarWaterActor_C* ABP_SolarWaterActor_C::GetDefaultObj()
{
	static class ABP_SolarWaterActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SolarWaterActor_C*>(ABP_SolarWaterActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


