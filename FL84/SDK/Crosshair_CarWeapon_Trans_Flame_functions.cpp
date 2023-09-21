#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C
// (None)

class UClass* UCrosshair_CarWeapon_Trans_Flame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_Trans_Flame_C");

	return Clss;
}


// Crosshair_CarWeapon_Trans_Flame_C Crosshair_CarWeapon_Trans_Flame.Default__Crosshair_CarWeapon_Trans_Flame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_Trans_Flame_C* UCrosshair_CarWeapon_Trans_Flame_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_Trans_Flame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_Trans_Flame_C*>(UCrosshair_CarWeapon_Trans_Flame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_Trans_Flame_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Trans_Flame_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnTransformerWeaponChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ETransformerType        InType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Trans_Flame_C::OnTransformerWeaponChanged(enum class ETransformerType InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Trans_Flame_C", "OnTransformerWeaponChanged");

	Params::UCrosshair_CarWeapon_Trans_Flame_C_OnTransformerWeaponChanged_Params Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnOverloadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Trans_Flame_C::OnOverloadStateChanged(bool bEnter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Trans_Flame_C", "OnOverloadStateChanged");

	Params::UCrosshair_CarWeapon_Trans_Flame_C_OnOverloadStateChanged_Params Parms{};

	Parms.bEnter = bEnter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnCrosshairInNormalState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_Trans_Flame_C::OnCrosshairInNormalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Trans_Flame_C", "OnCrosshairInNormalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETransformerType        K2Node_Event_InType                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnter                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Trans_Flame_C::ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame(int32 EntryPoint, enum class ETransformerType K2Node_Event_InType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bEnter, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Trans_Flame_C", "ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame");

	Params::UCrosshair_CarWeapon_Trans_Flame_C_ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InType = K2Node_Event_InType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_bEnter = K2Node_Event_bEnter;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


