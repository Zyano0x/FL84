#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_StripBulletContainer.HUD_StripBulletContainer_C
// (None)

class UClass* UHUD_StripBulletContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_StripBulletContainer_C");

	return Clss;
}


// HUD_StripBulletContainer_C HUD_StripBulletContainer.Default__HUD_StripBulletContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_StripBulletContainer_C* UHUD_StripBulletContainer_C::GetDefaultObj()
{
	static class UHUD_StripBulletContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_StripBulletContainer_C*>(UHUD_StripBulletContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


