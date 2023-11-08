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
	 * 		RVA    -> 0x00B6CD90
	 * 		Name   -> Function UnLua.UnLuaInterface.GetModuleName
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	class FString UUnLuaInterface::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaInterface.GetModuleName"));
		
		UUnLuaInterface_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UnLua.UnLuaInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UnLua.UnLuaManager.TriggerAnimNotify
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UUnLuaManager::TriggerAnimNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.TriggerAnimNotify"));
		
		UUnLuaManager_TriggerAnimNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CF30
	 * 		Name   -> Function UnLua.UnLuaManager.OnLatentActionCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            LinkID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::OnLatentActionCompleted(int32_t LinkID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.OnLatentActionCompleted"));
		
		UUnLuaManager_OnLatentActionCompleted_Params params {};
		params.LinkID = LinkID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CEA0
	 * 		Name   -> Function UnLua.UnLuaManager.OnActorDestroyed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::OnActorDestroyed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.OnActorDestroyed"));
		
		UUnLuaManager_OnActorDestroyed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UnLua.UnLuaManager.InputVectorAxis
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AxisValue                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputVectorAxis(const struct FVector& AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.InputVectorAxis"));
		
		UUnLuaManager_InputVectorAxis_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UnLua.UnLuaManager.InputTouch
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		ETouchIndex                                        FingerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputTouch(ETouchIndex FingerIndex, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.InputTouch"));
		
		UUnLuaManager_InputTouch_Params params {};
		params.FingerIndex = FingerIndex;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UnLua.UnLuaManager.InputGesture
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputGesture(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.InputGesture"));
		
		UUnLuaManager_InputGesture_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UnLua.UnLuaManager.InputAxis
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputAxis(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.InputAxis"));
		
		UUnLuaManager_InputAxis_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UnLua.UnLuaManager.InputAction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnLuaManager::InputAction(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaManager.InputAction"));
		
		UUnLuaManager_InputAction_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnLuaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnLuaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UnLua.UnLuaManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C9A0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             NewPositions                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnLuaPerformanceTestProxy::UpdatePositions(TArray<struct FVector> NewPositions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.UpdatePositions"));
		
		AUnLuaPerformanceTestProxy_UpdatePositions_Params params {};
		params.NewPositions = NewPositions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6D1E0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString AUnLuaPerformanceTestProxy::UpdateMeshName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshName"));
		
		AUnLuaPerformanceTestProxy_UpdateMeshName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6D140
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewID                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t AUnLuaPerformanceTestProxy::UpdateMeshID(int32_t NewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.UpdateMeshID"));
		
		AUnLuaPerformanceTestProxy_UpdateMeshID_Params params {};
		params.NewID = NewID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C9A0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    NewIndices                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnLuaPerformanceTestProxy::UpdateIndices(TArray<int32_t> NewIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.UpdateIndices"));
		
		AUnLuaPerformanceTestProxy_UpdateIndices_Params params {};
		params.NewIndices = NewIndices;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6D0C0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.Simulate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnLuaPerformanceTestProxy::Simulate(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.Simulate"));
		
		AUnLuaPerformanceTestProxy_Simulate_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CFC0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.Raycast
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AUnLuaPerformanceTestProxy::Raycast(const struct FVector& Origin, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.Raycast"));
		
		AUnLuaPerformanceTestProxy_Raycast_Params params {};
		params.Origin = Origin;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00909840
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.NOP
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AUnLuaPerformanceTestProxy::NOP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.NOP"));
		
		AUnLuaPerformanceTestProxy_NOP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CE10
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> AUnLuaPerformanceTestProxy::GetPredictedPositions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions"));
		
		AUnLuaPerformanceTestProxy_GetPredictedPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C9A0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetPositions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FVector>                             OutPositions                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnLuaPerformanceTestProxy::GetPositions(TArray<struct FVector>* OutPositions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetPositions"));
		
		AUnLuaPerformanceTestProxy_GetPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPositions != nullptr)
			*OutPositions = params.OutPositions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CD00
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetMeshName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString AUnLuaPerformanceTestProxy::GetMeshName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetMeshName"));
		
		AUnLuaPerformanceTestProxy_GetMeshName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CA80
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            OutMeshID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutMeshName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutCOM                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    OutIndices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             OutPositions                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             OutPredictedPositions                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AUnLuaPerformanceTestProxy::GetMeshInfo(int32_t* OutMeshID, class FString* OutMeshName, struct FVector* OutCOM, TArray<int32_t>* OutIndices, TArray<struct FVector>* OutPositions, TArray<struct FVector>* OutPredictedPositions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetMeshInfo"));
		
		AUnLuaPerformanceTestProxy_GetMeshInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMeshID != nullptr)
			*OutMeshID = params.OutMeshID;
		if (OutMeshName != nullptr)
			*OutMeshName = params.OutMeshName;
		if (OutCOM != nullptr)
			*OutCOM = params.OutCOM;
		if (OutIndices != nullptr)
			*OutIndices = params.OutIndices;
		if (OutPositions != nullptr)
			*OutPositions = params.OutPositions;
		if (OutPredictedPositions != nullptr)
			*OutPredictedPositions = params.OutPredictedPositions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6CA50
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetMeshID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AUnLuaPerformanceTestProxy::GetMeshID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetMeshID"));
		
		AUnLuaPerformanceTestProxy_GetMeshID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C9A0
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetIndices
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<int32_t>                                    OutIndices                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnLuaPerformanceTestProxy::GetIndices(TArray<int32_t>* OutIndices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetIndices"));
		
		AUnLuaPerformanceTestProxy_GetIndices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndices != nullptr)
			*OutIndices = params.OutIndices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C960
	 * 		Name   -> Function UnLua.UnLuaPerformanceTestProxy.GetCOM
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AUnLuaPerformanceTestProxy::GetCOM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UnLua.UnLuaPerformanceTestProxy.GetCOM"));
		
		AUnLuaPerformanceTestProxy_GetCOM_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnLuaPerformanceTestProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnLuaPerformanceTestProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UnLua.UnLuaPerformanceTestProxy"));
		return ptr;
	}

}


