#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C
// (None)

class UClass* UHUD_Bullet_Simple_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_Bullet_Simple_Light_C");

	return Clss;
}


// HUD_Bullet_Simple_Light_C HUD_Bullet_Simple_Light.Default__HUD_Bullet_Simple_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_Bullet_Simple_Light_C* UHUD_Bullet_Simple_Light_C::GetDefaultObj()
{
	static class UHUD_Bullet_Simple_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_Bullet_Simple_Light_C*>(UHUD_Bullet_Simple_Light_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHUD_Bullet_Simple_Light_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_Light_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_Light_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_Light_C", "BP_OnItemExpansionChanged");

	Params::UHUD_Bullet_Simple_Light_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_Light_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_Light_C", "BP_OnItemSelectionChanged");

	Params::UHUD_Bullet_Simple_Light_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_Bullet_Simple_Light_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_Light_C", "OnListItemObjectSet");

	Params::UHUD_Bullet_Simple_Light_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.ExecuteUbergraph_HUD_Bullet_Simple_Light
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_Bullet_Simple_Light_C::ExecuteUbergraph_HUD_Bullet_Simple_Light(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_Bullet_Simple_Light_C", "ExecuteUbergraph_HUD_Bullet_Simple_Light");

	Params::UHUD_Bullet_Simple_Light_C_ExecuteUbergraph_HUD_Bullet_Simple_Light_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


