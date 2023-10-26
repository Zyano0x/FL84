#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CanDrive.GE_CanDrive_C
// (None)

class UClass* UGE_CanDrive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CanDrive_C");

	return Clss;
}


// GE_CanDrive_C GE_CanDrive.Default__GE_CanDrive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CanDrive_C* UGE_CanDrive_C::GetDefaultObj()
{
	static class UGE_CanDrive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CanDrive_C*>(UGE_CanDrive_C::StaticClass()->DefaultObject);

	return Default;
}

}


