#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TeamInvite_Container.UI_TeamInvite_Container_C
// (None)

class UClass* UUI_TeamInvite_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TeamInvite_Container_C");

	return Clss;
}


// UI_TeamInvite_Container_C UI_TeamInvite_Container.Default__UI_TeamInvite_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TeamInvite_Container_C* UUI_TeamInvite_Container_C::GetDefaultObj()
{
	static class UUI_TeamInvite_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TeamInvite_Container_C*>(UUI_TeamInvite_Container_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TeamInvite_Container.UI_TeamInvite_Container_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_TeamInvite_Container_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TeamInvite_Container_C", "GetModuleName");

	Params::UUI_TeamInvite_Container_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


