/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputActionDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputActionDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputActionDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputActionValueBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputActionValueBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputActionValueBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78CA0
	 * 		Name   -> Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue");
		
		UEnhancedInputComponent_GetBoundActionValue_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79C70
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        Context                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceImmediately                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputLibrary::STATIC_RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext");
		
		UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params params {};
		params.Context = Context;
		params.bForceImmediately = bForceImmediately;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C790E0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           MatchValueType                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputLibrary::STATIC_MakeInputActionValue(float X, float Y, float Z, const struct FInputActionValue& MatchValueType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue");
		
		UEnhancedInputLibrary_MakeInputActionValue_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.MatchValueType = MatchValueType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78D40
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UEnhancedInputLibrary::STATIC_GetBoundActionValue(class AActor* Actor, class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue");
		
		UEnhancedInputLibrary_GetBoundActionValue_Params params {};
		params.Actor = Actor;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78C00
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UEnhancedInputLibrary::STATIC_Conv_InputActionValueToBool(const struct FInputActionValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool");
		
		UEnhancedInputLibrary_Conv_InputActionValueToBool_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78B50
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           ActionValue                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector UEnhancedInputLibrary::STATIC_Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D");
		
		UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params params {};
		params.ActionValue = ActionValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78AA0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UEnhancedInputLibrary::STATIC_Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D");
		
		UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C789F0
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	float UEnhancedInputLibrary::STATIC_Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D");
		
		UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78830
	 * 		Name   -> Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInputActionValue                           InActionValue                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputLibrary::STATIC_BreakInputActionValue(const struct FInputActionValue& InActionValue, float* X, float* Y, float* Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue");
		
		UEnhancedInputLibrary_BreakInputActionValue_Params params {};
		params.InActionValue = InActionValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Z != nullptr)
			*Z = params.Z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79BE0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bForceImmediately                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::RequestRebuildControlMappings(bool bForceImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings");
		
		UEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params params {};
		params.bForceImmediately = bForceImmediately;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79B50
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext");
		
		UEnhancedInputSubsystemInterface_RemoveMappingContext_Params params {};
		params.MappingContext = MappingContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C798E0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UInputMappingContext*>                PrioritizedActiveContexts                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputMappingContext*                        InputContext                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMappingQueryIssue>                  OutIssues                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMappingQueryIssue                                 BlockingIssues                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMappingQueryResult UEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(TArray<class UInputMappingContext*> PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet");
		
		UEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params params {};
		params.PrioritizedActiveContexts = PrioritizedActiveContexts;
		params.InputContext = InputContext;
		params.Action = Action;
		params.Key = Key;
		params.BlockingIssues = BlockingIssues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIssues != nullptr)
			*OutIssues = params.OutIssues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C796D0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        InputContext                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMappingQueryIssue>                  OutIssues                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMappingQueryIssue                                 BlockingIssues                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EMappingQueryResult UEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, EMappingQueryIssue BlockingIssues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet");
		
		UEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params params {};
		params.InputContext = InputContext;
		params.Action = Action;
		params.Key = Key;
		params.BlockingIssues = BlockingIssues;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIssues != nullptr)
			*OutIssues = params.OutIssues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79560
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FKey> UEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction");
		
		UEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78F80
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext");
		
		UEnhancedInputSubsystemInterface_HasMappingContext_Params params {};
		params.MappingContext = MappingContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C789D0
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
	 */
	void UEnhancedInputSubsystemInterface::ClearAllMappings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings");
		
		UEnhancedInputSubsystemInterface_ClearAllMappings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78760
	 * 		Name   -> Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	 * 		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputMappingContext*                        MappingContext                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext");
		
		UEnhancedInputSubsystemInterface_AddMappingContext_Params params {};
		params.MappingContext = MappingContext;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputSubsystemInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputSubsystemInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputSubsystemInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputLocalPlayerSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputLocalPlayerSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputLocalPlayerSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedInputEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedInputEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedInputEngineSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnhancedPlayerInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnhancedPlayerInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.EnhancedPlayerInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputDebugKeyDelegateBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputDebugKeyDelegateBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputDebugKeyDelegateBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79DE0
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingContext::UnmapKey(class UInputAction* Action, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapKey");
		
		UInputMappingContext_UnmapKey_Params params {};
		params.Action = Action;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79DC0
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapAll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UInputMappingContext::UnmapAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAll");
		
		UInputMappingContext_UnmapAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79D30
	 * 		Name   -> Function EnhancedInput.InputMappingContext.UnmapAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInputMappingContext::UnmapAction(class UInputAction* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.UnmapAction");
		
		UInputMappingContext_UnmapAction_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79280
	 * 		Name   -> Function EnhancedInput.InputMappingContext.MapKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInputAction*                                Action                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        ToKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(class UInputAction* Action, const struct FKey& ToKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputMappingContext.MapKey");
		
		UInputMappingContext_MapKey_Params params {};
		params.Action = Action;
		params.ToKey = ToKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputMappingContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputMappingContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputMappingContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C793F0
	 * 		Name   -> Function EnhancedInput.InputModifier.ModifyRaw
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UEnhancedPlayerInput*                        PlayerInput                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           CurrentValue                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInputActionValue UInputModifier::ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.ModifyRaw");
		
		UInputModifier_ModifyRaw_Params params {};
		params.PlayerInput = PlayerInput;
		params.CurrentValue = CurrentValue;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78E50
	 * 		Name   -> Function EnhancedInput.InputModifier.GetVisualizationColor
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FInputActionValue                           SampleValue                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           FinalValue                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.GetVisualizationColor");
		
		UInputModifier_GetVisualizationColor_Params params {};
		params.SampleValue = SampleValue;
		params.FinalValue = FinalValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C78E20
	 * 		Name   -> Function EnhancedInput.InputModifier.GetExecutionPhase
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 */
	EModifierExecutionPhase UInputModifier::GetExecutionPhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputModifier.GetExecutionPhase");
		
		UInputModifier_GetExecutionPhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierDeadZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierDeadZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierDeadZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierScalar.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierScalar::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierScalar");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierNegate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierNegate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierNegate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierSmooth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierSmooth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierSmooth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierResponseCurveExponential.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierResponseCurveExponential::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierResponseCurveExponential");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierResponseCurveUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierResponseCurveUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierResponseCurveUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierFOVScaling.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierFOVScaling::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierFOVScaling");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierToWorldSpace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierToWorldSpace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierToWorldSpace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierSwizzleAxis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierSwizzleAxis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierSwizzleAxis");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputModifierCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputModifierCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputModifierCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79F10
	 * 		Name   -> Function EnhancedInput.InputTrigger.UpdateState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UEnhancedPlayerInput*                        PlayerInput                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInputActionValue                           ModifiedValue                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ETriggerState UInputTrigger::UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.UpdateState");
		
		UInputTrigger_UpdateState_Params params {};
		params.PlayerInput = PlayerInput;
		params.ModifiedValue = ModifiedValue;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C79020
	 * 		Name   -> Function EnhancedInput.InputTrigger.IsActuated
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FInputActionValue                           ForValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UInputTrigger::IsActuated(const struct FInputActionValue& ForValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.IsActuated");
		
		UInputTrigger_IsActuated_Params params {};
		params.ForValue = ForValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008EDB90
	 * 		Name   -> Function EnhancedInput.InputTrigger.GetTriggerType
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	ETriggerTypeEx UInputTrigger::GetTriggerType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnhancedInput.InputTrigger.GetTriggerType");
		
		UInputTrigger_GetTriggerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerTimedBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerTimedBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerTimedBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerDown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerDown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerDown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerPressed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerPressed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerPressed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerReleased.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerReleased::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerReleased");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerHold.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerHold::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerHold");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerHoldAndRelease.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerHoldAndRelease::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerHoldAndRelease");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerTap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerTap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerTap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerPulse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerPulse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerPulse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerChordAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerChordAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerChordAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputTriggerChordBlocker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputTriggerChordBlocker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EnhancedInput.InputTriggerChordBlocker");
		return ptr;
	}

}


