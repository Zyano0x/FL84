#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_Vehicle_Weapon_Burning.GC_Vehicle_Weapon_Burning_C
// (Actor)

class UClass* AGC_Vehicle_Weapon_Burning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_Vehicle_Weapon_Burning_C");

	return Clss;
}


// GC_Vehicle_Weapon_Burning_C GC_Vehicle_Weapon_Burning.Default__GC_Vehicle_Weapon_Burning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_Vehicle_Weapon_Burning_C* AGC_Vehicle_Weapon_Burning_C::GetDefaultObj()
{
	static class AGC_Vehicle_Weapon_Burning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_Vehicle_Weapon_Burning_C*>(AGC_Vehicle_Weapon_Burning_C::StaticClass()->DefaultObject);

	return Default;
}

}


