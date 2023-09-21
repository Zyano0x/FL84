#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewRichTextBlockDecorator.NewRichTextBlockDecorator_C
// (None)

class UClass* UNewRichTextBlockDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewRichTextBlockDecorator_C");

	return Clss;
}


// NewRichTextBlockDecorator_C NewRichTextBlockDecorator.Default__NewRichTextBlockDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewRichTextBlockDecorator_C* UNewRichTextBlockDecorator_C::GetDefaultObj()
{
	static class UNewRichTextBlockDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewRichTextBlockDecorator_C*>(UNewRichTextBlockDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


