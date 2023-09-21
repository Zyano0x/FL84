#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Anim_Circle_1.UI_Anim_Circle_1_C
// (None)

class UClass* UUI_Anim_Circle_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Anim_Circle_1_C");

	return Clss;
}


// UI_Anim_Circle_1_C UI_Anim_Circle_1.Default__UI_Anim_Circle_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Anim_Circle_1_C* UUI_Anim_Circle_1_C::GetDefaultObj()
{
	static class UUI_Anim_Circle_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Anim_Circle_1_C*>(UUI_Anim_Circle_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Anim_Circle_1.UI_Anim_Circle_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Anim_Circle_1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Anim_Circle_1_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Anim_Circle_1.UI_Anim_Circle_1_C.PlayLoadingAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Anim_Circle_1_C::PlayLoadingAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Anim_Circle_1_C", "PlayLoadingAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Anim_Circle_1.UI_Anim_Circle_1_C.StopLoadingAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Anim_Circle_1_C::StopLoadingAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Anim_Circle_1_C", "StopLoadingAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Anim_Circle_1.UI_Anim_Circle_1_C.ExecuteUbergraph_UI_Anim_Circle_1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Anim_Circle_1_C::ExecuteUbergraph_UI_Anim_Circle_1(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Anim_Circle_1_C", "ExecuteUbergraph_UI_Anim_Circle_1");

	Params::UUI_Anim_Circle_1_C_ExecuteUbergraph_UI_Anim_Circle_1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


