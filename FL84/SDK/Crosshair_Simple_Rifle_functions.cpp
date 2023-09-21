#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C
// (None)

class UClass* UCrosshair_Simple_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_Simple_Rifle_C");

	return Clss;
}


// Crosshair_Simple_Rifle_C Crosshair_Simple_Rifle.Default__Crosshair_Simple_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_Simple_Rifle_C* UCrosshair_Simple_Rifle_C::GetDefaultObj()
{
	static class UCrosshair_Simple_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_Simple_Rifle_C*>(UCrosshair_Simple_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.GetReloadWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_Simple_Rifle_C::GetReloadWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_C", "GetReloadWidget");

	Params::UCrosshair_Simple_Rifle_C_GetReloadWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.GetAmmoWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_Simple_Rifle_C::GetAmmoWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_C", "GetAmmoWidget");

	Params::UCrosshair_Simple_Rifle_C_GetAmmoWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCrosshair_Simple_Rifle_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCrosshair_Simple_Rifle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.ExecuteUbergraph_Crosshair_Simple_Rifle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_Simple_Rifle_C::ExecuteUbergraph_Crosshair_Simple_Rifle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Rifle_C", "ExecuteUbergraph_Crosshair_Simple_Rifle");

	Params::UCrosshair_Simple_Rifle_C_ExecuteUbergraph_Crosshair_Simple_Rifle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


