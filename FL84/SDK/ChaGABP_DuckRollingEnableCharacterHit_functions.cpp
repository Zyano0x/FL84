#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGABP_DuckRollingEnableCharacterHit.ChaGABP_DuckRollingEnableCharacterHit_C
// (None)

class UClass* UChaGABP_DuckRollingEnableCharacterHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGABP_DuckRollingEnableCharacterHit_C");

	return Clss;
}


// ChaGABP_DuckRollingEnableCharacterHit_C ChaGABP_DuckRollingEnableCharacterHit.Default__ChaGABP_DuckRollingEnableCharacterHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGABP_DuckRollingEnableCharacterHit_C* UChaGABP_DuckRollingEnableCharacterHit_C::GetDefaultObj()
{
	static class UChaGABP_DuckRollingEnableCharacterHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGABP_DuckRollingEnableCharacterHit_C*>(UChaGABP_DuckRollingEnableCharacterHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


