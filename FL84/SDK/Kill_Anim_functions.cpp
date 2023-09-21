#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Kill_Anim.Kill_Anim_C
// (None)

class UClass* UKill_Anim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kill_Anim_C");

	return Clss;
}


// Kill_Anim_C Kill_Anim.Default__Kill_Anim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKill_Anim_C* UKill_Anim_C::GetDefaultObj()
{
	static class UKill_Anim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKill_Anim_C*>(UKill_Anim_C::StaticClass()->DefaultObject);

	return Default;
}

}


