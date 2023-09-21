#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mphy03_RotationAnim.BP_Mphy03_RotationAnim_C
// (None)

class UClass* UBP_Mphy03_RotationAnim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mphy03_RotationAnim_C");

	return Clss;
}


// BP_Mphy03_RotationAnim_C BP_Mphy03_RotationAnim.Default__BP_Mphy03_RotationAnim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Mphy03_RotationAnim_C* UBP_Mphy03_RotationAnim_C::GetDefaultObj()
{
	static class UBP_Mphy03_RotationAnim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Mphy03_RotationAnim_C*>(UBP_Mphy03_RotationAnim_C::StaticClass()->DefaultObject);

	return Default;
}

}


