#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InvisibleByZoneEffect_Teammate.BP_InvisibleByZoneEffect_Teammate_C
// (None)

class UClass* UBP_InvisibleByZoneEffect_Teammate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InvisibleByZoneEffect_Teammate_C");

	return Clss;
}


// BP_InvisibleByZoneEffect_Teammate_C BP_InvisibleByZoneEffect_Teammate.Default__BP_InvisibleByZoneEffect_Teammate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InvisibleByZoneEffect_Teammate_C* UBP_InvisibleByZoneEffect_Teammate_C::GetDefaultObj()
{
	static class UBP_InvisibleByZoneEffect_Teammate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InvisibleByZoneEffect_Teammate_C*>(UBP_InvisibleByZoneEffect_Teammate_C::StaticClass()->DefaultObject);

	return Default;
}

}


