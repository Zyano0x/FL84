#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_SpawnExtraShield.ChaGCBP_SpawnExtraShield_C
// (Actor)

class UClass* AChaGCBP_SpawnExtraShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_SpawnExtraShield_C");

	return Clss;
}


// ChaGCBP_SpawnExtraShield_C ChaGCBP_SpawnExtraShield.Default__ChaGCBP_SpawnExtraShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_SpawnExtraShield_C* AChaGCBP_SpawnExtraShield_C::GetDefaultObj()
{
	static class AChaGCBP_SpawnExtraShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_SpawnExtraShield_C*>(AChaGCBP_SpawnExtraShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


