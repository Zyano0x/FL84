#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Btn_Unlock_Anim_2.Btn_Unlock_Anim_2_C
// (None)

class UClass* UBtn_Unlock_Anim_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Btn_Unlock_Anim_2_C");

	return Clss;
}


// Btn_Unlock_Anim_2_C Btn_Unlock_Anim_2.Default__Btn_Unlock_Anim_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBtn_Unlock_Anim_2_C* UBtn_Unlock_Anim_2_C::GetDefaultObj()
{
	static class UBtn_Unlock_Anim_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBtn_Unlock_Anim_2_C*>(UBtn_Unlock_Anim_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_2_C.OnAnimStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_2_C::OnAnimStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_2_C", "OnAnimStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_2_C.OnAnimEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_2_C::OnAnimEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_2_C", "OnAnimEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_2_C.ExecuteUbergraph_Btn_Unlock_Anim_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBtn_Unlock_Anim_2_C::ExecuteUbergraph_Btn_Unlock_Anim_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_2_C", "ExecuteUbergraph_Btn_Unlock_Anim_2");

	Params::UBtn_Unlock_Anim_2_C_ExecuteUbergraph_Btn_Unlock_Anim_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_2_C.OnAnimEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_2_C::OnAnimEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_2_C", "OnAnimEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_2_C.OnAnimStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_2_C::OnAnimStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_2_C", "OnAnimStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


