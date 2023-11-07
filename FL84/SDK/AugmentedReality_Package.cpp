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
	 * 		RVA    -> 0x03842C20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent"));
		
		UARBlueprintLibrary_UnpinComponent_Params params {};
		params.ComponentToUnpin = ComponentToUnpin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842C00
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_StopARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.StopARSession"));
		
		UARBlueprintLibrary_StopARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842B80
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_StartARSession(class UARSessionConfig* SessionConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.StartARSession"));
		
		UARBlueprintLibrary_StartARSession_Params params {};
		params.SessionConfig = SessionConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842480
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform"));
		
		UARBlueprintLibrary_SetAlignmentTransform_Params params {};
		params.InAlignmentTransform = InAlignmentTransform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842400
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_RemovePin(class UARPin* PinToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.RemovePin"));
		
		UARBlueprintLibrary_RemovePin_Params params {};
		params.PinToRemove = PinToRemove;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842270
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult"));
		
		UARBlueprintLibrary_PinComponentToTraceResult_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.TraceResult = TraceResult;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038420C0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARPin* UARBlueprintLibrary::STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.PinComponent"));
		
		UARBlueprintLibrary_PinComponent_Params params {};
		params.ComponentToPin = ComponentToPin;
		params.PinToWorldTransform = PinToWorldTransform;
		params.TrackedGeometry = TrackedGeometry;
		params.DebugName = DebugName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038420A0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UARBlueprintLibrary::STATIC_PauseARSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.PauseARSession"));
		
		UARBlueprintLibrary_PauseARSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841C90
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D"));
		
		UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params {};
		params.Start = Start;
		params.End = End;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841EC0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARTraceResult> UARBlueprintLibrary::STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects"));
		
		UARBlueprintLibrary_LineTraceTrackedObjects_Params params {};
		params.ScreenCoord = ScreenCoord;
		params.bTestFeaturePoints = bTestFeaturePoints;
		params.bTestGroundPlane = bTestGroundPlane;
		params.bTestPlaneExtents = bTestPlaneExtents;
		params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841C10
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSessionTypeSupported(EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported"));
		
		UARBlueprintLibrary_IsSessionTypeSupported_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841B50
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EARSessionTrackingFeature                          SessionTrackingFeature                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported"));
		
		UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params {};
		params.SessionType = SessionType;
		params.SessionTrackingFeature = SessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2AF0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARSupported
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UARBlueprintLibrary::STATIC_IsARSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.IsARSupported"));
		
		UARBlueprintLibrary_IsARSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841B20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EARWorldMappingState UARBlueprintLibrary::STATIC_GetWorldMappingStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus"));
		
		UARBlueprintLibrary_GetWorldMappingStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0095FF20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EARTrackingQualityReason UARBlueprintLibrary::STATIC_GetTrackingQualityReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason"));
		
		UARBlueprintLibrary_GetTrackingQualityReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841A80
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EARTrackingQuality UARBlueprintLibrary::STATIC_GetTrackingQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality"));
		
		UARBlueprintLibrary_GetTrackingQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841780
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARSessionType                                     SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FARVideoFormat> UARBlueprintLibrary::STATIC_GetSupportedVideoFormats(EARSessionType SessionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats"));
		
		UARBlueprintLibrary_GetSupportedVideoFormats_Params params {};
		params.SessionType = SessionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841750
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UARSessionConfig* UARBlueprintLibrary::STATIC_GetSessionConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig"));
		
		UARBlueprintLibrary_GetSessionConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038416D0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FVector> UARBlueprintLibrary::STATIC_GetPointCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud"));
		
		UARBlueprintLibrary_GetPointCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841670
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetPersonSegmentationImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage"));
		
		UARBlueprintLibrary_GetPersonSegmentationImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841640
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetPersonSegmentationDepthImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage"));
		
		UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841040
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UARLightEstimate* UARBlueprintLibrary::STATIC_GetCurrentLightEstimate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate"));
		
		UARBlueprintLibrary_GetCurrentLightEstimate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840EF0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraImage* UARBlueprintLibrary::STATIC_GetCameraImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage"));
		
		UARBlueprintLibrary_GetCameraImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840EC0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UARTextureCameraDepth* UARBlueprintLibrary::STATIC_GetCameraDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth"));
		
		UARBlueprintLibrary_GetCameraDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038408D0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FARSessionStatus UARBlueprintLibrary::STATIC_GetARSessionStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus"));
		
		UARBlueprintLibrary_GetARSessionStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840DA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedPose*> UARBlueprintLibrary::STATIC_GetAllTrackedPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses"));
		
		UARBlueprintLibrary_GetAllTrackedPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840D20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedPoint*> UARBlueprintLibrary::STATIC_GetAllTrackedPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints"));
		
		UARBlueprintLibrary_GetAllTrackedPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840CA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARPlaneGeometry*> UARBlueprintLibrary::STATIC_GetAllTrackedPlanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes"));
		
		UARBlueprintLibrary_GetAllTrackedPlanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840C20
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedImage*> UARBlueprintLibrary::STATIC_GetAllTrackedImages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages"));
		
		UARBlueprintLibrary_GetAllTrackedImages_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840BA0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::STATIC_GetAllTrackedEnvironmentCaptureProbes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes"));
		
		UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840A60
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<struct FARPose2D> UARBlueprintLibrary::STATIC_GetAllTracked2DPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses"));
		
		UARBlueprintLibrary_GetAllTracked2DPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038409E0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARPin*> UARBlueprintLibrary::STATIC_GetAllPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllPins"));
		
		UARBlueprintLibrary_GetAllPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840960
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class UARTrackedGeometry*> UARBlueprintLibrary::STATIC_GetAllGeometries()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries"));
		
		UARBlueprintLibrary_GetAllGeometries_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840730
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry"));
		
		UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params {};
		params.TrackedGeometry = TrackedGeometry;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.OutlineThickness = OutlineThickness;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840590
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARBlueprintLibrary::STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin"));
		
		UARBlueprintLibrary_DebugDrawPin_Params params {};
		params.ARPin = ARPin;
		params.WorldContextObject = WorldContextObject;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840290
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARCandidateImage* UARBlueprintLibrary::STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage"));
		
		UARBlueprintLibrary_AddRuntimeCandidateImage_Params params {};
		params.SessionConfig = SessionConfig;
		params.CandidateTexture = CandidateTexture;
		params.FriendlyName = FriendlyName;
		params.PhysicalWidth = PhysicalWidth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038401B0
	 * 		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UARBlueprintLibrary::STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe"));
		
		UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params {};
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841980
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UARTrackedGeometry* UARTraceResultLibrary::STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry"));
		
		UARTraceResultLibrary_GetTrackedGeometry_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841850
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EARLineTraceChannels UARTraceResultLibrary::STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel"));
		
		UARTraceResultLibrary_GetTraceChannel_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038414F0
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform"));
		
		UARTraceResultLibrary_GetLocalToWorldTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841370
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARTraceResultLibrary::STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform"));
		
		UARTraceResultLibrary_GetLocalToTrackingTransform_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038410F0
	 * 		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float UARTraceResultLibrary::STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera"));
		
		UARTraceResultLibrary_GetDistanceFromCamera_Params params {};
		params.TraceResult = TraceResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTraceResultLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTraceResultLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBaseAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBaseAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840000
	 * 		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::STATIC_ARSaveWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld"));
		
		UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params {};
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
	 * 		Name   -> PredefinedFunction UARSaveWorldAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSaveWorldAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0383FED0
	 * 		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject"));
		
		UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Location = Location;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARGetCandidateObjectAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARLightEstimate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840E90
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARBasicLightEstimate::GetAmbientIntensityLumens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens"));
		
		UARBasicLightEstimate_GetAmbientIntensityLumens_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840E60
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin"));
		
		UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840E20
	 * 		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor"));
		
		UARBasicLightEstimate_GetAmbientColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARBasicLightEstimate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARBasicLightEstimate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARBasicLightEstimate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAROriginActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAROriginActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.AROriginActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038411F0
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackingState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARTrackingState UARPin::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.GetTrackingState"));
		
		UARPin_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841950
	 * 		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARTrackedGeometry* UARPin::GetTrackedGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.GetTrackedGeometry"));
		
		UARPin_GetTrackedGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028A88B0
	 * 		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USceneComponent* UARPin::GetPinnedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.GetPinnedComponent"));
		
		UARPin_GetPinnedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841490
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARPin::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.GetLocalToWorldTransform"));
		
		UARPin_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841310
	 * 		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARPin::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.GetLocalToTrackingTransform"));
		
		UARPin_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841070
	 * 		Name   -> Function AugmentedReality.ARPin.GetDebugName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UARPin::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.GetDebugName"));
		
		UARPin_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840430
	 * 		Name   -> Function AugmentedReality.ARPin.DebugDraw
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, Const)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPin.DebugDraw"));
		
		UARPin_DebugDraw_Params params {};
		params.World = World;
		params.Color = Color;
		params.Scale = Scale;
		params.PersistForSeconds = PersistForSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARPin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02A3FE00
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldResetTrackedObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects"));
		
		UARSessionConfig_ShouldResetTrackedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842B50
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldResetCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking"));
		
		UARSessionConfig_ShouldResetCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842B20
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldRenderCameraOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay"));
		
		UARSessionConfig_ShouldRenderCameraOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842AF0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldEnableCameraTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking"));
		
		UARSessionConfig_ShouldEnableCameraTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842AC0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARSessionConfig::ShouldEnableAutoFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus"));
		
		UARSessionConfig_ShouldEnableAutoFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038429D0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetWorldMapData"));
		
		UARSessionConfig_SetWorldMapData_Params params {};
		params.WorldMapData = WorldMapData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842950
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARSessionTrackingFeature                          InSessionTrackingFeature                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable"));
		
		UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params {};
		params.InSessionTrackingFeature = InSessionTrackingFeature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038428C0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects"));
		
		UARSessionConfig_SetResetTrackedObjects_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842830
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking"));
		
		UARSessionConfig_SetResetCameraTracking_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038427B0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARFaceTrackingUpdate                              InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate"));
		
		UARSessionConfig_SetFaceTrackingUpdate_Params params {};
		params.InUpdate = InUpdate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842730
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EARFaceTrackingDirection                           InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetFaceTrackingDirection(EARFaceTrackingDirection InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection"));
		
		UARSessionConfig_SetFaceTrackingDirection_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038426A0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus"));
		
		UARSessionConfig_SetEnableAutoFocus_Params params {};
		params.bNewValue = bNewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842600
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat"));
		
		UARSessionConfig_SetDesiredVideoFormat_Params params {};
		params.NewFormat = NewFormat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03842550
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList"));
		
		UARSessionConfig_SetCandidateObjectList_Params params {};
		params.InCandidateObjects = InCandidateObjects;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841AE0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> UARSessionConfig::GetWorldMapData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetWorldMapData"));
		
		UARSessionConfig_GetWorldMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841AB0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARWorldAlignment UARSessionConfig::GetWorldAlignment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetWorldAlignment"));
		
		UARSessionConfig_GetWorldAlignment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C65920
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARSessionType UARSessionConfig::GetSessionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetSessionType"));
		
		UARSessionConfig_GetSessionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038416A0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode"));
		
		UARSessionConfig_GetPlaneDetectionMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841610
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked"));
		
		UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038412E0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode"));
		
		UARSessionConfig_GetLightEstimationMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038412B0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode"));
		
		UARSessionConfig_GetFrameSyncMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841280
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate"));
		
		UARSessionConfig_GetFaceTrackingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841250
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection"));
		
		UARSessionConfig_GetFaceTrackingDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841220
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType"));
		
		UARSessionConfig_GetEnvironmentCaptureProbeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038411F0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature"));
		
		UARSessionConfig_GetEnabledSessionTrackingFeature_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038410B0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat"));
		
		UARSessionConfig_GetDesiredVideoFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840FB0
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList"));
		
		UARSessionConfig_GetCandidateObjectList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840F20
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.GetCandidateImageList"));
		
		UARSessionConfig_GetCandidateImageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840120
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.AddCandidateObject"));
		
		UARSessionConfig_AddCandidateObject_Params params {};
		params.CandidateObject = CandidateObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03840090
	 * 		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSessionConfig.AddCandidateImage"));
		
		UARSessionConfig_AddCandidateImage_Params params {};
		params.NewCandidateImage = NewCandidateImage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARSessionConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARSessionConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARSessionConfig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038482E0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData"));
		
		AARSharedWorldGameMode_SetPreviewImageData_Params params {};
		params.ImageData = ImageData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847FF0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void AARSharedWorldGameMode::SetARWorldSharingIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady"));
		
		AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847F00
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData"));
		
		AARSharedWorldGameMode_SetARSharedWorldData_Params params {};
		params.ARWorldData = ARWorldData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038476A0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState"));
		
		AARSharedWorldGameMode_GetARSharedWorldGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARSharedWorldGameMode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady"));
		
		AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARSharedWorldGameState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847EB0
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving"));
		
		AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847590
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData"));
		
		AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847480
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int32_t                                            Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData"));
		
		AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params {};
		params.Offset = Offset;
		params.Buffer = Buffer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847380
	 * 		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
	 * Parameters:
	 * 		int32_t                                            PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSharedWorldPlayerController::ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld"));
		
		AARSharedWorldPlayerController_ClientInitSharedWorld_Params params {};
		params.PreviewImageSize = PreviewImageSize;
		params.ARWorldDataSize = ARWorldDataSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSharedWorldPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSharedWorldPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARSharedWorldPlayerController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03848160
	 * 		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe"));
		
		AARSkyLight_SetEnvironmentCaptureProbe_Params params {};
		params.InCaptureProbe = InCaptureProbe;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AARSkyLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AARSkyLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARSkyLight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTextureCameraImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTextureCameraImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTextureCameraDepth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTextureCameraDepth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTextureCameraDepth"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentCaptureProbeTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbeTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.AREnvironmentCaptureProbeTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTraceResultDummy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTraceResultDummy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTraceResultDummy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847E80
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UARTrackedGeometry::IsTracked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.IsTracked"));
		
		UARTrackedGeometry_IsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847D90
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh"));
		
		UARTrackedGeometry_GetUnderlyingMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038411F0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARTrackingState UARTrackedGeometry::GetTrackingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetTrackingState"));
		
		UARTrackedGeometry_GetTrackingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847CA0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARObjectClassification UARTrackedGeometry::GetObjectClassification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification"));
		
		UARTrackedGeometry_GetObjectClassification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847C40
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform"));
		
		UARTrackedGeometry_GetLocalToWorldTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03841310
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform"));
		
		UARTrackedGeometry_GetLocalToTrackingTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847B70
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARTrackedGeometry::GetLastUpdateTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp"));
		
		UARTrackedGeometry_GetLastUpdateTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847B40
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UARTrackedGeometry::GetLastUpdateFrameNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber"));
		
		UARTrackedGeometry_GetLastUpdateFrameNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038479A0
	 * 		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UARTrackedGeometry::GetDebugName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedGeometry.GetDebugName"));
		
		UARTrackedGeometry_GetDebugName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackedGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847D40
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy"));
		
		UARPlaneGeometry_GetSubsumedBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847CE0
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetOrientation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARPlaneOrientation UARPlaneGeometry::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPlaneGeometry.GetOrientation"));
		
		UARPlaneGeometry_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847AB0
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UARPlaneGeometry::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPlaneGeometry.GetExtent"));
		
		UARPlaneGeometry_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847970
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UARPlaneGeometry::GetCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPlaneGeometry.GetCenter"));
		
		UARPlaneGeometry_GetCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847830
	 * 		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace"));
		
		UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARPlaneGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARPlaneGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARPlaneGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackedPoint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847A30
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 */
	struct FVector2D UARTrackedImage::GetEstimateSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedImage.GetEstimateSize"));
		
		UARTrackedImage_GetEstimateSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038479E0
	 * 		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARCandidateImage* UARTrackedImage::GetDetectedImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedImage.GetDetectedImage"));
		
		UARTrackedImage_GetDetectedImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackedImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedQRCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedQRCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackedQRCode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847DC0
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EAREye                                             Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(EAREye Eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform"));
		
		UARFaceGeometry_GetWorldSpaceEyeTransform_Params params {};
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847BA0
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EAREye                                             Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(EAREye Eye)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform"));
		
		UARFaceGeometry_GetLocalSpaceEyeTransform_Params params {};
		params.Eye = Eye;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038476D0
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EARFaceBlendShape                                  BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UARFaceGeometry::GetBlendShapeValue(EARFaceBlendShape BlendShape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue"));
		
		UARFaceGeometry_GetBlendShapeValue_Params params {};
		params.BlendShape = BlendShape;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847760
	 * 		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARFaceGeometry.GetBlendShapes"));
		
		UARFaceGeometry_GetBlendShapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARFaceGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARFaceGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARFaceGeometry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847A70
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UAREnvironmentCaptureProbe::GetExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent"));
		
		UAREnvironmentCaptureProbe_GetExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847A00
	 * 		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture"));
		
		UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAREnvironmentCaptureProbe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAREnvironmentCaptureProbe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.AREnvironmentCaptureProbe"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038479E0
	 * 		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UARCandidateObject* UARTrackedObject::GetDetectedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedObject.GetDetectedObject"));
		
		UARTrackedObject_GetDetectedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackedObject"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847D60
	 * 		Name   -> Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FARPose3D UARTrackedPose::GetTrackedPoseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData"));
		
		UARTrackedPose_GetTrackedPoseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackedPose.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackedPose::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackedPose"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTrackableNotifyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTrackableNotifyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTrackableNotifyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARTypesDummyClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARTypesDummyClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARTypesDummyClass"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847D20
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARCandidateImage::GetPhysicalWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth"));
		
		UARCandidateImage_GetPhysicalWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847D00
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UARCandidateImage::GetPhysicalHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight"));
		
		UARCandidateImage_GetPhysicalHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847CC0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EARCandidateImageOrientation UARCandidateImage::GetOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateImage.GetOrientation"));
		
		UARCandidateImage_GetOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847AE0
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARCandidateImage::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateImage.GetFriendlyName"));
		
		UARCandidateImage_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847950
	 * 		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTexture2D* UARCandidateImage::GetCandidateTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateImage.GetCandidateTexture"));
		
		UARCandidateImage_GetCandidateTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARCandidateImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARCandidateImage"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038481F0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetFriendlyName(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateObject.SetFriendlyName"));
		
		UARCandidateObject_SetFriendlyName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038480B0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData"));
		
		UARCandidateObject_SetCandidateObjectData_Params params {};
		params.InCandidateObject = InCandidateObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03848010
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateObject.SetBoundingBox"));
		
		UARCandidateObject_SetBoundingBox_Params params {};
		params.InBoundingBox = InBoundingBox;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847B10
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UARCandidateObject::GetFriendlyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateObject.GetFriendlyName"));
		
		UARCandidateObject_GetFriendlyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03847920
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData"));
		
		UARCandidateObject_GetCandidateObjectData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x038478F0
	 * 		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBox UARCandidateObject::GetBoundingBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AugmentedReality.ARCandidateObject.GetBoundingBox"));
		
		UARCandidateObject_GetBoundingBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UARCandidateObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UARCandidateObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AugmentedReality.ARCandidateObject"));
		return ptr;
	}

}

