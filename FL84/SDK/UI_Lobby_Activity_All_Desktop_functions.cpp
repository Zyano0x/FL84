#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C
// (None)

class UClass* UUI_Lobby_Activity_All_Desktop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Activity_All_Desktop_C");

	return Clss;
}


// UI_Lobby_Activity_All_Desktop_C UI_Lobby_Activity_All_Desktop.Default__UI_Lobby_Activity_All_Desktop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Activity_All_Desktop_C* UUI_Lobby_Activity_All_Desktop_C::GetDefaultObj()
{
	static class UUI_Lobby_Activity_All_Desktop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Activity_All_Desktop_C*>(UUI_Lobby_Activity_All_Desktop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.SetStateDesktop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_TabLobbyItemState     StateHD                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_TabLobbyItemState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Activity_All_Desktop_C::SetStateDesktop(enum class E_TabLobbyItemState StateHD, enum class E_TabLobbyItemState Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Activity_All_Desktop_C", "SetStateDesktop");

	Params::UUI_Lobby_Activity_All_Desktop_C_SetStateDesktop_Params Parms{};

	Parms.StateHD = StateHD;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Activity_All_Desktop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Activity_All_Desktop_C", "PreConstruct");

	Params::UUI_Lobby_Activity_All_Desktop_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.ExecuteUbergraph_UI_Lobby_Activity_All_Desktop
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Activity_All_Desktop_C::ExecuteUbergraph_UI_Lobby_Activity_All_Desktop(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Activity_All_Desktop_C", "ExecuteUbergraph_UI_Lobby_Activity_All_Desktop");

	Params::UUI_Lobby_Activity_All_Desktop_C_ExecuteUbergraph_UI_Lobby_Activity_All_Desktop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


