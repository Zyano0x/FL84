#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InvisibleByZoneEffect_Enemy.BP_InvisibleByZoneEffect_Enemy_C
// (None)

class UClass* UBP_InvisibleByZoneEffect_Enemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InvisibleByZoneEffect_Enemy_C");

	return Clss;
}


// BP_InvisibleByZoneEffect_Enemy_C BP_InvisibleByZoneEffect_Enemy.Default__BP_InvisibleByZoneEffect_Enemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InvisibleByZoneEffect_Enemy_C* UBP_InvisibleByZoneEffect_Enemy_C::GetDefaultObj()
{
	static class UBP_InvisibleByZoneEffect_Enemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InvisibleByZoneEffect_Enemy_C*>(UBP_InvisibleByZoneEffect_Enemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


