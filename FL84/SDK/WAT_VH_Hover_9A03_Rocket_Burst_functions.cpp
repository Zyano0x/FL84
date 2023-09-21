#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WAT_VH_Hover_9A03_Rocket_Burst.WAT_VH_Hover_9A03_Rocket_Burst_C
// (None)

class UClass* UWAT_VH_Hover_9A03_Rocket_Burst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WAT_VH_Hover_9A03_Rocket_Burst_C");

	return Clss;
}


// WAT_VH_Hover_9A03_Rocket_Burst_C WAT_VH_Hover_9A03_Rocket_Burst.Default__WAT_VH_Hover_9A03_Rocket_Burst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted, StrongRefOnFrame)

class UWAT_VH_Hover_9A03_Rocket_Burst_C* UWAT_VH_Hover_9A03_Rocket_Burst_C::GetDefaultObj()
{
	static class UWAT_VH_Hover_9A03_Rocket_Burst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWAT_VH_Hover_9A03_Rocket_Burst_C*>(UWAT_VH_Hover_9A03_Rocket_Burst_C::StaticClass()->DefaultObject);

	return Default;
}

}


