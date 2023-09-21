#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PBags_MY_Set01.BP_PBags_MY_Set01_C
// (Actor)

class UClass* ABP_PBags_MY_Set01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PBags_MY_Set01_C");

	return Clss;
}


// BP_PBags_MY_Set01_C BP_PBags_MY_Set01.Default__BP_PBags_MY_Set01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PBags_MY_Set01_C* ABP_PBags_MY_Set01_C::GetDefaultObj()
{
	static class ABP_PBags_MY_Set01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PBags_MY_Set01_C*>(ABP_PBags_MY_Set01_C::StaticClass()->DefaultObject);

	return Default;
}

}


