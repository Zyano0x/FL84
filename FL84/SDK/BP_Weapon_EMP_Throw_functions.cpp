#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Weapon_EMP_Throw.BP_Weapon_EMP_Throw_C
// (Actor)

class UClass* ABP_Weapon_EMP_Throw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Weapon_EMP_Throw_C");

	return Clss;
}


// BP_Weapon_EMP_Throw_C BP_Weapon_EMP_Throw.Default__BP_Weapon_EMP_Throw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Weapon_EMP_Throw_C* ABP_Weapon_EMP_Throw_C::GetDefaultObj()
{
	static class ABP_Weapon_EMP_Throw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Weapon_EMP_Throw_C*>(ABP_Weapon_EMP_Throw_C::StaticClass()->DefaultObject);

	return Default;
}

}


