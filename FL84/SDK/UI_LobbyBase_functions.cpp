#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_LobbyBase.UI_LobbyBase_C
// (None)

class UClass* UUI_LobbyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_LobbyBase_C");

	return Clss;
}


// UI_LobbyBase_C UI_LobbyBase.Default__UI_LobbyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_LobbyBase_C* UUI_LobbyBase_C::GetDefaultObj()
{
	static class UUI_LobbyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_LobbyBase_C*>(UUI_LobbyBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_LobbyBase.UI_LobbyBase_C.InitLobbyBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                InVideo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyBase_C::InitLobbyBase(class UPanelWidget* InVideo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyBase_C", "InitLobbyBase");

	Params::UUI_LobbyBase_C_InitLobbyBase_Params Parms{};

	Parms.InVideo = InVideo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_LobbyBase.UI_LobbyBase_C.AddVideoPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UUI_Lobby_Video_Hunt_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_LobbyBase_C::AddVideoPanel(const struct FMargin& K2Node_MakeStruct_Margin, const struct FAnchors& K2Node_MakeStruct_Anchors, class UUI_Lobby_Video_Hunt_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_LobbyBase_C", "AddVideoPanel");

	Params::UUI_LobbyBase_C_AddVideoPanel_Params Parms{};

	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


