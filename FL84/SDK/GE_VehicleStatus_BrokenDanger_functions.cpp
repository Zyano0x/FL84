#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_VehicleStatus_BrokenDanger.GE_VehicleStatus_BrokenDanger_C
// (None)

class UClass* UGE_VehicleStatus_BrokenDanger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_VehicleStatus_BrokenDanger_C");

	return Clss;
}


// GE_VehicleStatus_BrokenDanger_C GE_VehicleStatus_BrokenDanger.Default__GE_VehicleStatus_BrokenDanger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_VehicleStatus_BrokenDanger_C* UGE_VehicleStatus_BrokenDanger_C::GetDefaultObj()
{
	static class UGE_VehicleStatus_BrokenDanger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_VehicleStatus_BrokenDanger_C*>(UGE_VehicleStatus_BrokenDanger_C::StaticClass()->DefaultObject);

	return Default;
}

}


