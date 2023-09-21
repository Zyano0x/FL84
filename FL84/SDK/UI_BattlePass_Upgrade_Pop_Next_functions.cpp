#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C
// (None)

class UClass* UUI_BattlePass_Upgrade_Pop_Next_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BattlePass_Upgrade_Pop_Next_C");

	return Clss;
}


// UI_BattlePass_Upgrade_Pop_Next_C UI_BattlePass_Upgrade_Pop_Next.Default__UI_BattlePass_Upgrade_Pop_Next_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BattlePass_Upgrade_Pop_Next_C* UUI_BattlePass_Upgrade_Pop_Next_C::GetDefaultObj()
{
	static class UUI_BattlePass_Upgrade_Pop_Next_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BattlePass_Upgrade_Pop_Next_C*>(UUI_BattlePass_Upgrade_Pop_Next_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_BattlePass_Upgrade_Pop_Next_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_Upgrade_Pop_Next_C", "GetModuleName");

	Params::UUI_BattlePass_Upgrade_Pop_Next_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BattlePass_Upgrade_Pop_Next_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_Upgrade_Pop_Next_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C.BP_EventSetBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BattlePass_Upgrade_Pop_Next_C::BP_EventSetBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_Upgrade_Pop_Next_C", "BP_EventSetBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BattlePass_Upgrade_Pop_Next.UI_BattlePass_Upgrade_Pop_Next_C.ExecuteUbergraph_UI_BattlePass_Upgrade_Pop_Next
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BattlePass_Upgrade_Pop_Next_C::ExecuteUbergraph_UI_BattlePass_Upgrade_Pop_Next(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BattlePass_Upgrade_Pop_Next_C", "ExecuteUbergraph_UI_BattlePass_Upgrade_Pop_Next");

	Params::UUI_BattlePass_Upgrade_Pop_Next_C_ExecuteUbergraph_UI_BattlePass_Upgrade_Pop_Next_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


