#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Anti-vehicle_Weapon01.Effect_Anti-vehicle_Weapon01_C
// (None)

class UClass* UEffect_AntiMinusvehicle_Weapon01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Anti-vehicle_Weapon01_C");

	return Clss;
}


// Effect_Anti-vehicle_Weapon01_C Effect_Anti-vehicle_Weapon01.Default__Effect_Anti-vehicle_Weapon01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_AntiMinusvehicle_Weapon01_C* UEffect_AntiMinusvehicle_Weapon01_C::GetDefaultObj()
{
	static class UEffect_AntiMinusvehicle_Weapon01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_AntiMinusvehicle_Weapon01_C*>(UEffect_AntiMinusvehicle_Weapon01_C::StaticClass()->DefaultObject);

	return Default;
}

}


