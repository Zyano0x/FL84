#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Anim_LobbyCharacter_SORF_SSR_Set01.Anim_LobbyCharacter_SORF_SSR_Set01_C
// (None)

class UClass* UAnim_LobbyCharacter_SORF_SSR_Set01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anim_LobbyCharacter_SORF_SSR_Set01_C");

	return Clss;
}


// Anim_LobbyCharacter_SORF_SSR_Set01_C Anim_LobbyCharacter_SORF_SSR_Set01.Default__Anim_LobbyCharacter_SORF_SSR_Set01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnim_LobbyCharacter_SORF_SSR_Set01_C* UAnim_LobbyCharacter_SORF_SSR_Set01_C::GetDefaultObj()
{
	static class UAnim_LobbyCharacter_SORF_SSR_Set01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnim_LobbyCharacter_SORF_SSR_Set01_C*>(UAnim_LobbyCharacter_SORF_SSR_Set01_C::StaticClass()->DefaultObject);

	return Default;
}

}


