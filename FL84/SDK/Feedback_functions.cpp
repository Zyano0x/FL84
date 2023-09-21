#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Feedback.Feedback_C
// (None)

class UClass* UFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Feedback_C");

	return Clss;
}


// Feedback_C Feedback.Default__Feedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeedback_C* UFeedback_C::GetDefaultObj()
{
	static class UFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeedback_C*>(UFeedback_C::StaticClass()->DefaultObject);

	return Default;
}

}


