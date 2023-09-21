#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C
// (None)

class UClass* UFX_Widget_Buff_AbilityIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FX_Widget_Buff_AbilityIncrease_C");

	return Clss;
}


// FX_Widget_Buff_AbilityIncrease_C FX_Widget_Buff_AbilityIncrease.Default__FX_Widget_Buff_AbilityIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFX_Widget_Buff_AbilityIncrease_C* UFX_Widget_Buff_AbilityIncrease_C::GetDefaultObj()
{
	static class UFX_Widget_Buff_AbilityIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFX_Widget_Buff_AbilityIncrease_C*>(UFX_Widget_Buff_AbilityIncrease_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFX_Widget_Buff_AbilityIncrease_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FX_Widget_Buff_AbilityIncrease_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FX_Widget_Buff_AbilityIncrease.FX_Widget_Buff_AbilityIncrease_C.ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFX_Widget_Buff_AbilityIncrease_C::ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FX_Widget_Buff_AbilityIncrease_C", "ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease");

	Params::UFX_Widget_Buff_AbilityIncrease_C_ExecuteUbergraph_FX_Widget_Buff_AbilityIncrease_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


