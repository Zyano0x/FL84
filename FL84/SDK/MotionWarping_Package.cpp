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
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URootMotionModifier*                         Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_MotionWarping::OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate"));
		
		UAnimNotifyState_MotionWarping_OnWarpUpdate_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URootMotionModifier*                         Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_MotionWarping::OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd"));
		
		UAnimNotifyState_MotionWarping_OnWarpEnd_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URootMotionModifier*                         Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_MotionWarping::OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin"));
		
		UAnimNotifyState_MotionWarping_OnWarpBegin_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A91A0
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URootMotionModifier*                         Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate"));
		
		UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A90D0
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URootMotionModifier*                         Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate"));
		
		UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A9000
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class URootMotionModifier*                         Modifier                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate"));
		
		UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A80D0
	 * 		Name   -> Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     MotionWarpingComp                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier"));
		
		UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params params {};
		params.MotionWarpingComp = MotionWarpingComp;
		params.Animation = Animation;
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimNotifyState_MotionWarping.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotifyState_MotionWarping::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.AnimNotifyState_MotionWarping"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8F20
	 * 		Name   -> Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMotionWarpingWindowData>            OutWindows                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingUtilities::STATIC_GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation"));
		
		UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWindows != nullptr)
			*OutWindows = params.OutWindows;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8E00
	 * 		Name   -> Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMotionWarpingWindowData>            OutWindows                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingUtilities::STATIC_GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, const class FName& WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation"));
		
		UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params params {};
		params.Animation = Animation;
		params.WarpTargetName = WarpTargetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWindows != nullptr)
			*OutWindows = params.OutWindows;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8AF0
	 * 		Name   -> Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimSequenceBase*                           Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UMotionWarpingUtilities::STATIC_ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation"));
		
		UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params params {};
		params.Animation = Animation;
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotionWarpingUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotionWarpingUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.MotionWarpingUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A9270
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMotionWarpingComponent::RemoveWarpTarget(const class FName& WarpTargetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget"));
		
		UMotionWarpingComponent_RemoveWarpTarget_Params params {};
		params.WarpTargetName = WarpTargetName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8AD0
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMotionWarpingComponent::DisableAllRootMotionModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers"));
		
		UMotionWarpingComponent_DisableAllRootMotionModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A7F90
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TargetTransform                                            (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform(const class FName& WarpTargetName, const struct FTransform& TargetTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform"));
		
		UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params params {};
		params.WarpTargetName = WarpTargetName;
		params.TargetTransform = TargetTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A7DF0
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocationAndRotation(const class FName& WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation"));
		
		UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params params {};
		params.WarpTargetName = WarpTargetName;
		params.TargetLocation = TargetLocation;
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A7CF0
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocation(const class FName& WarpTargetName, const struct FVector& TargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation"));
		
		UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params params {};
		params.WarpTargetName = WarpTargetName;
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A7B90
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFollowComponent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent(const class FName& WarpTargetName, class USceneComponent* Component, const class FName& BoneName, bool bFollowComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent"));
		
		UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params params {};
		params.WarpTargetName = WarpTargetName;
		params.Component = Component;
		params.BoneName = BoneName;
		params.bFollowComponent = bFollowComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A7A50
	 * 		Name   -> Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        WarpTargetName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMotionWarpingTarget                        WarpTarget                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UMotionWarpingComponent::AddOrUpdateWarpTarget(const class FName& WarpTargetName, const struct FMotionWarpingTarget& WarpTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget"));
		
		UMotionWarpingComponent_AddOrUpdateWarpTarget_Params params {};
		params.WarpTargetName = WarpTargetName;
		params.WarpTarget = WarpTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotionWarpingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotionWarpingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.MotionWarpingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootMotionModifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootMotionModifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.RootMotionModifier"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootMotionModifier_Warp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootMotionModifier_Warp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.RootMotionModifier_Warp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootMotionModifier_SimpleWarp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootMotionModifier_SimpleWarp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.RootMotionModifier_SimpleWarp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootMotionModifier_Scale.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootMotionModifier_Scale::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.RootMotionModifier_Scale"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8C40
	 * 		Name   -> Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              OutAlpha                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URootMotionModifier_AdjustmentBlendWarp::STATIC_GetAdjustmentBlendIKBoneTransformAndAlpha(class ACharacter* Character, const class FName& BoneName, struct FTransform* OutTransform, float* OutAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha"));
		
		URootMotionModifier_AdjustmentBlendWarp_GetAdjustmentBlendIKBoneTransformAndAlpha_Params params {};
		params.Character = Character;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
		if (OutAlpha != nullptr)
			*OutAlpha = params.OutAlpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8230
	 * 		Name   -> Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     InMotionWarpingComp                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InStartTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InWarpTargetName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWarpPointAnimProvider                             InWarpPointAnimProvider                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InWarpPointAnimTransform                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        InWarpPointAnimBoneName                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInWarpTranslation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIgnoreZAxis                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInWarpRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInWarpIKBones                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                InIKBones                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URootMotionModifier_AdjustmentBlendWarp* URootMotionModifier_AdjustmentBlendWarp::STATIC_AddRootMotionModifierAdjustmentBlendWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const class FName& InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, const class FName& InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, TArray<class FName> InIKBones)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp"));
		
		URootMotionModifier_AdjustmentBlendWarp_AddRootMotionModifierAdjustmentBlendWarp_Params params {};
		params.InMotionWarpingComp = InMotionWarpingComp;
		params.InAnimation = InAnimation;
		params.InStartTime = InStartTime;
		params.InEndTime = InEndTime;
		params.InWarpTargetName = InWarpTargetName;
		params.InWarpPointAnimProvider = InWarpPointAnimProvider;
		params.InWarpPointAnimTransform = InWarpPointAnimTransform;
		params.InWarpPointAnimBoneName = InWarpPointAnimBoneName;
		params.bInWarpTranslation = bInWarpTranslation;
		params.bInIgnoreZAxis = bInIgnoreZAxis;
		params.bInWarpRotation = bInWarpRotation;
		params.bInWarpIKBones = bInWarpIKBones;
		params.InIKBones = InIKBones;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootMotionModifier_AdjustmentBlendWarp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootMotionModifier_AdjustmentBlendWarp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008A8690
	 * 		Name   -> Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UMotionWarpingComponent*                     InMotionWarpingComp                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InStartTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InEndTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        InWarpTargetName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWarpPointAnimProvider                             InWarpPointAnimProvider                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InWarpPointAnimTransform                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        InWarpPointAnimBoneName                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInWarpTranslation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInIgnoreZAxis                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInWarpRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMotionWarpRotationType                            InRotationType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InWarpRotationTimeMultiplier                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URootMotionModifier_SkewWarp* URootMotionModifier_SkewWarp::STATIC_AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const class FName& InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, const class FName& InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp"));
		
		URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params params {};
		params.InMotionWarpingComp = InMotionWarpingComp;
		params.InAnimation = InAnimation;
		params.InStartTime = InStartTime;
		params.InEndTime = InEndTime;
		params.InWarpTargetName = InWarpTargetName;
		params.InWarpPointAnimProvider = InWarpPointAnimProvider;
		params.InWarpPointAnimTransform = InWarpPointAnimTransform;
		params.InWarpPointAnimBoneName = InWarpPointAnimBoneName;
		params.bInWarpTranslation = bInWarpTranslation;
		params.bInIgnoreZAxis = bInIgnoreZAxis;
		params.bInWarpRotation = bInWarpRotation;
		params.InRotationType = InRotationType;
		params.InWarpRotationTimeMultiplier = InWarpRotationTimeMultiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URootMotionModifier_SkewWarp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URootMotionModifier_SkewWarp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MotionWarping.RootMotionModifier_SkewWarp"));
		return ptr;
	}

}


