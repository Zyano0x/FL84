#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraPreskyward_New.BP_CameraPreskyward_New_C
// (None)

class UClass* UBP_CameraPreskyward_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraPreskyward_New_C");

	return Clss;
}


// BP_CameraPreskyward_New_C BP_CameraPreskyward_New.Default__BP_CameraPreskyward_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraPreskyward_New_C* UBP_CameraPreskyward_New_C::GetDefaultObj()
{
	static class UBP_CameraPreskyward_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraPreskyward_New_C*>(UBP_CameraPreskyward_New_C::StaticClass()->DefaultObject);

	return Default;
}

}


