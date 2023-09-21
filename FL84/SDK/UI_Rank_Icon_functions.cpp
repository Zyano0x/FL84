#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Rank_Icon.UI_Rank_Icon_C
// (None)

class UClass* UUI_Rank_Icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Rank_Icon_C");

	return Clss;
}


// UI_Rank_Icon_C UI_Rank_Icon.Default__UI_Rank_Icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Rank_Icon_C* UUI_Rank_Icon_C::GetDefaultObj()
{
	static class UUI_Rank_Icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Rank_Icon_C*>(UUI_Rank_Icon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Rank_Icon.UI_Rank_Icon_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Rank_Icon_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rank_Icon_C", "GetModuleName");

	Params::UUI_Rank_Icon_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


