#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ActivityBtn.UI_ActivityBtn_C
// (None)

class UClass* UUI_ActivityBtn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ActivityBtn_C");

	return Clss;
}


// UI_ActivityBtn_C UI_ActivityBtn.Default__UI_ActivityBtn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ActivityBtn_C* UUI_ActivityBtn_C::GetDefaultObj()
{
	static class UUI_ActivityBtn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ActivityBtn_C*>(UUI_ActivityBtn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ActivityBtn.UI_ActivityBtn_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_ActivityBtn_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ActivityBtn_C", "GetModuleName");

	Params::UUI_ActivityBtn_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ActivityBtn.UI_ActivityBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ActivityBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ActivityBtn_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ActivityBtn.UI_ActivityBtn_C.BP_EventSetBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ActivityBtn_C::BP_EventSetBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ActivityBtn_C", "BP_EventSetBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ActivityBtn.UI_ActivityBtn_C.ExecuteUbergraph_UI_ActivityBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ActivityBtn_C::ExecuteUbergraph_UI_ActivityBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ActivityBtn_C", "ExecuteUbergraph_UI_ActivityBtn");

	Params::UUI_ActivityBtn_C_ExecuteUbergraph_UI_ActivityBtn_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


