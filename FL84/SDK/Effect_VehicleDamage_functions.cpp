#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VehicleDamage.Effect_VehicleDamage_C
// (None)

class UClass* UEffect_VehicleDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VehicleDamage_C");

	return Clss;
}


// Effect_VehicleDamage_C Effect_VehicleDamage.Default__Effect_VehicleDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VehicleDamage_C* UEffect_VehicleDamage_C::GetDefaultObj()
{
	static class UEffect_VehicleDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VehicleDamage_C*>(UEffect_VehicleDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}


