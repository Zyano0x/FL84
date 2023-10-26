#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RadarScan_MultiplePassEffectInSmoke.BP_RadarScan_MultiplePassEffectInSmoke_C
// (None)

class UClass* UBP_RadarScan_MultiplePassEffectInSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RadarScan_MultiplePassEffectInSmoke_C");

	return Clss;
}


// BP_RadarScan_MultiplePassEffectInSmoke_C BP_RadarScan_MultiplePassEffectInSmoke.Default__BP_RadarScan_MultiplePassEffectInSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RadarScan_MultiplePassEffectInSmoke_C* UBP_RadarScan_MultiplePassEffectInSmoke_C::GetDefaultObj()
{
	static class UBP_RadarScan_MultiplePassEffectInSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RadarScan_MultiplePassEffectInSmoke_C*>(UBP_RadarScan_MultiplePassEffectInSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


