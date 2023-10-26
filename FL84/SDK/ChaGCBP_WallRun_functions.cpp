#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_WallRun.ChaGCBP_WallRun_C
// (None)

class UClass* UChaGCBP_WallRun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_WallRun_C");

	return Clss;
}


// ChaGCBP_WallRun_C ChaGCBP_WallRun.Default__ChaGCBP_WallRun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGCBP_WallRun_C* UChaGCBP_WallRun_C::GetDefaultObj()
{
	static class UChaGCBP_WallRun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGCBP_WallRun_C*>(UChaGCBP_WallRun_C::StaticClass()->DefaultObject);

	return Default;
}

}


