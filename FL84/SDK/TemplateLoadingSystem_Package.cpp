﻿/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0083A490
	 * 		Name   -> Function TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULoadingScreenSubsystem::StopLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TemplateLoadingSystem.LoadingScreenSubsystem.StopLoadingScreen"));
		
		ULoadingScreenSubsystem_StopLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083A3F0
	 * 		Name   -> Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InWidgetClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULoadingWidgetBase* ULoadingScreenSubsystem::StartLoadingScreen(class UClass* InWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TemplateLoadingSystem.LoadingScreenSubsystem.StartLoadingScreen"));
		
		ULoadingScreenSubsystem_StartLoadingScreen_Params params {};
		params.InWidgetClass = InWidgetClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083A320
	 * 		Name   -> Function TemplateLoadingSystem.LoadingScreenSubsystem.Get
	 * 		Flags  -> (Final, Native, Static, Private)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULoadingScreenSubsystem* ULoadingScreenSubsystem::STATIC_Get(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TemplateLoadingSystem.LoadingScreenSubsystem.Get"));
		
		ULoadingScreenSubsystem_Get_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class TemplateLoadingSystem.LoadingScreenSubsystem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083A3D0
	 * 		Name   -> Function TemplateLoadingSystem.LoadingWidgetBase.LoadingStarted
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ULoadingWidgetBase::LoadingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TemplateLoadingSystem.LoadingWidgetBase.LoadingStarted"));
		
		ULoadingWidgetBase_LoadingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0083A3B0
	 * 		Name   -> Function TemplateLoadingSystem.LoadingWidgetBase.LoadingFinished
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ULoadingWidgetBase::LoadingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TemplateLoadingSystem.LoadingWidgetBase.LoadingFinished"));
		
		ULoadingWidgetBase_LoadingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingWidgetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingWidgetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class TemplateLoadingSystem.LoadingWidgetBase"));
		return ptr;
	}

}

