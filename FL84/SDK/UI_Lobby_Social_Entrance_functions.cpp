#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C
// (None)

class UClass* UUI_Lobby_Social_Entrance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Social_Entrance_C");

	return Clss;
}


// UI_Lobby_Social_Entrance_C UI_Lobby_Social_Entrance.Default__UI_Lobby_Social_Entrance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Social_Entrance_C* UUI_Lobby_Social_Entrance_C::GetDefaultObj()
{
	static class UUI_Lobby_Social_Entrance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Social_Entrance_C*>(UUI_Lobby_Social_Entrance_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_1C142EEB49D749AB796A0E895B9AC0DC
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnClicked_1C142EEB49D749AB796A0E895B9AC0DC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnClicked_1C142EEB49D749AB796A0E895B9AC0DC");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_A4F55EA14282B4D4F05FE1B5BEEB1D59
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnClicked_A4F55EA14282B4D4F05FE1B5BEEB1D59()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnClicked_A4F55EA14282B4D4F05FE1B5BEEB1D59");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_529638F3424FD63C5824FB89D6FDD1F7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnClicked_529638F3424FD63C5824FB89D6FDD1F7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnClicked_529638F3424FD63C5824FB89D6FDD1F7");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_E0DE3C7843A2F6DFB314DFB07EB9D314
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnClicked_E0DE3C7843A2F6DFB314DFB07EB9D314()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnClicked_E0DE3C7843A2F6DFB314DFB07EB9D314");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_C0D64C9349DDB2953C031CAB84FC1EC4
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnClicked_C0D64C9349DDB2953C031CAB84FC1EC4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnClicked_C0D64C9349DDB2953C031CAB84FC1EC4");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_B44DBFFC4DBCF1E8B8E803AA504F9666
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnClicked_B44DBFFC4DBCF1E8B8E803AA504F9666()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnClicked_B44DBFFC4DBCF1E8B8E803AA504F9666");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Social_Entrance_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ConstructCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Social_Entrance_C::ConstructCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "ConstructCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Social_Entrance_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Social_Entrance_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "GetModuleName");

	Params::UUI_Lobby_Social_Entrance_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ShowGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowGuide                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Social_Entrance_C::ShowGuide(bool ShowGuide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "ShowGuide");

	Params::UUI_Lobby_Social_Entrance_C_ShowGuide_Params Parms{};

	Parms.ShowGuide = ShowGuide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Social_Entrance_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "PreConstruct");

	Params::UUI_Lobby_Social_Entrance_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Social_Entrance_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ExecuteUbergraph_UI_Lobby_Social_Entrance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Lobby_Social_Entrance_C::ExecuteUbergraph_UI_Lobby_Social_Entrance(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Social_Entrance_C", "ExecuteUbergraph_UI_Lobby_Social_Entrance");

	Params::UUI_Lobby_Social_Entrance_C_ExecuteUbergraph_UI_Lobby_Social_Entrance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


