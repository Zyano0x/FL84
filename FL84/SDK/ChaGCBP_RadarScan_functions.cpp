#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_RadarScan.ChaGCBP_RadarScan_C
// (Actor)

class UClass* AChaGCBP_RadarScan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_RadarScan_C");

	return Clss;
}


// ChaGCBP_RadarScan_C ChaGCBP_RadarScan.Default__ChaGCBP_RadarScan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_RadarScan_C* AChaGCBP_RadarScan_C::GetDefaultObj()
{
	static class AChaGCBP_RadarScan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_RadarScan_C*>(AChaGCBP_RadarScan_C::StaticClass()->DefaultObject);

	return Default;
}

}


