#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C
// (Actor)

class UClass* AProjectile_BMphy0_Primary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_BMphy0_Primary_C");

	return Clss;
}


// Projectile_BMphy0_Primary_C Projectile_BMphy0_Primary.Default__Projectile_BMphy0_Primary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_BMphy0_Primary_C* AProjectile_BMphy0_Primary_C::GetDefaultObj()
{
	static class AProjectile_BMphy0_Primary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_BMphy0_Primary_C*>(AProjectile_BMphy0_Primary_C::StaticClass()->DefaultObject);

	return Default;
}

}


