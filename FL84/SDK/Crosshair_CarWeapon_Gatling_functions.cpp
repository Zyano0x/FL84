#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C
// (None)

class UClass* UCrosshair_CarWeapon_Gatling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_Gatling_C");

	return Clss;
}


// Crosshair_CarWeapon_Gatling_C Crosshair_CarWeapon_Gatling.Default__Crosshair_CarWeapon_Gatling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_Gatling_C* UCrosshair_CarWeapon_Gatling_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_Gatling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_Gatling_C*>(UCrosshair_CarWeapon_Gatling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.CalculateRotAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InSpeed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFire                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OutAngle                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentDeltaAngle                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ClampAxis_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Gatling_C::CalculateRotAngle(float DeltaTime, float InSpeed, bool bFire, float* OutAngle, float CurrentDeltaAngle, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_ClampAxis_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Gatling_C", "CalculateRotAngle");

	Params::UCrosshair_CarWeapon_Gatling_C_CalculateRotAngle_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.InSpeed = InSpeed;
	Parms.bFire = bFire;
	Parms.CurrentDeltaAngle = CurrentDeltaAngle;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_ClampAxis_ReturnValue = CallFunc_ClampAxis_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAngle != nullptr)
		*OutAngle = Parms.OutAngle;

}


// Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnUpdateGatlingRoll
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaTmie                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InRollSpeedInterp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWantFire                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Gatling_C::OnUpdateGatlingRoll(float DeltaTmie, float InRollSpeedInterp, bool bWantFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Gatling_C", "OnUpdateGatlingRoll");

	Params::UCrosshair_CarWeapon_Gatling_C_OnUpdateGatlingRoll_Params Parms{};

	Parms.DeltaTmie = DeltaTmie;
	Parms.InRollSpeedInterp = InRollSpeedInterp;
	Parms.bWantFire = bWantFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnCrosshairInNormalState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_Gatling_C::OnCrosshairInNormalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Gatling_C", "OnCrosshairInNormalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.ExecuteUbergraph_Crosshair_CarWeapon_Gatling
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTmie                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InRollSpeedInterp                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWantFire                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_CalculateRotAngle_OutAngle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Gatling_C::ExecuteUbergraph_Crosshair_CarWeapon_Gatling(int32 EntryPoint, float K2Node_Event_DeltaTmie, float K2Node_Event_InRollSpeedInterp, bool K2Node_Event_bWantFire, float CallFunc_CalculateRotAngle_OutAngle, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Gatling_C", "ExecuteUbergraph_Crosshair_CarWeapon_Gatling");

	Params::UCrosshair_CarWeapon_Gatling_C_ExecuteUbergraph_Crosshair_CarWeapon_Gatling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTmie = K2Node_Event_DeltaTmie;
	Parms.K2Node_Event_InRollSpeedInterp = K2Node_Event_InRollSpeedInterp;
	Parms.K2Node_Event_bWantFire = K2Node_Event_bWantFire;
	Parms.CallFunc_CalculateRotAngle_OutAngle = CallFunc_CalculateRotAngle_OutAngle;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


