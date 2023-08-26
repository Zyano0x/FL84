/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x016D0A40
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.ReloadIniFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      StrippedConfigFileName                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakHelper::STATIC_ReloadIniFile(const class FString& StrippedConfigFileName, const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.ReloadIniFile");
		
		UPakHelper_ReloadIniFile_Params params {};
		params.StrippedConfigFileName = StrippedConfigFileName;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0A20
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UPakHelper::STATIC_ReloadGameUserSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings");
		
		UPakHelper_ReloadGameUserSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0A00
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UPakHelper::STATIC_ReloadDeviceProfiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles");
		
		UPakHelper_ReloadDeviceProfiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D09E0
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UPakHelper::STATIC_ReloadCVarSettingsFromIni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni");
		
		UPakHelper_ReloadCVarSettingsFromIni_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D08B0
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ShaderPatchLibraryName                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LibraryDir                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShaderPatchLibUnique                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPakHelper::STATIC_OpenShaderPatchLibrary(const class FString& ShaderPatchLibraryName, const class FString& LibraryDir, bool bShaderPatchLibUnique)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary");
		
		UPakHelper_OpenShaderPatchLibrary_Params params {};
		params.ShaderPatchLibraryName = ShaderPatchLibraryName;
		params.LibraryDir = LibraryDir;
		params.bShaderPatchLibUnique = bShaderPatchLibUnique;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D07D0
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.MountPak
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPakFilename                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PakOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPakHelper::STATIC_MountPak(const class FString& InPakFilename, int32_t PakOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.MountPak");
		
		UPakHelper_MountPak_Params params {};
		params.InPakFilename = InPakFilename;
		params.PakOrder = PakOrder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D06D0
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IniName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UPakHelper::STATIC_GetStrippedConfigFileName(const class FString& IniName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName");
		
		UPakHelper_GetStrippedConfigFileName_Params params {};
		params.IniName = IniName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0650
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.GetProjectName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UPakHelper::STATIC_GetProjectName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.GetProjectName");
		
		UPakHelper_GetProjectName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0430
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.CreatePakWriter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFilename                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMountPoint                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPakWriter* UPakHelper::STATIC_CreatePakWriter(const class FString& InFilename, const class FString& InMountPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.CreatePakWriter");
		
		UPakHelper_CreatePakWriter_Params params {};
		params.InFilename = InFilename;
		params.InMountPoint = InMountPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0350
	 * 		Name   -> Function FarlightPatchRuntime.PakHelper.CreatePakReader
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFilename                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoadIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPakReader* UPakHelper::STATIC_CreatePakReader(const class FString& InFilename, bool bLoadIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakHelper.CreatePakReader");
		
		UPakHelper_CreatePakReader_Params params {};
		params.InFilename = InFilename;
		params.bLoadIndex = bLoadIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPakHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPakHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FarlightPatchRuntime.PakHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D07B0
	 * 		Name   -> Function FarlightPatchRuntime.PakReader.GetTotalSize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int64_t UPakReader::GetTotalSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakReader.GetTotalSize");
		
		UPakReader_GetTotalSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0530
	 * 		Name   -> Function FarlightPatchRuntime.PakReader.GetPakIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FPakEntryInfo> UPakReader::GetPakIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakReader.GetPakIndex");
		
		UPakReader_GetPakIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016D0330
	 * 		Name   -> Function FarlightPatchRuntime.PakReader.Close
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPakReader::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FarlightPatchRuntime.PakReader.Close");
		
		UPakReader_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPakReader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPakReader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FarlightPatchRuntime.PakReader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPakWriter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPakWriter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FarlightPatchRuntime.PakWriter");
		return ptr;
	}

}


