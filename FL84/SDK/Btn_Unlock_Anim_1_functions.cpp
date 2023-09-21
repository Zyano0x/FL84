#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C
// (None)

class UClass* UBtn_Unlock_Anim_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Btn_Unlock_Anim_1_C");

	return Clss;
}


// Btn_Unlock_Anim_1_C Btn_Unlock_Anim_1.Default__Btn_Unlock_Anim_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBtn_Unlock_Anim_1_C* UBtn_Unlock_Anim_1_C::GetDefaultObj()
{
	static class UBtn_Unlock_Anim_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBtn_Unlock_Anim_1_C*>(UBtn_Unlock_Anim_1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_1_C::SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_1_C::SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.OnAnimStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_1_C::OnAnimStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "OnAnimStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.OnAnimEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_1_C::OnAnimEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "OnAnimEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.ExecuteUbergraph_Btn_Unlock_Anim_1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBtn_Unlock_Anim_1_C::ExecuteUbergraph_Btn_Unlock_Anim_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "ExecuteUbergraph_Btn_Unlock_Anim_1");

	Params::UBtn_Unlock_Anim_1_C_ExecuteUbergraph_Btn_Unlock_Anim_1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.OnAnimEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_1_C::OnAnimEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "OnAnimEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Btn_Unlock_Anim_1.Btn_Unlock_Anim_1_C.OnAnimStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBtn_Unlock_Anim_1_C::OnAnimStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Btn_Unlock_Anim_1_C", "OnAnimStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


