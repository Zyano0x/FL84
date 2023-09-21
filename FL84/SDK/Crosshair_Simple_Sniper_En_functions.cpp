#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C
// (None)

class UClass* UCrosshair_Simple_Sniper_En_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_Simple_Sniper_En_C");

	return Clss;
}


// Crosshair_Simple_Sniper_En_C Crosshair_Simple_Sniper_En.Default__Crosshair_Simple_Sniper_En_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_Simple_Sniper_En_C* UCrosshair_Simple_Sniper_En_C::GetDefaultObj()
{
	static class UCrosshair_Simple_Sniper_En_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_Simple_Sniper_En_C*>(UCrosshair_Simple_Sniper_En_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C.GetChargeWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_Simple_Sniper_En_C::GetChargeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_Sniper_En_C", "GetChargeWidget");

	Params::UCrosshair_Simple_Sniper_En_C_GetChargeWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


