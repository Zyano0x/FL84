#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C
// (None)

class UClass* UCrosshair_CarWeapon_IronGun_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_IronGun_New_C");

	return Clss;
}


// Crosshair_CarWeapon_IronGun_New_C Crosshair_CarWeapon_IronGun_New.Default__Crosshair_CarWeapon_IronGun_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_IronGun_New_C* UCrosshair_CarWeapon_IronGun_New_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_IronGun_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_IronGun_New_C*>(UCrosshair_CarWeapon_IronGun_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ChangeProgressBarColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                InProgressBar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                InBackgroundColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                InFillImageColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UCrosshair_CarWeapon_IronGun_New_C::ChangeProgressBarColor(class UProgressBar* InProgressBar, const struct FLinearColor& InBackgroundColor, const struct FLinearColor& InFillImageColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "ChangeProgressBarColor");

	Params::UCrosshair_CarWeapon_IronGun_New_C_ChangeProgressBarColor_Params Parms{};

	Parms.InProgressBar = InProgressBar;
	Parms.InBackgroundColor = InBackgroundColor;
	Parms.InFillImageColor = InFillImageColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetPrograssPrecent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                InProgressBar                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_IronGun_New_C::SetPrograssPrecent(float Percent, int32 Index, class UProgressBar* InProgressBar, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "SetPrograssPrecent");

	Params::UCrosshair_CarWeapon_IronGun_New_C_SetPrograssPrecent_Params Parms{};

	Parms.Percent = Percent;
	Parms.Index = Index;
	Parms.InProgressBar = InProgressBar;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.GetChargeWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_CarWeapon_IronGun_New_C::GetChargeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "GetChargeWidget");

	Params::UCrosshair_CarWeapon_IronGun_New_C_GetChargeWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetWidgetResources
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                InSecondReticlePanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InReticleDirectionImage                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InRangedImage                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    InAssistLockSizeBox                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InChangeNewAssistLockPawnPanel                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InEnterLockPawnPanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InCanvas_Dynamic                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_IronGun_New_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "SetWidgetResources");

	Params::UCrosshair_CarWeapon_IronGun_New_C_SetWidgetResources_Params Parms{};


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


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateChargeProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InbCharging                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InChargeMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InChargeProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InChargeBurstCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_IronGun_New_C::OnUpdateChargeProgress(bool InbCharging, int32 InChargeMode, float InChargeProgress, int32 InChargeBurstCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "OnUpdateChargeProgress");

	Params::UCrosshair_CarWeapon_IronGun_New_C_OnUpdateChargeProgress_Params Parms{};

	Parms.InbCharging = InbCharging;
	Parms.InChargeMode = InChargeMode;
	Parms.InChargeProgress = InChargeProgress;
	Parms.InChargeBurstCount = InChargeBurstCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateAimState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InbLockEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_IronGun_New_C::OnUpdateAimState(bool InbLockEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "OnUpdateAimState");

	Params::UCrosshair_CarWeapon_IronGun_New_C_OnUpdateAimState_Params Parms{};

	Parms.InbLockEnemy = InbLockEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnPlayWeaponSpecialFire
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECrossHairSpecialFireStateInState                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_IronGun_New_C::OnPlayWeaponSpecialFire(enum class ECrossHairSpecialFireState InState, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "OnPlayWeaponSpecialFire");

	Params::UCrosshair_CarWeapon_IronGun_New_C_OnPlayWeaponSpecialFire_Params Parms{};

	Parms.InState = InState;
	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnCrosshairInNormalState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_IronGun_New_C::OnCrosshairInNormalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "OnCrosshairInNormalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnShowVehicleWeaponCrossHair
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_IronGun_New_C::OnShowVehicleWeaponCrossHair()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "OnShowVehicleWeaponCrossHair");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECrossHairSpecialFireStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbCharging                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InChargeMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InChargeProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InChargeBurstCount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbLockEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECrossHairSpecialFireStateK2Node_Event_InState                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PlaySound2Dbyname_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_IronGun_New_C::ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New(int32 EntryPoint, enum class ECrossHairSpecialFireState Temp_byte_Variable, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, int32 K2Node_Event_InChargeBurstCount, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_FClamp_ReturnValue, bool K2Node_Event_InbLockEnemy, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ECrossHairSpecialFireState K2Node_Event_InState, float K2Node_Event_PlayRate, class UWidgetAnimation* K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32 CallFunc_PlaySound2Dbyname_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_IronGun_New_C", "ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New");

	Params::UCrosshair_CarWeapon_IronGun_New_C_ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_InbCharging = K2Node_Event_InbCharging;
	Parms.K2Node_Event_InChargeMode = K2Node_Event_InChargeMode;
	Parms.K2Node_Event_InChargeProgress = K2Node_Event_InChargeProgress;
	Parms.K2Node_Event_InChargeBurstCount = K2Node_Event_InChargeBurstCount;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_InbLockEnemy = K2Node_Event_InbLockEnemy;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Event_InState = K2Node_Event_InState;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlaySound2Dbyname_ReturnValue = CallFunc_PlaySound2Dbyname_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


