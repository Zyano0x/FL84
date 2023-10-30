#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Chip30_List.UI_Chip30_List_C
// (None)

class UClass* UUI_Chip30_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Chip30_List_C");

	return Clss;
}


// UI_Chip30_List_C UI_Chip30_List.Default__UI_Chip30_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Chip30_List_C* UUI_Chip30_List_C::GetDefaultObj()
{
	static class UUI_Chip30_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Chip30_List_C*>(UUI_Chip30_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Chip30_List.UI_Chip30_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Chip30_List_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_List_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip30_List.UI_Chip30_List_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Chip30_List_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_List_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Chip30_List.UI_Chip30_List_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Chip30_List_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Chip30_List_C", "GetModuleName");

	Params::UUI_Chip30_List_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


