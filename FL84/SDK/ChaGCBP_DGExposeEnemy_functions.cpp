#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_DGExposeEnemy.ChaGCBP_DGExposeEnemy_C
// (Actor)

class UClass* AChaGCBP_DGExposeEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_DGExposeEnemy_C");

	return Clss;
}


// ChaGCBP_DGExposeEnemy_C ChaGCBP_DGExposeEnemy.Default__ChaGCBP_DGExposeEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_DGExposeEnemy_C* AChaGCBP_DGExposeEnemy_C::GetDefaultObj()
{
	static class AChaGCBP_DGExposeEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_DGExposeEnemy_C*>(AChaGCBP_DGExposeEnemy_C::StaticClass()->DefaultObject);

	return Default;
}

}


