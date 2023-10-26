#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_RadarScanInSmoke.ChaGCBP_RadarScanInSmoke_C
// (Actor)

class UClass* AChaGCBP_RadarScanInSmoke_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_RadarScanInSmoke_C");

	return Clss;
}


// ChaGCBP_RadarScanInSmoke_C ChaGCBP_RadarScanInSmoke.Default__ChaGCBP_RadarScanInSmoke_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_RadarScanInSmoke_C* AChaGCBP_RadarScanInSmoke_C::GetDefaultObj()
{
	static class AChaGCBP_RadarScanInSmoke_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_RadarScanInSmoke_C*>(AChaGCBP_RadarScanInSmoke_C::StaticClass()->DefaultObject);

	return Default;
}

}


