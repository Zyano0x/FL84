#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InvincibleActorEffect.BP_InvincibleActorEffect_C
// (None)

class UClass* UBP_InvincibleActorEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InvincibleActorEffect_C");

	return Clss;
}


// BP_InvincibleActorEffect_C BP_InvincibleActorEffect.Default__BP_InvincibleActorEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InvincibleActorEffect_C* UBP_InvincibleActorEffect_C::GetDefaultObj()
{
	static class UBP_InvincibleActorEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InvincibleActorEffect_C*>(UBP_InvincibleActorEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


