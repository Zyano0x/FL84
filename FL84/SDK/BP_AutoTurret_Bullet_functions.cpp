#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AutoTurret_Bullet.BP_AutoTurret_Bullet_C
// (Actor)

class UClass* ABP_AutoTurret_Bullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AutoTurret_Bullet_C");

	return Clss;
}


// BP_AutoTurret_Bullet_C BP_AutoTurret_Bullet.Default__BP_AutoTurret_Bullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AutoTurret_Bullet_C* ABP_AutoTurret_Bullet_C::GetDefaultObj()
{
	static class ABP_AutoTurret_Bullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AutoTurret_Bullet_C*>(ABP_AutoTurret_Bullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


