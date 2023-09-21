#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_9A01_CameraAnim.BP_9A01_CameraAnim_C
// (None)

class UClass* UBP_9A01_CameraAnim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_9A01_CameraAnim_C");

	return Clss;
}


// BP_9A01_CameraAnim_C BP_9A01_CameraAnim.Default__BP_9A01_CameraAnim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_9A01_CameraAnim_C* UBP_9A01_CameraAnim_C::GetDefaultObj()
{
	static class UBP_9A01_CameraAnim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_9A01_CameraAnim_C*>(UBP_9A01_CameraAnim_C::StaticClass()->DefaultObject);

	return Default;
}

}


