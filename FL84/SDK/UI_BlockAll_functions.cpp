#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BlockAll.UI_BlockAll_C
// (None)

class UClass* UUI_BlockAll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BlockAll_C");

	return Clss;
}


// UI_BlockAll_C UI_BlockAll.Default__UI_BlockAll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BlockAll_C* UUI_BlockAll_C::GetDefaultObj()
{
	static class UUI_BlockAll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BlockAll_C*>(UUI_BlockAll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BlockAll.UI_BlockAll_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BlockAll_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BlockAll_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BlockAll.UI_BlockAll_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BlockAll_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BlockAll_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BlockAll.UI_BlockAll_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_BlockAll_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BlockAll_C", "GetModuleName");

	Params::UUI_BlockAll_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


