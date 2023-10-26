#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VehicleStatus_SeriouslyDamaged.GE_VehicleStatus_SeriouslyDamaged_C
// (None)

class UClass* UGE_VehicleStatus_SeriouslyDamaged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VehicleStatus_SeriouslyDamaged_C");

	return Clss;
}


// GE_VehicleStatus_SeriouslyDamaged_C GE_VehicleStatus_SeriouslyDamaged.Default__GE_VehicleStatus_SeriouslyDamaged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VehicleStatus_SeriouslyDamaged_C* UGE_VehicleStatus_SeriouslyDamaged_C::GetDefaultObj()
{
	static class UGE_VehicleStatus_SeriouslyDamaged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VehicleStatus_SeriouslyDamaged_C*>(UGE_VehicleStatus_SeriouslyDamaged_C::StaticClass()->DefaultObject);

	return Default;
}

}


