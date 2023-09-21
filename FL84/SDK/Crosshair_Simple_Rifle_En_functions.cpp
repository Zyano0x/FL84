#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C
// (None)

class UClass* UCrosshair_Simple_Rifle_En_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_Simple_Rifle_En_C");

	return Clss;
}


// Crosshair_Simple_Rifle_En_C Crosshair_Simple_Rifle_En.Default__Crosshair_Simple_Rifle_En_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_Simple_Rifle_En_C* UCrosshair_Simple_Rifle_En_C::GetDefaultObj()
{
	static class UCrosshair_Simple_Rifle_En_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_Simple_Rifle_En_C*>(UCrosshair_Simple_Rifle_En_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.GetReloadWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_Simple_Rifle_En_C::GetReloadWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_En_C", "GetReloadWidget");

	Params::UCrosshair_Simple_Rifle_En_C_GetReloadWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.GetAmmoWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_Simple_Rifle_En_C::GetAmmoWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_En_C", "GetAmmoWidget");

	Params::UCrosshair_Simple_Rifle_En_C_GetAmmoWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrosshair_Simple_Rifle_En_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_En_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCrosshair_Simple_Rifle_En_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_En_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.ExecuteUbergraph_Crosshair_Simple_Rifle_En
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_Simple_Rifle_En_C::ExecuteUbergraph_Crosshair_Simple_Rifle_En(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_En_C", "ExecuteUbergraph_Crosshair_Simple_Rifle_En");

	Params::UCrosshair_Simple_Rifle_En_C_ExecuteUbergraph_Crosshair_Simple_Rifle_En_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


