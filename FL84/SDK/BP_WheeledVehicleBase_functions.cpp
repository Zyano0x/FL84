#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WheeledVehicleBase.BP_WheeledVehicleBase_C
// (Actor, Pawn)

class UClass* ABP_WheeledVehicleBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WheeledVehicleBase_C");

	return Clss;
}


// BP_WheeledVehicleBase_C BP_WheeledVehicleBase.Default__BP_WheeledVehicleBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WheeledVehicleBase_C* ABP_WheeledVehicleBase_C::GetDefaultObj()
{
	static class ABP_WheeledVehicleBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WheeledVehicleBase_C*>(ABP_WheeledVehicleBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


