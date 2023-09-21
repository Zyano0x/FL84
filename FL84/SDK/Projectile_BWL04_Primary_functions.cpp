#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_BWL04_Primary.Projectile_BWL04_Primary_C
// (Actor)

class UClass* AProjectile_BWL04_Primary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_BWL04_Primary_C");

	return Clss;
}


// Projectile_BWL04_Primary_C Projectile_BWL04_Primary.Default__Projectile_BWL04_Primary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_BWL04_Primary_C* AProjectile_BWL04_Primary_C::GetDefaultObj()
{
	static class AProjectile_BWL04_Primary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_BWL04_Primary_C*>(AProjectile_BWL04_Primary_C::StaticClass()->DefaultObject);

	return Default;
}

}


