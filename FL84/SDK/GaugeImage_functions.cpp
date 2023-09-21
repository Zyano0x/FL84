#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GaugeImage.GaugeImage_C
// (None)

class UClass* UGaugeImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GaugeImage_C");

	return Clss;
}


// GaugeImage_C GaugeImage.Default__GaugeImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGaugeImage_C* UGaugeImage_C::GetDefaultObj()
{
	static class UGaugeImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGaugeImage_C*>(UGaugeImage_C::StaticClass()->DefaultObject);

	return Default;
}

}


