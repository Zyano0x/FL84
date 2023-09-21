#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C
// (None)

class UClass* UBP_SolarScreenEffectWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarScreenEffectWidget_C");

	return Clss;
}


// BP_SolarScreenEffectWidget_C BP_SolarScreenEffectWidget.Default__BP_SolarScreenEffectWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SolarScreenEffectWidget_C* UBP_SolarScreenEffectWidget_C::GetDefaultObj()
{
	static class UBP_SolarScreenEffectWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SolarScreenEffectWidget_C*>(UBP_SolarScreenEffectWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.FadeOutScreenEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SolarScreenEffectWidget_C::FadeOutScreenEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarScreenEffectWidget_C", "FadeOutScreenEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsFadeOutFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SolarScreenEffectWidget_C::IsFadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarScreenEffectWidget_C", "IsFadeOutFinished");

	Params::UBP_SolarScreenEffectWidget_C_IsFadeOutFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarScreenEffectWidget.BP_SolarScreenEffectWidget_C.IsInstantEffectComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_SolarScreenEffectWidget_C::IsInstantEffectComplete(bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarScreenEffectWidget_C", "IsInstantEffectComplete");

	Params::UBP_SolarScreenEffectWidget_C_IsInstantEffectComplete_Params Parms{};

	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


