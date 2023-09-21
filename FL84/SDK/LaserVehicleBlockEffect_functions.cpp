#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LaserVehicleBlockEffect.LaserVehicleBlockEffect_C
// (None)

class UClass* ULaserVehicleBlockEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LaserVehicleBlockEffect_C");

	return Clss;
}


// LaserVehicleBlockEffect_C LaserVehicleBlockEffect.Default__LaserVehicleBlockEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULaserVehicleBlockEffect_C* ULaserVehicleBlockEffect_C::GetDefaultObj()
{
	static class ULaserVehicleBlockEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULaserVehicleBlockEffect_C*>(ULaserVehicleBlockEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


