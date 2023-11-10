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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloaderHttpTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloaderHttpTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class DownloaderTool.DownloaderHttpTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD64D0
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.StringFileRawData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDownloaderResponse                         InResponse                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UDownloaderUtils::STATIC_StringFileRawData(const struct FDownloaderResponse& InResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.StringFileRawData"));
		
		UDownloaderUtils_StringFileRawData_Params params {};
		params.InResponse = InResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD6290
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.SaveResponseToCache
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDownloaderResponse                         InResponse                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      CachePath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloaderUtils::STATIC_SaveResponseToCache(const struct FDownloaderResponse& InResponse, const class FString& CachePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.SaveResponseToCache"));
		
		UDownloaderUtils_SaveResponseToCache_Params params {};
		params.InResponse = InResponse;
		params.CachePath = CachePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD6130
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      JsonRequestStr                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDownloaderUtils::STATIC_GetVerbFromJsonRequestStr(const class FString& JsonRequestStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr"));
		
		UDownloaderUtils_GetVerbFromJsonRequestStr_Params params {};
		params.JsonRequestStr = JsonRequestStr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD5EE0
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.GetResponseFromCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CachePath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FDownloaderResponse UDownloaderUtils::STATIC_GetResponseFromCache(const class FString& InUrl, const class FString& CachePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.GetResponseFromCache"));
		
		UDownloaderUtils_GetResponseFromCache_Params params {};
		params.InUrl = InUrl;
		params.CachePath = CachePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD5D50
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      JsonRequestStr                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, class FString> UDownloaderUtils::STATIC_GetHeadersFromJsonRequestStr(const class FString& JsonRequestStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr"));
		
		UDownloaderUtils_GetHeadersFromJsonRequestStr_Params params {};
		params.JsonRequestStr = JsonRequestStr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD6650
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.execConvertRawDataToTexture
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DataLength                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2DDynamic* UDownloaderUtils::STATIC_execConvertRawDataToTexture(TArray<unsigned char> Data, int32_t DataLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.execConvertRawDataToTexture"));
		
		UDownloaderUtils_execConvertRawDataToTexture_Params params {};
		params.Data = Data;
		params.DataLength = DataLength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CD5BD0
	 * 		Name   -> Function DownloaderTool.DownloaderUtils.DecodeFileRawData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDownloaderResponse                         InResponse                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UDownloaderUtils::STATIC_DecodeFileRawData(const struct FDownloaderResponse& InResponse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function DownloaderTool.DownloaderUtils.DecodeFileRawData"));
		
		UDownloaderUtils_DecodeFileRawData_Params params {};
		params.InResponse = InResponse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloaderUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloaderUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class DownloaderTool.DownloaderUtils"));
		return ptr;
	}

}


