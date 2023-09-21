#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SORF_SSR_Set01_LodP_Prop.BP_SORF_SSR_Set01_LodP_Prop_C
// (Actor)

class UClass* ABP_SORF_SSR_Set01_LodP_Prop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SORF_SSR_Set01_LodP_Prop_C");

	return Clss;
}


// BP_SORF_SSR_Set01_LodP_Prop_C BP_SORF_SSR_Set01_LodP_Prop.Default__BP_SORF_SSR_Set01_LodP_Prop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SORF_SSR_Set01_LodP_Prop_C* ABP_SORF_SSR_Set01_LodP_Prop_C::GetDefaultObj()
{
	static class ABP_SORF_SSR_Set01_LodP_Prop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SORF_SSR_Set01_LodP_Prop_C*>(ABP_SORF_SSR_Set01_LodP_Prop_C::StaticClass()->DefaultObject);

	return Default;
}

}


