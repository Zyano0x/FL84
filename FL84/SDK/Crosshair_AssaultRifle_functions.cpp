#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_AssaultRifle.Crosshair_AssaultRifle_C
// (None)

class UClass* UCrosshair_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_AssaultRifle_C");

	return Clss;
}


// Crosshair_AssaultRifle_C Crosshair_AssaultRifle.Default__Crosshair_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_AssaultRifle_C* UCrosshair_AssaultRifle_C::GetDefaultObj()
{
	static class UCrosshair_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_AssaultRifle_C*>(UCrosshair_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_AssaultRifle.Crosshair_AssaultRifle_C.GetAmmoWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_AssaultRifle_C::GetAmmoWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_AssaultRifle_C", "GetAmmoWidget");

	Params::UCrosshair_AssaultRifle_C_GetAmmoWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_AssaultRifle.Crosshair_AssaultRifle_C.GetReloadWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_AssaultRifle_C::GetReloadWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_AssaultRifle_C", "GetReloadWidget");

	Params::UCrosshair_AssaultRifle_C_GetReloadWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


