#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UnLua.UnLuaInterface
// (None)

class UClass* IUnLuaInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnLuaInterface");

	return Clss;
}


// UnLuaInterface UnLua.Default__UnLuaInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IUnLuaInterface* IUnLuaInterface::GetDefaultObj()
{
	static class IUnLuaInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IUnLuaInterface*>(IUnLuaInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function UnLua.UnLuaInterface.GetModuleName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString IUnLuaInterface::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaInterface", "GetModuleName");

	Params::IUnLuaInterface_GetModuleName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UnLua.UnLuaManager
// (None)

class UClass* UUnLuaManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnLuaManager");

	return Clss;
}


// UnLuaManager UnLua.Default__UnLuaManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UUnLuaManager* UUnLuaManager::GetDefaultObj()
{
	static class UUnLuaManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnLuaManager*>(UUnLuaManager::StaticClass()->DefaultObject);

	return Default;
}


// Function UnLua.UnLuaManager.TriggerAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:

void UUnLuaManager::TriggerAnimNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "TriggerAnimNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UnLua.UnLuaManager.OnLatentActionCompleted
// (Final, Native, Public)
// Parameters:
// int32                              LinkID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::OnLatentActionCompleted(int32 LinkID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "OnLatentActionCompleted");

	Params::UUnLuaManager_OnLatentActionCompleted_Params Parms{};

	Parms.LinkID = LinkID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnLua.UnLuaManager.OnActorDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::OnActorDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "OnActorDestroyed");

	Params::UUnLuaManager_OnActorDestroyed_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnLua.UnLuaManager.InputVectorAxis
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     AxisValue                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::InputVectorAxis(struct FVector& AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "InputVectorAxis");

	Params::UUnLuaManager_InputVectorAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnLua.UnLuaManager.InputTouch
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::InputTouch(enum class ETouchIndex FingerIndex, struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "InputTouch");

	Params::UUnLuaManager_InputTouch_Params Parms{};

	Parms.FingerIndex = FingerIndex;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnLua.UnLuaManager.InputGesture
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::InputGesture(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "InputGesture");

	Params::UUnLuaManager_InputGesture_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnLua.UnLuaManager.InputAxis
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::InputAxis(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "InputAxis");

	Params::UUnLuaManager_InputAxis_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UnLua.UnLuaManager.InputAction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUnLuaManager::InputAction(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaManager", "InputAction");

	Params::UUnLuaManager_InputAction_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Class UnLua.UnLuaPerformanceTestProxy
// (Actor)

class UClass* AUnLuaPerformanceTestProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnLuaPerformanceTestProxy");

	return Clss;
}


// UnLuaPerformanceTestProxy UnLua.Default__UnLuaPerformanceTestProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class AUnLuaPerformanceTestProxy* AUnLuaPerformanceTestProxy::GetDefaultObj()
{
	static class AUnLuaPerformanceTestProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<AUnLuaPerformanceTestProxy*>(AUnLuaPerformanceTestProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             NewPositions                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUnLuaPerformanceTestProxy::UpdatePositions(TArray<struct FVector>& NewPositions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "UpdatePositions");

	Params::AUnLuaPerformanceTestProxy_UpdatePositions_Params Parms{};

	Parms.NewPositions = NewPositions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AUnLuaPerformanceTestProxy::UpdateMeshName(const class FString& NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "UpdateMeshName");

	Params::AUnLuaPerformanceTestProxy_UpdateMeshName_Params Parms{};

	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewID                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AUnLuaPerformanceTestProxy::UpdateMeshID(int32 NewID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "UpdateMeshID");

	Params::AUnLuaPerformanceTestProxy_UpdateMeshID_Params Parms{};

	Parms.NewID = NewID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      NewIndices                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUnLuaPerformanceTestProxy::UpdateIndices(TArray<int32>& NewIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "UpdateIndices");

	Params::AUnLuaPerformanceTestProxy_UpdateIndices_Params Parms{};

	Parms.NewIndices = NewIndices;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnLua.UnLuaPerformanceTestProxy.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUnLuaPerformanceTestProxy::Simulate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "Simulate");

	Params::AUnLuaPerformanceTestProxy_Simulate_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UnLua.UnLuaPerformanceTestProxy.Raycast
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Origin                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUnLuaPerformanceTestProxy::Raycast(struct FVector& Origin, struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "Raycast");

	Params::AUnLuaPerformanceTestProxy_Raycast_Params Parms{};

	Parms.Origin = Origin;
	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.NOP
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AUnLuaPerformanceTestProxy::NOP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "NOP");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FVector> AUnLuaPerformanceTestProxy::GetPredictedPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetPredictedPositions");

	Params::AUnLuaPerformanceTestProxy_GetPredictedPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.GetPositions
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutPositions                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUnLuaPerformanceTestProxy::GetPositions(TArray<struct FVector>* OutPositions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetPositions");

	Params::AUnLuaPerformanceTestProxy_GetPositions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPositions != nullptr)
		*OutPositions = std::move(Parms.OutPositions);

}


// Function UnLua.UnLuaPerformanceTestProxy.GetMeshName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AUnLuaPerformanceTestProxy::GetMeshName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetMeshName");

	Params::AUnLuaPerformanceTestProxy_GetMeshName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              OutMeshID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutMeshName                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutCOM                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      OutIndices                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             OutPositions                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             OutPredictedPositions                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AUnLuaPerformanceTestProxy::GetMeshInfo(int32* OutMeshID, class FString* OutMeshName, struct FVector* OutCOM, TArray<int32>* OutIndices, TArray<struct FVector>* OutPositions, TArray<struct FVector>* OutPredictedPositions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetMeshInfo");

	Params::AUnLuaPerformanceTestProxy_GetMeshInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutMeshID != nullptr)
		*OutMeshID = Parms.OutMeshID;

	if (OutMeshName != nullptr)
		*OutMeshName = std::move(Parms.OutMeshName);

	if (OutCOM != nullptr)
		*OutCOM = std::move(Parms.OutCOM);

	if (OutIndices != nullptr)
		*OutIndices = std::move(Parms.OutIndices);

	if (OutPositions != nullptr)
		*OutPositions = std::move(Parms.OutPositions);

	if (OutPredictedPositions != nullptr)
		*OutPredictedPositions = std::move(Parms.OutPredictedPositions);

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.GetMeshID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AUnLuaPerformanceTestProxy::GetMeshID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetMeshID");

	Params::AUnLuaPerformanceTestProxy_GetMeshID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UnLua.UnLuaPerformanceTestProxy.GetIndices
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      OutIndices                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AUnLuaPerformanceTestProxy::GetIndices(TArray<int32>* OutIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetIndices");

	Params::AUnLuaPerformanceTestProxy_GetIndices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutIndices != nullptr)
		*OutIndices = std::move(Parms.OutIndices);

}


// Function UnLua.UnLuaPerformanceTestProxy.GetCOM
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AUnLuaPerformanceTestProxy::GetCOM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UnLuaPerformanceTestProxy", "GetCOM");

	Params::AUnLuaPerformanceTestProxy_GetCOM_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


