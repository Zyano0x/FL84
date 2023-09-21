#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C
// (None)

class UClass* UCrosshair_CarWeapon_Float_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_Float_C");

	return Clss;
}


// Crosshair_CarWeapon_Float_C Crosshair_CarWeapon_Float.Default__Crosshair_CarWeapon_Float_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_Float_C* UCrosshair_CarWeapon_Float_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_Float_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_Float_C*>(UCrosshair_CarWeapon_Float_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InOverload                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Float_C::OnOverloadChanged(bool InOverload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "OnOverloadChanged");

	Params::UCrosshair_CarWeapon_Float_C_OnOverloadChanged_Params Parms{};

	Parms.InOverload = InOverload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Set Charge Panel Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Float_C::Set_Charge_Panel_Size(float CallFunc_Multiply_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "Set Charge Panel Size");

	Params::UCrosshair_CarWeapon_Float_C_Set_Charge_Panel_Size_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetChargeProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Float_C::SetChargeProgress(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "SetChargeProgress");

	Params::UCrosshair_CarWeapon_Float_C_SetChargeProgress_Params Parms{};

	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetWidgetResources
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                InSecondReticlePanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InReticleDirectionImage                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InRangedImage                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    InAssistLockSizeBox                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InChangeNewAssistLockPawnPanel                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InEnterLockPawnPanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InCanvas_Dynamic                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Float_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "SetWidgetResources");

	Params::UCrosshair_CarWeapon_Float_C_SetWidgetResources_Params Parms{};


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


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_Float_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateChargeProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InbCharging                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InChargeMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InChargeProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InChargeBurstCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Float_C::OnUpdateChargeProgress(bool InbCharging, int32 InChargeMode, float InChargeProgress, int32 InChargeBurstCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "OnUpdateChargeProgress");

	Params::UCrosshair_CarWeapon_Float_C_OnUpdateChargeProgress_Params Parms{};

	Parms.InbCharging = InbCharging;
	Parms.InChargeMode = InChargeMode;
	Parms.InChargeProgress = InChargeProgress;
	Parms.InChargeBurstCount = InChargeBurstCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Float_C::OnOverloadStateChanged(bool bEnter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "OnOverloadStateChanged");

	Params::UCrosshair_CarWeapon_Float_C_OnOverloadStateChanged_Params Parms{};

	Parms.bEnter = bEnter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnCrosshairInNormalState
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCrosshair_CarWeapon_Float_C::OnCrosshairInNormalState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "OnCrosshairInNormalState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_Float_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "OnAnimationFinished");

	Params::UCrosshair_CarWeapon_Float_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateAimState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InbLockEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Float_C::OnUpdateAimState(bool InbLockEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "OnUpdateAimState");

	Params::UCrosshair_CarWeapon_Float_C_OnUpdateAimState_Params Parms{};

	Parms.InbLockEnemy = InbLockEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.ExecuteUbergraph_Crosshair_CarWeapon_Float
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbCharging                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_InChargeMode                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InChargeProgress                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InChargeBurstCount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnter                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InbLockEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCrosshair_CarWeapon_Float_C::ExecuteUbergraph_Crosshair_CarWeapon_Float(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_InbCharging, int32 K2Node_Event_InChargeMode, float K2Node_Event_InChargeProgress, int32 K2Node_Event_InChargeBurstCount, bool K2Node_Event_bEnter, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_Event_InbLockEnemy, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_Float_C", "ExecuteUbergraph_Crosshair_CarWeapon_Float");

	Params::UCrosshair_CarWeapon_Float_C_ExecuteUbergraph_Crosshair_CarWeapon_Float_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_InbCharging = K2Node_Event_InbCharging;
	Parms.K2Node_Event_InChargeMode = K2Node_Event_InChargeMode;
	Parms.K2Node_Event_InChargeProgress = K2Node_Event_InChargeProgress;
	Parms.K2Node_Event_InChargeBurstCount = K2Node_Event_InChargeBurstCount;
	Parms.K2Node_Event_bEnter = K2Node_Event_bEnter;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Event_InbLockEnemy = K2Node_Event_InbLockEnemy;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


