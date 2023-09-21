#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_C_EdgeLitControl.BP_C_EdgeLitControl_C
// (Actor)

class UClass* ABP_C_EdgeLitControl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_C_EdgeLitControl_C");

	return Clss;
}


// BP_C_EdgeLitControl_C BP_C_EdgeLitControl.Default__BP_C_EdgeLitControl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_C_EdgeLitControl_C* ABP_C_EdgeLitControl_C::GetDefaultObj()
{
	static class ABP_C_EdgeLitControl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_C_EdgeLitControl_C*>(ABP_C_EdgeLitControl_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_C_EdgeLitControl.BP_C_EdgeLitControl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_C_EdgeLitControl_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_C_EdgeLitControl_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


