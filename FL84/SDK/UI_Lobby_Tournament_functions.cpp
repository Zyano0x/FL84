#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Tournament.UI_Lobby_Tournament_C
// (None)

class UClass* UUI_Lobby_Tournament_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Tournament_C");

	return Clss;
}


// UI_Lobby_Tournament_C UI_Lobby_Tournament.Default__UI_Lobby_Tournament_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Tournament_C* UUI_Lobby_Tournament_C::GetDefaultObj()
{
	static class UUI_Lobby_Tournament_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Tournament_C*>(UUI_Lobby_Tournament_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnClicked_CBFB36454DD64E981CA4D7A7763B10D7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Tournament_C::OnClicked_CBFB36454DD64E981CA4D7A7763B10D7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "OnClicked_CBFB36454DD64E981CA4D7A7763B10D7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tournament_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tournament_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tournament_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Tournament_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "GetModuleName");

	Params::UUI_Lobby_Tournament_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Tournament_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "PreConstruct");

	Params::UUI_Lobby_Tournament_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.ExecuteUbergraph_UI_Lobby_Tournament
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Tournament_C::ExecuteUbergraph_UI_Lobby_Tournament(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tournament_C", "ExecuteUbergraph_UI_Lobby_Tournament");

	Params::UUI_Lobby_Tournament_C_ExecuteUbergraph_UI_Lobby_Tournament_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


