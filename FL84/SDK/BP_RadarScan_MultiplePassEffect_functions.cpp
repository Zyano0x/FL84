#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RadarScan_MultiplePassEffect.BP_RadarScan_MultiplePassEffect_C
// (None)

class UClass* UBP_RadarScan_MultiplePassEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RadarScan_MultiplePassEffect_C");

	return Clss;
}


// BP_RadarScan_MultiplePassEffect_C BP_RadarScan_MultiplePassEffect.Default__BP_RadarScan_MultiplePassEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RadarScan_MultiplePassEffect_C* UBP_RadarScan_MultiplePassEffect_C::GetDefaultObj()
{
	static class UBP_RadarScan_MultiplePassEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RadarScan_MultiplePassEffect_C*>(UBP_RadarScan_MultiplePassEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


