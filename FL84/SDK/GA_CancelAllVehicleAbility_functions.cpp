#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CancelAllVehicleAbility.GA_CancelAllVehicleAbility_C
// (None)

class UClass* UGA_CancelAllVehicleAbility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CancelAllVehicleAbility_C");

	return Clss;
}


// GA_CancelAllVehicleAbility_C GA_CancelAllVehicleAbility.Default__GA_CancelAllVehicleAbility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CancelAllVehicleAbility_C* UGA_CancelAllVehicleAbility_C::GetDefaultObj()
{
	static class UGA_CancelAllVehicleAbility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CancelAllVehicleAbility_C*>(UGA_CancelAllVehicleAbility_C::StaticClass()->DefaultObject);

	return Default;
}

}


