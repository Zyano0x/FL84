#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_HeadHit_Player.HUD_HeadHit_Player_C
// (None)

class UClass* UHUD_HeadHit_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_HeadHit_Player_C");

	return Clss;
}


// HUD_HeadHit_Player_C HUD_HeadHit_Player.Default__HUD_HeadHit_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_HeadHit_Player_C* UHUD_HeadHit_Player_C::GetDefaultObj()
{
	static class UHUD_HeadHit_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_HeadHit_Player_C*>(UHUD_HeadHit_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


