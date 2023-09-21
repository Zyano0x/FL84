#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LoadingBase.UI_LoadingBase_C
// (None)

class UClass* UUI_LoadingBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LoadingBase_C");

	return Clss;
}


// UI_LoadingBase_C UI_LoadingBase.Default__UI_LoadingBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LoadingBase_C* UUI_LoadingBase_C::GetDefaultObj()
{
	static class UUI_LoadingBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LoadingBase_C*>(UUI_LoadingBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LoadingBase.UI_LoadingBase_C.StartLoading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoadingBase_C::StartLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoadingBase_C", "StartLoading");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LoadingBase.UI_LoadingBase_C.FinishLoading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_LoadingBase_C::FinishLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoadingBase_C", "FinishLoading");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_LoadingBase.UI_LoadingBase_C.ExecuteUbergraph_UI_LoadingBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LoadingBase_C::ExecuteUbergraph_UI_LoadingBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LoadingBase_C", "ExecuteUbergraph_UI_LoadingBase");

	Params::UUI_LoadingBase_C_ExecuteUbergraph_UI_LoadingBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


