#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SolarFramework.SolarContainer
// (None)

class UClass* USolarContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarContainer");

	return Clss;
}


// SolarContainer SolarFramework.Default__SolarContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarContainer* USolarContainer::GetDefaultObj()
{
	static class USolarContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarContainer*>(USolarContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarFramework.SolarContainer.ReceiveInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void USolarContainer::ReceiveInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarContainer", "ReceiveInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarFramework.SolarContainer.ReceiveDeinitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void USolarContainer::ReceiveDeinitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarContainer", "ReceiveDeinitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Class SolarFramework.SolarAbstractManager
// (None)

class UClass* USolarAbstractManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarAbstractManager");

	return Clss;
}


// SolarAbstractManager SolarFramework.Default__SolarAbstractManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarAbstractManager* USolarAbstractManager::GetDefaultObj()
{
	static class USolarAbstractManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarAbstractManager*>(USolarAbstractManager::StaticClass()->DefaultObject);

	return Default;
}


// Class SolarFramework.SolarAbstractModel
// (None)

class UClass* USolarAbstractModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarAbstractModel");

	return Clss;
}


// SolarAbstractModel SolarFramework.Default__SolarAbstractModel
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarAbstractModel* USolarAbstractModel::GetDefaultObj()
{
	static class USolarAbstractModel* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarAbstractModel*>(USolarAbstractModel::StaticClass()->DefaultObject);

	return Default;
}


// Class SolarFramework.SolarArchitecture
// (None)

class UClass* USolarArchitecture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarArchitecture");

	return Clss;
}


// SolarArchitecture SolarFramework.Default__SolarArchitecture
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarArchitecture* USolarArchitecture::GetDefaultObj()
{
	static class USolarArchitecture* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarArchitecture*>(USolarArchitecture::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarFramework.SolarArchitecture.OnScopeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EScope                  InLastScope                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScope                  InCurScope                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarArchitecture::OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "OnScopeChanged");

	Params::USolarArchitecture_OnScopeChanged_Params Parms{};

	Parms.InLastScope = InLastScope;
	Parms.InCurScope = InCurScope;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarFramework.SolarArchitecture.IsScopeSettlement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarArchitecture::IsScopeSettlement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "IsScopeSettlement");

	Params::USolarArchitecture_IsScopeSettlement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.IsScopeLogin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarArchitecture::IsScopeLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "IsScopeLogin");

	Params::USolarArchitecture_IsScopeLogin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.IsScopeLobby
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarArchitecture::IsScopeLobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "IsScopeLobby");

	Params::USolarArchitecture_IsScopeLobby_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.IsScopeBattle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarArchitecture::IsScopeBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "IsScopeBattle");

	Params::USolarArchitecture_IsScopeBattle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.IsInScope
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EScope                  InScopeMask                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarArchitecture::IsInScope(enum class EScope InScopeMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "IsInScope");

	Params::USolarArchitecture_IsInScope_Params Parms{};

	Parms.InScopeMask = InScopeMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.GetModel
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USolarAbstractModel>ModelClass                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USolarAbstractModel*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USolarAbstractModel* USolarArchitecture::GetModel(TSubclassOf<class USolarAbstractModel>& ModelClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "GetModel");

	Params::USolarArchitecture_GetModel_Params Parms{};

	Parms.ModelClass = ModelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.GetManager
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class USolarAbstractManager>ManagerClass                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USolarAbstractManager*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USolarAbstractManager* USolarArchitecture::GetManager(TSubclassOf<class USolarAbstractManager>& ManagerClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "GetManager");

	Params::USolarArchitecture_GetManager_Params Parms{};

	Parms.ManagerClass = ManagerClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarFramework.SolarArchitecture.GetCurScope
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EScope                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EScope USolarArchitecture::GetCurScope()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarArchitecture", "GetCurScope");

	Params::USolarArchitecture_GetCurScope_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SolarFramework.SolarFrameworkSettings
// (None)

class UClass* USolarFrameworkSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarFrameworkSettings");

	return Clss;
}


// SolarFrameworkSettings SolarFramework.Default__SolarFrameworkSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarFrameworkSettings* USolarFrameworkSettings::GetDefaultObj()
{
	static class USolarFrameworkSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarFrameworkSettings*>(USolarFrameworkSettings::StaticClass()->DefaultObject);

	return Default;
}

}


