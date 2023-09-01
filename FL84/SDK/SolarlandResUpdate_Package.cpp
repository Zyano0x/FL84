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
	 * 		RVA    -> 0x02306F70
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.StartDownload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDownloadFileTask::StartDownload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.StartDownload");
		
		UDownloadFileTask_StartDownload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02306EE0
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InSet                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadFileTask::SetSaveToFile(bool InSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile");
		
		UDownloadFileTask_SetSaveToFile_Params params {};
		params.InSet = InSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02306E50
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.SetNeedDecode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InNeedDecode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadFileTask::SetNeedDecode(bool InNeedDecode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.SetNeedDecode");
		
		UDownloadFileTask_SetNeedDecode_Params params {};
		params.InNeedDecode = InNeedDecode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02306DC0
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               inForceRedownload                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadFileTask::SetForceRedownload(bool inForceRedownload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload");
		
		UDownloadFileTask_SetForceRedownload_Params params {};
		params.inForceRedownload = inForceRedownload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02306D40
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.GetUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UDownloadFileTask::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.GetUrl");
		
		UDownloadFileTask_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02306C60
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.CreateNoFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bByChunk                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDownloadFileTask* UDownloadFileTask::STATIC_CreateNoFile(const class FString& URL, bool bByChunk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.CreateNoFile");
		
		UDownloadFileTask_CreateNoFile_Params params {};
		params.URL = URL;
		params.bByChunk = bByChunk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02306A90
	 * 		Name   -> Function SolarlandResUpdate.DownloadFileTask.Create
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileDirectory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bByChunk                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceWrite                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDownloadFileTask* UDownloadFileTask::STATIC_Create(const class FString& URL, const class FString& FileDirectory, const class FString& Filename, bool bByChunk, bool bForceWrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarlandResUpdate.DownloadFileTask.Create");
		
		UDownloadFileTask_Create_Params params {};
		params.URL = URL;
		params.FileDirectory = FileDirectory;
		params.Filename = Filename;
		params.bByChunk = bByChunk;
		params.bForceWrite = bForceWrite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownloadFileTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadFileTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SolarlandResUpdate.DownloadFileTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarlandResUpdater.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarlandResUpdater::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SolarlandResUpdate.SolarlandResUpdater");
		return ptr;
	}

}


