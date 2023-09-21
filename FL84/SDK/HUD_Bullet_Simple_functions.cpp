#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_Bullet_Simple.HUD_Bullet_Simple_C
// (None)

class UClass* UHUD_Bullet_Simple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_Bullet_Simple_C");

	return Clss;
}


// HUD_Bullet_Simple_C HUD_Bullet_Simple.Default__HUD_Bullet_Simple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_Bullet_Simple_C* UHUD_Bullet_Simple_C::GetDefaultObj()
{
	static class UHUD_Bullet_Simple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_Bullet_Simple_C*>(UHUD_Bullet_Simple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.ReloadFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InReservedAmmo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InMaxAmmo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Bullet_Simple_C::ReloadFinish(int32 InReservedAmmo, int32 InMaxAmmo, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "ReloadFinish");

	Params::UHUD_Bullet_Simple_C_ReloadFinish_Params Parms{};

	Parms.InReservedAmmo = InReservedAmmo;
	Parms.InMaxAmmo = InMaxAmmo;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.SetBulletLightEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InProgress                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_C::SetBulletLightEffect(float InProgress, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "SetBulletLightEffect");

	Params::UHUD_Bullet_Simple_C_SetBulletLightEffect_Params Parms{};

	Parms.InProgress = InProgress;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.GetBulletGaugeWidget
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                 OutBulletGaugeWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Bullet_Simple_C::GetBulletGaugeWidget(class UUserWidget** OutBulletGaugeWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "GetBulletGaugeWidget");

	Params::UHUD_Bullet_Simple_C_GetBulletGaugeWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutBulletGaugeWidget != nullptr)
		*OutBulletGaugeWidget = Parms.OutBulletGaugeWidget;

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUD_Bullet_Simple_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "BP_OnItemExpansionChanged");

	Params::UHUD_Bullet_Simple_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "BP_OnItemSelectionChanged");

	Params::UHUD_Bullet_Simple_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Bullet_Simple_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "OnListItemObjectSet");

	Params::UHUD_Bullet_Simple_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "PreConstruct");

	Params::UHUD_Bullet_Simple_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.ExecuteUbergraph_HUD_Bullet_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Bullet_Simple_C::ExecuteUbergraph_HUD_Bullet_Simple(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_C", "ExecuteUbergraph_HUD_Bullet_Simple");

	Params::UHUD_Bullet_Simple_C_ExecuteUbergraph_HUD_Bullet_Simple_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}

}


