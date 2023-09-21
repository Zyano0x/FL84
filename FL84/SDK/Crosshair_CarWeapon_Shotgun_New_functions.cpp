#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C
// (None)

class UClass* UCrosshair_CarWeapon_Shotgun_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_Shotgun_New_C");

	return Clss;
}


// Crosshair_CarWeapon_Shotgun_New_C Crosshair_CarWeapon_Shotgun_New.Default__Crosshair_CarWeapon_Shotgun_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_Shotgun_New_C* UCrosshair_CarWeapon_Shotgun_New_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_Shotgun_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_Shotgun_New_C*>(UCrosshair_CarWeapon_Shotgun_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ChangeAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReloadCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoCount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Shotgun_New_C::ChangeAmmoCount(int32 ReloadCount, int32 AmmoCount, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "ChangeAmmoCount");

	Params::UCrosshair_CarWeapon_Shotgun_New_C_ChangeAmmoCount_Params Parms{};

	Parms.ReloadCount = ReloadCount;
	Parms.AmmoCount = AmmoCount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.SetWidgetResources
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                InSecondReticlePanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InReticleDirectionImage                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InRangedImage                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    InAssistLockSizeBox                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InChangeNewAssistLockPawnPanel                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InEnterLockPawnPanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InCanvas_Dynamic                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Shotgun_New_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "SetWidgetResources");

	Params::UCrosshair_CarWeapon_Shotgun_New_C_SetWidgetResources_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InSecondReticlePanel != nullptr)
		*InSecondReticlePanel = Parms.InSecondReticlePanel;

	if (InReticleDirectionImage != nullptr)
		*InReticleDirectionImage = Parms.InReticleDirectionImage;

	if (InRangedImage != nullptr)
		*InRangedImage = Parms.InRangedImage;

	if (InAssistLockSizeBox != nullptr)
		*InAssistLockSizeBox = Parms.InAssistLockSizeBox;

	if (InChangeNewAssistLockPawnPanel != nullptr)
		*InChangeNewAssistLockPawnPanel = Parms.InChangeNewAssistLockPawnPanel;

	if (InEnterLockPawnPanel != nullptr)
		*InEnterLockPawnPanel = Parms.InEnterLockPawnPanel;

	if (InCanvas_Dynamic != nullptr)
		*InCanvas_Dynamic = Parms.InCanvas_Dynamic;

}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_Shotgun_New_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InbFirst                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Shotgun_New_C::OnAmmoChanged(int32 InReservedAmmo, int32 InMaxAmmo, bool InbFirst)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "OnAmmoChanged");

	Params::UCrosshair_CarWeapon_Shotgun_New_C_OnAmmoChanged_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.InbFirst = InbFirst;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              InReloadTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Shotgun_New_C::OnReloadStarted(float InReloadTime, int32 InReservedAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "OnReloadStarted");

	Params::UCrosshair_CarWeapon_Shotgun_New_C_OnReloadStarted_Params Parms{};

	Parms.InReloadTime = InReloadTime;
	Parms.InReservedAmmo = InReservedAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InbReloadSuccess                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InReloadAmmo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Shotgun_New_C::OnReloadFinished(bool InbReloadSuccess, int32 InReloadAmmo, int32 InReservedAmmo, int32 InMaxAmmo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "OnReloadFinished");

	Params::UCrosshair_CarWeapon_Shotgun_New_C_OnReloadFinished_Params Parms{};

	Parms.InbReloadSuccess = InbReloadSuccess;
	Parms.InReloadAmmo = InReloadAmmo;
	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbFirst                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InReloadTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbReloadSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InReloadAmmo                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InReservedAmmo                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InMaxAmmo                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Shotgun_New_C::ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New(int32 EntryPoint, int32 K2Node_Event_InReservedAmmo_2, int32 K2Node_Event_InMaxAmmo_1, bool K2Node_Event_InbFirst, float K2Node_Event_InReloadTime, int32 K2Node_Event_InReservedAmmo_1, bool K2Node_Event_InbReloadSuccess, int32 K2Node_Event_InReloadAmmo, int32 K2Node_Event_InReservedAmmo, int32 K2Node_Event_InMaxAmmo, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Shotgun_New_C", "ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New");

	Params::UCrosshair_CarWeapon_Shotgun_New_C_ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReservedAmmo_2 = K2Node_Event_InReservedAmmo_2;
	Parms.K2Node_Event_InMaxAmmo_1 = K2Node_Event_InMaxAmmo_1;
	Parms.K2Node_Event_InbFirst = K2Node_Event_InbFirst;
	Parms.K2Node_Event_InReloadTime = K2Node_Event_InReloadTime;
	Parms.K2Node_Event_InReservedAmmo_1 = K2Node_Event_InReservedAmmo_1;
	Parms.K2Node_Event_InbReloadSuccess = K2Node_Event_InbReloadSuccess;
	Parms.K2Node_Event_InReloadAmmo = K2Node_Event_InReloadAmmo;
	Parms.K2Node_Event_InReservedAmmo = K2Node_Event_InReservedAmmo;
	Parms.K2Node_Event_InMaxAmmo = K2Node_Event_InMaxAmmo;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


