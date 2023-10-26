#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGEBP_DuckRollingEnableCharacterHit.ChaGEBP_DuckRollingEnableCharacterHit_C
// (None)

class UClass* UChaGEBP_DuckRollingEnableCharacterHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGEBP_DuckRollingEnableCharacterHit_C");

	return Clss;
}


// ChaGEBP_DuckRollingEnableCharacterHit_C ChaGEBP_DuckRollingEnableCharacterHit.Default__ChaGEBP_DuckRollingEnableCharacterHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaGEBP_DuckRollingEnableCharacterHit_C* UChaGEBP_DuckRollingEnableCharacterHit_C::GetDefaultObj()
{
	static class UChaGEBP_DuckRollingEnableCharacterHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaGEBP_DuckRollingEnableCharacterHit_C*>(UChaGEBP_DuckRollingEnableCharacterHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


