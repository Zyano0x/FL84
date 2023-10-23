#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DissolvedDeath.BP_DissolvedDeath_C
// (None)

class UClass* UBP_DissolvedDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DissolvedDeath_C");

	return Clss;
}


// BP_DissolvedDeath_C BP_DissolvedDeath.Default__BP_DissolvedDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DissolvedDeath_C* UBP_DissolvedDeath_C::GetDefaultObj()
{
	static class UBP_DissolvedDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DissolvedDeath_C*>(UBP_DissolvedDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


