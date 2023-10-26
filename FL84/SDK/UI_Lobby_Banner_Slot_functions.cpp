#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C
// (None)

class UClass* UUI_Lobby_Banner_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Banner_Slot_C");

	return Clss;
}


// UI_Lobby_Banner_Slot_C UI_Lobby_Banner_Slot.Default__UI_Lobby_Banner_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Banner_Slot_C* UUI_Lobby_Banner_Slot_C::GetDefaultObj()
{
	static class UUI_Lobby_Banner_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Banner_Slot_C*>(UUI_Lobby_Banner_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Banner_Slot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Banner_Slot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.OnListItemObjectSetCopy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Banner_Slot_C::OnListItemObjectSetCopy(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "OnListItemObjectSetCopy");

	Params::UUI_Lobby_Banner_Slot_C_OnListItemObjectSetCopy_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Banner_Slot_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "GetModuleName");

	Params::UUI_Lobby_Banner_Slot_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Banner_Slot_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Banner_Slot_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "BP_OnItemExpansionChanged");

	Params::UUI_Lobby_Banner_Slot_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Banner_Slot_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "BP_OnItemSelectionChanged");

	Params::UUI_Lobby_Banner_Slot_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Banner_Slot_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "OnListItemObjectSet");

	Params::UUI_Lobby_Banner_Slot_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.ExecuteUbergraph_UI_Lobby_Banner_Slot
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Banner_Slot_C::ExecuteUbergraph_UI_Lobby_Banner_Slot(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Banner_Slot_C", "ExecuteUbergraph_UI_Lobby_Banner_Slot");

	Params::UUI_Lobby_Banner_Slot_C_ExecuteUbergraph_UI_Lobby_Banner_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}


