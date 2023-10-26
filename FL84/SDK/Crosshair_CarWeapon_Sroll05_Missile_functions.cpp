#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C
// (None)

class UClass* UCrosshair_CarWeapon_Sroll05_Missile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_Sroll05_Missile_C");

	return Clss;
}


// Crosshair_CarWeapon_Sroll05_Missile_C Crosshair_CarWeapon_Sroll05_Missile.Default__Crosshair_CarWeapon_Sroll05_Missile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_Sroll05_Missile_C* UCrosshair_CarWeapon_Sroll05_Missile_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_Sroll05_Missile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_Sroll05_Missile_C*>(UCrosshair_CarWeapon_Sroll05_Missile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ChangeAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmmoCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Sroll05_Missile_C::ChangeAmmoCount(int32 AmmoCount, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Sroll05_Missile_C", "ChangeAmmoCount");

	Params::UCrosshair_CarWeapon_Sroll05_Missile_C_ChangeAmmoCount_Params Parms{};

	Parms.AmmoCount = AmmoCount;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbFirst                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Sroll05_Missile_C::OnAmmoChanged(int32 InReservedAmmo, int32 InMaxAmmo, bool InbFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Sroll05_Missile_C", "OnAmmoChanged");

	Params::UCrosshair_CarWeapon_Sroll05_Missile_C_OnAmmoChanged_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InbFirst = InbFirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateVehicleRotationPitch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              InPitch                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Sroll05_Missile_C::OnUpdateVehicleRotationPitch(float InPitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Sroll05_Missile_C", "OnUpdateVehicleRotationPitch");

	Params::UCrosshair_CarWeapon_Sroll05_Missile_C_OnUpdateVehicleRotationPitch_Params Parms{};

	Parms.InPitch = InPitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnReloadFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InbReloadSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Sroll05_Missile_C::OnReloadFinished(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Sroll05_Missile_C", "OnReloadFinished");

	Params::UCrosshair_CarWeapon_Sroll05_Missile_C_OnReloadFinished_Params Parms{};

	Parms.InbReloadSuccess = InbReloadSuccess;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateReloadProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InReloadProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Sroll05_Missile_C::OnUpdateReloadProgress(float InReloadProgress, int32 InReservedAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Sroll05_Missile_C", "OnUpdateReloadProgress");

	Params::UCrosshair_CarWeapon_Sroll05_Missile_C_OnUpdateReloadProgress_Params Parms{};

	Parms.InReloadProgress = InReloadProgress;
	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbFirst                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InPitch                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbReloadSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InReloadAmmo                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InReloadProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Sroll05_Missile_C::ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile(int32 EntryPoint, int32 K2Node_Event_InReservedAmmo_2, int32 K2Node_Event_InMaxAmmo_2, bool K2Node_Event_InbFirst, float K2Node_Event_InPitch, float CallFunc_Multiply_FloatFloat_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InReservedAmmo_1, int32 K2Node_Event_InMaxAmmo_1, float K2Node_Event_InReloadProgress, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Sroll05_Missile_C", "ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile");

	Params::UCrosshair_CarWeapon_Sroll05_Missile_C_ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReservedAmmo_2 = K2Node_Event_InReservedAmmo_2;
	Parms.K2Node_Event_InMaxAmmo_2 = K2Node_Event_InMaxAmmo_2;
	Parms.K2Node_Event_InbFirst = K2Node_Event_InbFirst;
	Parms.K2Node_Event_InPitch = K2Node_Event_InPitch;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_InbReloadSuccess = K2Node_Event_InbReloadSuccess;
	Parms.K2Node_Event_InReloadAmmo = K2Node_Event_InReloadAmmo;
	Parms.K2Node_Event_InReservedAmmo_1 = K2Node_Event_InReservedAmmo_1;
	Parms.K2Node_Event_InMaxAmmo_1 = K2Node_Event_InMaxAmmo_1;
	Parms.K2Node_Event_InReloadProgress = K2Node_Event_InReloadProgress;
	Parms.K2Node_Event_InReservedAmmo = K2Node_Event_InReservedAmmo;
	Parms.K2Node_Event_InMaxAmmo = K2Node_Event_InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}

}


