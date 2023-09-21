#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultProjBullet.DefaultProjBullet_C
// (Actor)

class UClass* ADefaultProjBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultProjBullet_C");

	return Clss;
}


// DefaultProjBullet_C DefaultProjBullet.Default__DefaultProjBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADefaultProjBullet_C* ADefaultProjBullet_C::GetDefaultObj()
{
	static class ADefaultProjBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADefaultProjBullet_C*>(ADefaultProjBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


