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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixedFrameRateCustomTimeStep.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixedFrameRateCustomTimeStep::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class TimeManagement.FixedFrameRateCustomTimeStep"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8DD40
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameTime                                  SourceTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SourceRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  DestinationRate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::STATIC_TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime"));
		
		UTimeManagementBlueprintLibrary_TransformTime_Params params {};
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.DestinationRate = DestinationRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8DC80
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger"));
		
		UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8DBC0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber"));
		
		UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8DA70
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameTime                                  SourceTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SourceRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  SnapToRate                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::STATIC_SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate"));
		
		UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params params {};
		params.SourceTime = SourceTime;
		params.SourceRate = SourceRate;
		params.SnapToRate = SnapToRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D990
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  FrameRate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameTime UTimeManagementBlueprintLibrary::STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate"));
		
		UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params {};
		params.TimeInSeconds = TimeInSeconds;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D8D0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger"));
		
		UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D7D0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameRate                                  OtherFramerate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTimeManagementBlueprintLibrary::STATIC_IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf"));
		
		UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params params {};
		params.InFrameRate = InFrameRate;
		params.OtherFramerate = OtherFramerate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D730
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTimeManagementBlueprintLibrary::STATIC_IsValid_Framerate(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate"));
		
		UTimeManagementBlueprintLibrary_IsValid_Framerate_Params params {};
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D6F0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FFrameRate UTimeManagementBlueprintLibrary::STATIC_GetTimecodeFrameRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate"));
		
		UTimeManagementBlueprintLibrary_GetTimecodeFrameRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D6B0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FTimecode UTimeManagementBlueprintLibrary::STATIC_GetTimecode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode"));
		
		UTimeManagementBlueprintLibrary_GetTimecode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D5F0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger"));
		
		UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D4C0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTimecode                                   InTimecode                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceSignDisplay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTimeManagementBlueprintLibrary::STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString"));
		
		UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params {};
		params.InTimecode = InTimecode;
		params.bForceSignDisplay = bForceSignDisplay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D410
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FQualifiedFrameTime                         InFrameTime                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds"));
		
		UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params {};
		params.InFrameTime = InFrameTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D370
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameRate                                  InFrameRate                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTimeManagementBlueprintLibrary::STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds"));
		
		UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params {};
		params.InFrameRate = InFrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D2E0
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                InFrameNumber                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTimeManagementBlueprintLibrary::STATIC_Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger"));
		
		UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params params {};
		params.InFrameNumber = InFrameNumber;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D220
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger"));
		
		UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03A8D160
	 * 		Name   -> Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FFrameNumber                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FFrameNumber                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFrameNumber UTimeManagementBlueprintLibrary::STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber"));
		
		UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeManagementBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeManagementBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class TimeManagement.TimeManagementBlueprintLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynchronizationSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynchronizationSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class TimeManagement.TimeSynchronizationSource"));
		return ptr;
	}

}

