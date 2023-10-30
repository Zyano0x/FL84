#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TabItemObj.BP_TabItemObj_C
// (None)

class UClass* UBP_TabItemObj_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TabItemObj_C");

	return Clss;
}


// BP_TabItemObj_C BP_TabItemObj.Default__BP_TabItemObj_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TabItemObj_C* UBP_TabItemObj_C::GetDefaultObj()
{
	static class UBP_TabItemObj_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TabItemObj_C*>(UBP_TabItemObj_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TabItemObj.BP_TabItemObj_C.OnDataRevised__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_TabItemObj_C::OnDataRevised__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TabItemObj_C", "OnDataRevised__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


