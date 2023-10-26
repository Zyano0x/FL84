#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C
// (None)

class UClass* UUI_Lobby_Mission_Reward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Mission_Reward_C");

	return Clss;
}


// UI_Lobby_Mission_Reward_C UI_Lobby_Mission_Reward.Default__UI_Lobby_Mission_Reward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Mission_Reward_C* UUI_Lobby_Mission_Reward_C::GetDefaultObj()
{
	static class UUI_Lobby_Mission_Reward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Mission_Reward_C*>(UUI_Lobby_Mission_Reward_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.OnClicked_382AA8B344B07F258A4FCC9E9306F1C1
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Mission_Reward_C::OnClicked_382AA8B344B07F258A4FCC9E9306F1C1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "OnClicked_382AA8B344B07F258A4FCC9E9306F1C1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.OnSolarUIOpened
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mission_Reward_C::OnSolarUIOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "OnSolarUIOpened");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mission_Reward_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.ConstructCopy
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mission_Reward_C::ConstructCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "ConstructCopy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.OnSolarUIClosed
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mission_Reward_C::OnSolarUIClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "OnSolarUIClosed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Mission_Reward_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "GetModuleName");

	Params::UUI_Lobby_Mission_Reward_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Mission_Reward_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.ExecuteUbergraph_UI_Lobby_Mission_Reward
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_Mission_Reward_C::ExecuteUbergraph_UI_Lobby_Mission_Reward(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Mission_Reward_C", "ExecuteUbergraph_UI_Lobby_Mission_Reward");

	Params::UUI_Lobby_Mission_Reward_C_ExecuteUbergraph_UI_Lobby_Mission_Reward_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


