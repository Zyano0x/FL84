#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rifle_WL03_Set00_Preview.BP_Rifle_WL03_Set00_Preview_C
// (Actor)

class UClass* ABP_Rifle_WL03_Set00_Preview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rifle_WL03_Set00_Preview_C");

	return Clss;
}


// BP_Rifle_WL03_Set00_Preview_C BP_Rifle_WL03_Set00_Preview.Default__BP_Rifle_WL03_Set00_Preview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rifle_WL03_Set00_Preview_C* ABP_Rifle_WL03_Set00_Preview_C::GetDefaultObj()
{
	static class ABP_Rifle_WL03_Set00_Preview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rifle_WL03_Set00_Preview_C*>(ABP_Rifle_WL03_Set00_Preview_C::StaticClass()->DefaultObject);

	return Default;
}

}


