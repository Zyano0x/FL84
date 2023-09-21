#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C
// (None)

class UClass* UUI_Emote_Polar_UR_001_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Emote_Polar_UR_001_C");

	return Clss;
}


// UI_Emote_Polar_UR_001_C UI_Emote_Polar_UR_001.Default__UI_Emote_Polar_UR_001_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Emote_Polar_UR_001_C* UUI_Emote_Polar_UR_001_C::GetDefaultObj()
{
	static class UUI_Emote_Polar_UR_001_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Emote_Polar_UR_001_C*>(UUI_Emote_Polar_UR_001_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Emote_Polar_UR_001_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Emote_Polar_UR_001_C", "PreConstruct");

	Params::UUI_Emote_Polar_UR_001_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Emote_Polar_UR_001_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Emote_Polar_UR_001_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Emote_Polar_UR_001.UI_Emote_Polar_UR_001_C.ExecuteUbergraph_UI_Emote_Polar_UR_001
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Emote_Polar_UR_001_C::ExecuteUbergraph_UI_Emote_Polar_UR_001(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Emote_Polar_UR_001_C", "ExecuteUbergraph_UI_Emote_Polar_UR_001");

	Params::UUI_Emote_Polar_UR_001_C_ExecuteUbergraph_UI_Emote_Polar_UR_001_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


