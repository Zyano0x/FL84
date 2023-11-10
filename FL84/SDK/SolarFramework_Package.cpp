/**
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
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function SolarFramework.SolarContainer.ReceiveInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USolarContainer::ReceiveInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarContainer.ReceiveInitialize"));
		
		USolarContainer_ReceiveInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function SolarFramework.SolarContainer.ReceiveDeinitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USolarContainer::ReceiveDeinitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarContainer.ReceiveDeinitialize"));
		
		USolarContainer_ReceiveDeinitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SolarFramework.SolarContainer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarAbstractManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarAbstractManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SolarFramework.SolarAbstractManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarAbstractModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarAbstractModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SolarFramework.SolarAbstractModel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function SolarFramework.SolarArchitecture.OnScopeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EScope                                             InLastScope                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScope                                             InCurScope                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarArchitecture::OnScopeChanged(EScope InLastScope, EScope InCurScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.OnScopeChanged"));
		
		USolarArchitecture_OnScopeChanged_Params params {};
		params.InLastScope = InLastScope;
		params.InCurScope = InCurScope;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59690
	 * 		Name   -> Function SolarFramework.SolarArchitecture.IsScopeSettlement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USolarArchitecture::IsScopeSettlement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.IsScopeSettlement"));
		
		USolarArchitecture_IsScopeSettlement_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59660
	 * 		Name   -> Function SolarFramework.SolarArchitecture.IsScopeLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USolarArchitecture::IsScopeLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.IsScopeLogin"));
		
		USolarArchitecture_IsScopeLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59630
	 * 		Name   -> Function SolarFramework.SolarArchitecture.IsScopeLobby
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USolarArchitecture::IsScopeLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.IsScopeLobby"));
		
		USolarArchitecture_IsScopeLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59600
	 * 		Name   -> Function SolarFramework.SolarArchitecture.IsScopeBattle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USolarArchitecture::IsScopeBattle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.IsScopeBattle"));
		
		USolarArchitecture_IsScopeBattle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59570
	 * 		Name   -> Function SolarFramework.SolarArchitecture.IsInScope
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EScope                                             InScopeMask                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USolarArchitecture::IsInScope(EScope InScopeMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.IsInScope"));
		
		USolarArchitecture_IsInScope_Params params {};
		params.InScopeMask = InScopeMask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A594D0
	 * 		Name   -> Function SolarFramework.SolarArchitecture.GetModel
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      ModelClass                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USolarAbstractModel* USolarArchitecture::GetModel(class UClass* ModelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.GetModel"));
		
		USolarArchitecture_GetModel_Params params {};
		params.ModelClass = ModelClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59430
	 * 		Name   -> Function SolarFramework.SolarArchitecture.GetManager
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      ManagerClass                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USolarAbstractManager* USolarArchitecture::GetManager(class UClass* ManagerClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.GetManager"));
		
		USolarArchitecture_GetManager_Params params {};
		params.ManagerClass = ManagerClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A59410
	 * 		Name   -> Function SolarFramework.SolarArchitecture.GetCurScope
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EScope USolarArchitecture::GetCurScope()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFramework.SolarArchitecture.GetCurScope"));
		
		USolarArchitecture_GetCurScope_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarArchitecture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarArchitecture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SolarFramework.SolarArchitecture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarFrameworkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarFrameworkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SolarFramework.SolarFrameworkSettings"));
		return ptr;
	}

}


