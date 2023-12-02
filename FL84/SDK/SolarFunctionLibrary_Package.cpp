/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.FormatMinuteTime
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FTime                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_FormatMinuteTime(int32_t Seconds, class UObject* __WorldContext, class FString* FTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.FormatMinuteTime"));
		
		USolarFunctionLibrary_C_FormatMinuteTime_Params params {};
		params.Seconds = Seconds;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FTime != nullptr)
			*FTime = params.FTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsMobilePlatform
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMobilePlatform                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USolarFunctionLibrary_C::STATIC_IsMobilePlatform(class UObject* __WorldContext, bool* IsMobilePlatform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsMobilePlatform"));
		
		USolarFunctionLibrary_C_IsMobilePlatform_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMobilePlatform != nullptr)
			*IsMobilePlatform = params.IsMobilePlatform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsPCPlatform
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPCPlatform                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USolarFunctionLibrary_C::STATIC_IsPCPlatform(class UObject* __WorldContext, bool* IsPCPlatform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.IsPCPlatform"));
		
		USolarFunctionLibrary_C_IsPCPlatform_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPCPlatform != nullptr)
			*IsPCPlatform = params.IsPCPlatform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalSeconds
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_GetLocalNowTotalSeconds(class UObject* __WorldContext, int32_t* TotalSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalSeconds"));
		
		USolarFunctionLibrary_C_GetLocalNowTotalSeconds_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalSeconds != nullptr)
			*TotalSeconds = params.TotalSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalSeconds
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_GetUtcNowTotalSeconds(class UObject* __WorldContext, int32_t* TotalSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalSeconds"));
		
		USolarFunctionLibrary_C_GetUtcNowTotalSeconds_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalSeconds != nullptr)
			*TotalSeconds = params.TotalSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalMilliseconds
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalMilliseconds                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_GetLocalNowTotalMilliseconds(class UObject* __WorldContext, int32_t* TotalMilliseconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetLocalNowTotalMilliseconds"));
		
		USolarFunctionLibrary_C_GetLocalNowTotalMilliseconds_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalMilliseconds != nullptr)
			*TotalMilliseconds = params.TotalMilliseconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalMilliseconds
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalMilliseconds                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_GetUtcNowTotalMilliseconds(class UObject* __WorldContext, int32_t* TotalMilliseconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.GetUtcNowTotalMilliseconds"));
		
		USolarFunctionLibrary_C_GetUtcNowTotalMilliseconds_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalMilliseconds != nullptr)
			*TotalMilliseconds = params.TotalMilliseconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.DoNothing
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_DoNothing(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.DoNothing"));
		
		USolarFunctionLibrary_C_DoNothing_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarFunctionLibrary.SolarFunctionLibrary_C.SolarFunctionLibraryTest
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarFunctionLibrary_C::STATIC_SolarFunctionLibraryTest(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarFunctionLibrary.SolarFunctionLibrary_C.SolarFunctionLibraryTest"));
		
		USolarFunctionLibrary_C_SolarFunctionLibraryTest_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass SolarFunctionLibrary.SolarFunctionLibrary_C"));
		return ptr;
	}

}


