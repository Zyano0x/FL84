#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_DGExchange_TarMe.ChaGCBP_DGExchange_TarMe_C
// (Actor)

class UClass* AChaGCBP_DGExchange_TarMe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_DGExchange_TarMe_C");

	return Clss;
}


// ChaGCBP_DGExchange_TarMe_C ChaGCBP_DGExchange_TarMe.Default__ChaGCBP_DGExchange_TarMe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_DGExchange_TarMe_C* AChaGCBP_DGExchange_TarMe_C::GetDefaultObj()
{
	static class AChaGCBP_DGExchange_TarMe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_DGExchange_TarMe_C*>(AChaGCBP_DGExchange_TarMe_C::StaticClass()->DefaultObject);

	return Default;
}

}


