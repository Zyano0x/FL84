#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_DGExchange_TarDG.ChaGCBP_DGExchange_TarDG_C
// (Actor)

class UClass* AChaGCBP_DGExchange_TarDG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_DGExchange_TarDG_C");

	return Clss;
}


// ChaGCBP_DGExchange_TarDG_C ChaGCBP_DGExchange_TarDG.Default__ChaGCBP_DGExchange_TarDG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_DGExchange_TarDG_C* AChaGCBP_DGExchange_TarDG_C::GetDefaultObj()
{
	static class AChaGCBP_DGExchange_TarDG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_DGExchange_TarDG_C*>(AChaGCBP_DGExchange_TarDG_C::StaticClass()->DefaultObject);

	return Default;
}

}


