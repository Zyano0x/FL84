#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_Emoji_List.UI_Component_Emoji_List_C
// (None)

class UClass* UUI_Component_Emoji_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_Emoji_List_C");

	return Clss;
}


// UI_Component_Emoji_List_C UI_Component_Emoji_List.Default__UI_Component_Emoji_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_Emoji_List_C* UUI_Component_Emoji_List_C::GetDefaultObj()
{
	static class UUI_Component_Emoji_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_Emoji_List_C*>(UUI_Component_Emoji_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Component_Emoji_List_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Emoji_List_C", "GetModuleName");

	Params::UUI_Component_Emoji_List_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


