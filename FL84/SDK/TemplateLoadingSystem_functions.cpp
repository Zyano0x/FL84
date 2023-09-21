#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TemplateLoadingSystem.LoadingScreenSubsystem
// (None)

class UClass* ULoadingScreenSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenSubsystem");

	return Clss;
}


// LoadingScreenSubsystem TemplateLoadingSystem.Default__LoadingScreenSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingScreenSubsystem* ULoadingScreenSubsystem::GetDefaultObj()
{
	static class ULoadingScreenSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreenSubsystem*>(ULoadingScreenSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULoadingScreenSubsystem::StopLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenSubsystem", "StopLoadingScreen");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class ULoadingWidgetBase>InWidgetClass                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoadingWidgetBase*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoadingWidgetBase* ULoadingScreenSubsystem::StartLoadingScreen(TSubclassOf<class ULoadingWidgetBase> InWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenSubsystem", "StartLoadingScreen");

	Params::ULoadingScreenSubsystem_StartLoadingScreen_Params Parms{};

	Parms.InWidgetClass = InWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TemplateLoadingSystem.LoadingScreenSubsystem.Get
// (Final, Native, Static, Private)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULoadingScreenSubsystem*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULoadingScreenSubsystem* ULoadingScreenSubsystem::Get(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenSubsystem", "Get");

	Params::ULoadingScreenSubsystem_Get_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TemplateLoadingSystem.LoadingWidgetBase
// (None)

class UClass* ULoadingWidgetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingWidgetBase");

	return Clss;
}


// LoadingWidgetBase TemplateLoadingSystem.Default__LoadingWidgetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULoadingWidgetBase* ULoadingWidgetBase::GetDefaultObj()
{
	static class ULoadingWidgetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingWidgetBase*>(ULoadingWidgetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function TemplateLoadingSystem.LoadingWidgetBase.LoadingStarted
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ULoadingWidgetBase::LoadingStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingWidgetBase", "LoadingStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TemplateLoadingSystem.LoadingWidgetBase.LoadingFinished
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ULoadingWidgetBase::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingWidgetBase", "LoadingFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


