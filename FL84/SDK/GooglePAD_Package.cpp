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
	 * 		RVA    -> 0x01D360E0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_ShowCellularDataConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation"));
		
		UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D36040
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestRemoval(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval"));
		
		UGooglePADFunctionLibrary_RequestRemoval_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35A50
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestInfo(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo"));
		
		UGooglePADFunctionLibrary_RequestInfo_Params params {};
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35A50
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_RequestDownload(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload"));
		
		UGooglePADFunctionLibrary_RequestDownload_Params params {};
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35FC0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGooglePADFunctionLibrary::STATIC_ReleaseDownloadState(int32_t State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState"));
		
		UGooglePADFunctionLibrary_ReleaseDownloadState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35FC0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGooglePADFunctionLibrary::STATIC_ReleaseAssetPackLocation(int32_t Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation"));
		
		UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35D80
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGooglePADFunctionLibrary::STATIC_GetTotalBytesToDownload(int32_t State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload"));
		
		UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35F30
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADStorageMethod UGooglePADFunctionLibrary::STATIC_GetStorageMethod(int32_t Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod"));
		
		UGooglePADFunctionLibrary_GetStorageMethod_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35EA0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EGooglePADCellularDataConfirmStatus                status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus"));
		
		UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (status != nullptr)
			*status = params.status;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35E10
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADDownloadStatus UGooglePADFunctionLibrary::STATIC_GetDownloadStatus(int32_t State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus"));
		
		UGooglePADFunctionLibrary_GetDownloadStatus_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35BC0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetDownloadState(const class FString& Name, int32_t* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState"));
		
		UGooglePADFunctionLibrary_GetDownloadState_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35D80
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UGooglePADFunctionLibrary::STATIC_GetBytesDownloaded(int32_t State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded"));
		
		UGooglePADFunctionLibrary_GetBytesDownloaded_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35CB0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UGooglePADFunctionLibrary::STATIC_GetAssetsPath(int32_t Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath"));
		
		UGooglePADFunctionLibrary_GetAssetsPath_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35BC0
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_GetAssetPackLocation(const class FString& Name, int32_t* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation"));
		
		UGooglePADFunctionLibrary_GetAssetPackLocation_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01D35A50
	 * 		Name   -> Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGooglePADErrorCode UGooglePADFunctionLibrary::STATIC_CancelDownload(TArray<class FString> AssetPacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload"));
		
		UGooglePADFunctionLibrary_CancelDownload_Params params {};
		params.AssetPacks = AssetPacks;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGooglePADFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGooglePADFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class GooglePAD.GooglePADFunctionLibrary"));
		return ptr;
	}

}


