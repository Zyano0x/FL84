#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_AutoFire_Anim.Crosshair_AutoFire_Anim_C
// (None)

class UClass* UCrosshair_AutoFire_Anim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_AutoFire_Anim_C");

	return Clss;
}


// Crosshair_AutoFire_Anim_C Crosshair_AutoFire_Anim.Default__Crosshair_AutoFire_Anim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_AutoFire_Anim_C* UCrosshair_AutoFire_Anim_C::GetDefaultObj()
{
	static class UCrosshair_AutoFire_Anim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_AutoFire_Anim_C*>(UCrosshair_AutoFire_Anim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_AutoFire_Anim.Crosshair_AutoFire_Anim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCrosshair_AutoFire_Anim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_AutoFire_Anim_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_AutoFire_Anim.Crosshair_AutoFire_Anim_C.ExecuteUbergraph_Crosshair_AutoFire_Anim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_AutoFire_Anim_C::ExecuteUbergraph_Crosshair_AutoFire_Anim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_AutoFire_Anim_C", "ExecuteUbergraph_Crosshair_AutoFire_Anim");

	Params::UCrosshair_AutoFire_Anim_C_ExecuteUbergraph_Crosshair_AutoFire_Anim_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


