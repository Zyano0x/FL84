#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Component_Emoji.UI_Component_Emoji_C
// (None)

class UClass* UUI_Component_Emoji_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Component_Emoji_C");

	return Clss;
}


// UI_Component_Emoji_C UI_Component_Emoji.Default__UI_Component_Emoji_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Component_Emoji_C* UUI_Component_Emoji_C::GetDefaultObj()
{
	static class UUI_Component_Emoji_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Component_Emoji_C*>(UUI_Component_Emoji_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Component_Emoji.UI_Component_Emoji_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Emoji_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Emoji_C", "PreConstruct");

	Params::UUI_Component_Emoji_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Component_Emoji.UI_Component_Emoji_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Component_Emoji_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Emoji_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Component_Emoji.UI_Component_Emoji_C.ExecuteUbergraph_UI_Component_Emoji
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Component_Emoji_C::ExecuteUbergraph_UI_Component_Emoji(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Component_Emoji_C", "ExecuteUbergraph_UI_Component_Emoji");

	Params::UUI_Component_Emoji_C_ExecuteUbergraph_UI_Component_Emoji_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


