#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_VH_Hover_WL04_StickyBomb_Explode.Effect_VH_Hover_WL04_StickyBomb_Explode_C
// (None)

class UClass* UEffect_VH_Hover_WL04_StickyBomb_Explode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_VH_Hover_WL04_StickyBomb_Explode_C");

	return Clss;
}


// Effect_VH_Hover_WL04_StickyBomb_Explode_C Effect_VH_Hover_WL04_StickyBomb_Explode.Default__Effect_VH_Hover_WL04_StickyBomb_Explode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEffect_VH_Hover_WL04_StickyBomb_Explode_C* UEffect_VH_Hover_WL04_StickyBomb_Explode_C::GetDefaultObj()
{
	static class UEffect_VH_Hover_WL04_StickyBomb_Explode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEffect_VH_Hover_WL04_StickyBomb_Explode_C*>(UEffect_VH_Hover_WL04_StickyBomb_Explode_C::StaticClass()->DefaultObject);

	return Default;
}

}


