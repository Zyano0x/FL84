#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C
// (None)

class UClass* UUI_Lobby_Tips_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_Tips_Container_C");

	return Clss;
}


// UI_Lobby_Tips_Container_C UI_Lobby_Tips_Container.Default__UI_Lobby_Tips_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_Tips_Container_C* UUI_Lobby_Tips_Container_C::GetDefaultObj()
{
	static class UUI_Lobby_Tips_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_Tips_Container_C*>(UUI_Lobby_Tips_Container_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnClicked_AB1E8EE54E384692712319B630A5DF61
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Tips_Container_C::OnClicked_AB1E8EE54E384692712319B630A5DF61()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "OnClicked_AB1E8EE54E384692712319B630A5DF61");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnPressed_51E6B1D644C6FFCB2142C980FCD18B45
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UUI_Lobby_Tips_Container_C::OnPressed_51E6B1D644C6FFCB2142C980FCD18B45()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "OnPressed_51E6B1D644C6FFCB2142C980FCD18B45");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnHide
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tips_Container_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "OnHide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.OnShow
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tips_Container_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "OnShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tips_Container_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_Tips_Container_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_Tips_Container.UI_Lobby_Tips_Container_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Lobby_Tips_Container_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_Tips_Container_C", "GetModuleName");

	Params::UUI_Lobby_Tips_Container_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


