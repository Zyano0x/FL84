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
	 * 		RVA    -> 0x009ED8A0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.ShowSteamVirtualKeyboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_ShowSteamVirtualKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.ShowSteamVirtualKeyboard"));
		
		ULLHSDKAppUtils_ShowSteamVirtualKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED6B0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_SDKConfigIsMultiDetect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect"));
		
		ULLHSDKAppUtils_SDKConfigIsMultiDetect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED680
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_SDKConfigIsDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug"));
		
		ULLHSDKAppUtils_SDKConfigIsDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      SteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFriend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Online                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKAppUtils::OnSteamUserStatesUpdate__DelegateSignature(const class FString& SteamId, bool IsFriend, bool Online, const class FString& FriendName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature"));
		
		ULLHSDKAppUtils_OnSteamUserStatesUpdate__DelegateSignature_Params params {};
		params.SteamId = SteamId;
		params.IsFriend = IsFriend;
		params.Online = Online;
		params.FriendName = FriendName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED5E0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKAppUtils::STATIC_IsSteamFriendOnline(const class FString& SteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline"));
		
		ULLHSDKAppUtils_IsSteamFriendOnline_Params params {};
		params.SteamId = SteamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0095AAE0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.IsSimulator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_IsSimulator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.IsSimulator"));
		
		ULLHSDKAppUtils_IsSimulator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED5B0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.IsPlatformSteamDeck
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_IsPlatformSteamDeck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.IsPlatformSteamDeck"));
		
		ULLHSDKAppUtils_IsPlatformSteamDeck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED4C0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPackageName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKAppUtils::STATIC_IsPackageInstalled(const class FString& InPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled"));
		
		ULLHSDKAppUtils_IsPackageInstalled_Params params {};
		params.InPackageName = InPackageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0095AAE0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.IsGrayRelease
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_IsGrayRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.IsGrayRelease"));
		
		ULLHSDKAppUtils_IsGrayRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED420
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKAppUtils::STATIC_InviteSteamUserToGame(const class FString& SteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame"));
		
		ULLHSDKAppUtils_InviteSteamUserToGame_Params params {};
		params.SteamId = SteamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetVersionName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetVersionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetVersionName"));
		
		ULLHSDKAppUtils_GetVersionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetVersionCode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetVersionCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetVersionCode"));
		
		ULLHSDKAppUtils_GetVersionCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED260
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<bool> ULLHSDKAppUtils::STATIC_GetSteamFriendsOnlineList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList"));
		
		ULLHSDKAppUtils_GetSteamFriendsOnlineList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED1E0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> ULLHSDKAppUtils::STATIC_GetSteamFriendsNameList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList"));
		
		ULLHSDKAppUtils_GetSteamFriendsNameList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED100
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSteamFriendName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetSteamFriendName(const class FString& SteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSteamFriendName"));
		
		ULLHSDKAppUtils_GetSteamFriendName_Params params {};
		params.SteamId = SteamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED080
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> ULLHSDKAppUtils::STATIC_GetSteamFriendIDList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList"));
		
		ULLHSDKAppUtils_GetSteamFriendIDList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED050
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSteamFriendCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULLHSDKAppUtils::STATIC_GetSteamFriendCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSteamFriendCount"));
		
		ULLHSDKAppUtils_GetSteamFriendCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetSDKVersionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName"));
		
		ULLHSDKAppUtils_GetSDKVersionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetSDKVersionCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode"));
		
		ULLHSDKAppUtils_GetSDKVersionCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetRunningProcessName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName"));
		
		ULLHSDKAppUtils_GetRunningProcessName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECFD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetOperatingSystemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId"));
		
		ULLHSDKAppUtils_GetOperatingSystemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECF40
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKAppUtils* ULLHSDKAppUtils::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetInstance"));
		
		ULLHSDKAppUtils_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECF10
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetGameTime
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int64_t ULLHSDKAppUtils::STATIC_GetGameTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetGameTime"));
		
		ULLHSDKAppUtils_GetGameTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetGameID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetGameID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetGameID"));
		
		ULLHSDKAppUtils_GetGameID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECE90
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetEnvId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetEnvId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetEnvId"));
		
		ULLHSDKAppUtils_GetEnvId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetDeviceUUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID"));
		
		ULLHSDKAppUtils_GetDeviceUUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetChannelID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetChannelID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetChannelID"));
		
		ULLHSDKAppUtils_GetChannelID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECC50
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetBiosUUID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetBiosUUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetBiosUUID"));
		
		ULLHSDKAppUtils_GetBiosUUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECBD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetAppName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetAppName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetAppName"));
		
		ULLHSDKAppUtils_GetAppName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECB50
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetAppIDRaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw"));
		
		ULLHSDKAppUtils_GetAppIDRaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECAD0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.GetAppID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKAppUtils::STATIC_GetAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.GetAppID"));
		
		ULLHSDKAppUtils_GetAppID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC870
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.DoesDistributeForDomestic
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKAppUtils::STATIC_DoesDistributeForDomestic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.DoesDistributeForDomestic"));
		
		ULLHSDKAppUtils_DoesDistributeForDomestic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC850
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.DismissSteamVirtualKeyboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKAppUtils::STATIC_DismissSteamVirtualKeyboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.DismissSteamVirtualKeyboard"));
		
		ULLHSDKAppUtils_DismissSteamVirtualKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC7F0
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKAppUtils::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.DestoryInstance"));
		
		ULLHSDKAppUtils_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC690
	 * 		Name   -> Function LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKAppUtils::STATIC_BindOnlineSubsystemSteamPresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence"));
		
		ULLHSDKAppUtils_BindOnlineSubsystemSteamPresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKAppUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKAppUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKAppUtils"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::OnInitCommunity__DelegateSignature(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature"));
		
		ULLHSDKCommunity_OnInitCommunity__DelegateSignature_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::OnImageDownload__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature"));
		
		ULLHSDKCommunity_OnImageDownload__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::OnGetCommunityRedhint__DelegateSignature(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature"));
		
		ULLHSDKCommunity_OnGetCommunityRedhint__DelegateSignature_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::OnExitCommunity__DelegateSignature(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature"));
		
		ULLHSDKCommunity_OnExitCommunity__DelegateSignature_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::OnClearCommunityRedhint__DelegateSignature(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature"));
		
		ULLHSDKCommunity_OnClearCommunityRedhint__DelegateSignature_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED2E0
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.InitCommunityConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UrlInfo                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReqMethod                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraHttpParams                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::STATIC_InitCommunityConfig(const class FString& UrlInfo, const class FString& ReqMethod, const class FString& ExtraHttpParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.InitCommunityConfig"));
		
		ULLHSDKCommunity_InitCommunityConfig_Params params {};
		params.UrlInfo = UrlInfo;
		params.ReqMethod = ReqMethod;
		params.ExtraHttpParams = ExtraHttpParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECF70
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKCommunity* ULLHSDKCommunity::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.GetInstance"));
		
		ULLHSDKCommunity_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECD50
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.GetCommunityRedHint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReqMethod                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraHttpParams                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::STATIC_GetCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.GetCommunityRedHint"));
		
		ULLHSDKCommunity_GetCommunityRedHint_Params params {};
		params.URL = URL;
		params.ReqMethod = ReqMethod;
		params.ExtraHttpParams = ExtraHttpParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC990
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.ExitCommunity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReqMethod                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraHttpParams                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::STATIC_ExitCommunity(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.ExitCommunity"));
		
		ULLHSDKCommunity_ExitCommunity_Params params {};
		params.URL = URL;
		params.ReqMethod = ReqMethod;
		params.ExtraHttpParams = ExtraHttpParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC8A0
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.DownloadImage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::STATIC_DownloadImage(const class FString& URL, const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.DownloadImage"));
		
		ULLHSDKCommunity_DownloadImage_Params params {};
		params.URL = URL;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC810
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKCommunity::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.DestoryInstance"));
		
		ULLHSDKCommunity_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC6B0
	 * 		Name   -> Function LLHSDK.LLHSDKCommunity.ClearCommunityRedHint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ReqMethod                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraHttpParams                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCommunity::STATIC_ClearCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCommunity.ClearCommunityRedHint"));
		
		ULLHSDKCommunity_ClearCommunityRedHint_Params params {};
		params.URL = URL;
		params.ReqMethod = ReqMethod;
		params.ExtraHttpParams = ExtraHttpParams;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKCommunity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKCommunity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKCommunity"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ExtInfoStr                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCustomerService::STATIC_ShowCustomerServicePage(const class FString& ExtInfoStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage"));
		
		ULLHSDKCustomerService_ShowCustomerServicePage_Params params {};
		params.ExtInfoStr = ExtInfoStr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED6E0
	 * 		Name   -> Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIsPspDebug                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            ServerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCustomerService::STATIC_SetCustomerServiceDebug(bool bIsPspDebug, const class FString& PlayerId, int64_t ServerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug"));
		
		ULLHSDKCustomerService_SetCustomerServiceDebug_Params params {};
		params.bIsPspDebug = bIsPspDebug;
		params.PlayerId = PlayerId;
		params.ServerId = ServerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            NotificationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKCustomerService::OnReceiveNotification__DelegateSignature(int32_t NotificationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature"));
		
		ULLHSDKCustomerService_OnReceiveNotification__DelegateSignature_Params params {};
		params.NotificationType = NotificationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECFA0
	 * 		Name   -> Function LLHSDK.LLHSDKCustomerService.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKCustomerService* ULLHSDKCustomerService::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCustomerService.GetInstance"));
		
		ULLHSDKCustomerService_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009EC830
	 * 		Name   -> Function LLHSDK.LLHSDKCustomerService.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKCustomerService::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKCustomerService.DestoryInstance"));
		
		ULLHSDKCustomerService_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKCustomerService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKCustomerService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKCustomerService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      GoogleAdID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKDeviceUtils::OnGoogleAdID__DelegateSignature(const class FString& GoogleAdID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature"));
		
		ULLHSDKDeviceUtils_OnGoogleAdID__DelegateSignature_Params params {};
		params.GoogleAdID = GoogleAdID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            DeviceScore                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKDeviceUtils::OnDeviceScore__DelegateSignature(int32_t DeviceScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature"));
		
		ULLHSDKDeviceUtils_OnDeviceScore__DelegateSignature_Params params {};
		params.DeviceScore = DeviceScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.IsEmulator
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKDeviceUtils::STATIC_IsEmulator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.IsEmulator"));
		
		ULLHSDKDeviceUtils_IsEmulator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1690
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetTotalRAM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM"));
		
		ULLHSDKDeviceUtils_GetTotalRAM_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1610
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetTotalMemorySize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize"));
		
		ULLHSDKDeviceUtils_GetTotalMemorySize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1590
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetTimezoneName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName"));
		
		ULLHSDKDeviceUtils_GetTimezoneName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F13F0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetOSVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion"));
		
		ULLHSDKDeviceUtils_GetOSVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F13C0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	ELLHSDKNetworkType ULLHSDKDeviceUtils::STATIC_GetNetworkTypeEnum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum"));
		
		ULLHSDKDeviceUtils_GetNetworkTypeEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1340
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetNetworkType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType"));
		
		ULLHSDKDeviceUtils_GetNetworkType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetMacAddress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress"));
		
		ULLHSDKDeviceUtils_GetMacAddress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1070
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKDeviceUtils* ULLHSDKDeviceUtils::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetInstance"));
		
		ULLHSDKDeviceUtils_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetIMSI
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetIMSI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetIMSI"));
		
		ULLHSDKDeviceUtils_GetIMSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetIDFA
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetIDFA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetIDFA"));
		
		ULLHSDKDeviceUtils_GetIDFA_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1050
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKDeviceUtils::STATIC_GetGoogleAdID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID"));
		
		ULLHSDKDeviceUtils_GetGoogleAdID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0FD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<float> ULLHSDKDeviceUtils::STATIC_GetDisplayMetrics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics"));
		
		ULLHSDKDeviceUtils_GetDisplayMetrics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0F50
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<float> ULLHSDKDeviceUtils::STATIC_GetDisplayCutout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout"));
		
		ULLHSDKDeviceUtils_GetDisplayCutout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetDeviceType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType"));
		
		ULLHSDKDeviceUtils_GetDeviceType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0F30
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKDeviceUtils::STATIC_GetDeviceScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore"));
		
		ULLHSDKDeviceUtils_GetDeviceScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0EB0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetDeviceModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel"));
		
		ULLHSDKDeviceUtils_GetDeviceModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0E30
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetDeviceID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID"));
		
		ULLHSDKDeviceUtils_GetDeviceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetDeviceCarrier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier"));
		
		ULLHSDKDeviceUtils_GetDeviceCarrier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0DB0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetDeviceBrand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand"));
		
		ULLHSDKDeviceUtils_GetDeviceBrand_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetDeviceAbi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi"));
		
		ULLHSDKDeviceUtils_GetDeviceAbi_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0D30
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetCPUModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel"));
		
		ULLHSDKDeviceUtils_GetCPUModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0D30
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetCPUHardWareName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName"));
		
		ULLHSDKDeviceUtils_GetCPUHardWareName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0CB0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetAvailableRAM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM"));
		
		ULLHSDKDeviceUtils_GetAvailableRAM_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKDeviceUtils::STATIC_GetAndroidID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID"));
		
		ULLHSDKDeviceUtils_GetAndroidID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F08D0
	 * 		Name   -> Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKDeviceUtils::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance"));
		
		ULLHSDKDeviceUtils_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKDeviceUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKDeviceUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKDeviceUtils"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F24D0
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.SetLocaleName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InLocale                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLocalization::STATIC_SetLocaleName(const class FString& InLocale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.SetLocaleName"));
		
		ULLHSDKLocalization_SetLocaleName_Params params {};
		params.InLocale = InLocale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2460
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.SetLocale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELLHSDKSupportedLanguage                           InLocale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLocalization::STATIC_SetLocale(ELLHSDKSupportedLanguage InLocale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.SetLocale"));
		
		ULLHSDKLocalization_SetLocale_Params params {};
		params.InLocale = InLocale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.GetLocaleName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKLocalization::STATIC_GetLocaleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.GetLocaleName"));
		
		ULLHSDKLocalization_GetLocaleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1280
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.GetLocaleInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FLLHSDKLocaleInfo ULLHSDKLocalization::STATIC_GetLocaleInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.GetLocaleInfo"));
		
		ULLHSDKLocalization_GetLocaleInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.GetLocaleEnum
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	ELLHSDKSupportedLanguage ULLHSDKLocalization::STATIC_GetLocaleEnum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.GetLocaleEnum"));
		
		ULLHSDKLocalization_GetLocaleEnum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F10A0
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKLocalization* ULLHSDKLocalization::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.GetInstance"));
		
		ULLHSDKLocalization_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F08F0
	 * 		Name   -> Function LLHSDK.LLHSDKLocalization.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLocalization::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLocalization.DestoryInstance"));
		
		ULLHSDKLocalization_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKLocalization.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKLocalization::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKLocalization"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2F90
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_UpdateSteamCallBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack"));
		
		ULLHSDKLogin_UpdateSteamCallBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2D60
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_SwitchOrLinkAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount"));
		
		ULLHSDKLogin_SwitchOrLinkAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2CC0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SteamRegister
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_SteamRegister(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SteamRegister"));
		
		ULLHSDKLogin_SteamRegister_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2C20
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SteamLoginResultSet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_SteamLoginResultSet(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SteamLoginResultSet"));
		
		ULLHSDKLogin_SteamLoginResultSet_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2B80
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_SteamGetAccountInfo(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo"));
		
		ULLHSDKLogin_SteamGetAccountInfo_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2B60
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SteamFree
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_SteamFree()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SteamFree"));
		
		ULLHSDKLogin_SteamFree_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2AC0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SteamBindUrlGet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_SteamBindUrlGet(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SteamBindUrlGet"));
		
		ULLHSDKLogin_SteamBindUrlGet_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2A20
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SteamAutoLogin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_SteamAutoLogin(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SteamAutoLogin"));
		
		ULLHSDKLogin_SteamAutoLogin_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_ShowProtocolViewV2Ok()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok"));
		
		ULLHSDKLogin_ShowProtocolViewV2Ok_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2630
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_ShowProtocolViewV2Confirm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm"));
		
		ULLHSDKLogin_ShowProtocolViewV2Confirm_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2430
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULLHSDKLogin::STATIC_SetLimPCSDKLogHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler"));
		
		ULLHSDKLogin_SetLimPCSDKLogHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2400
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULLHSDKLogin::STATIC_SetLimPCSDKEventHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler"));
		
		ULLHSDKLogin_SetLimPCSDKEventHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2370
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.SetLimPCAlilogFieldsData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LimPCAlilogFieldsStr                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::STATIC_SetLimPCAlilogFieldsData(const class FString& LimPCAlilogFieldsStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.SetLimPCAlilogFieldsData"));
		
		ULLHSDKLogin_SetLimPCAlilogFieldsData_Params params {};
		params.LimPCAlilogFieldsStr = LimPCAlilogFieldsStr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2300
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FLLHSDKLoginUserInfo ULLHSDKLogin::STATIC_QueryCurrentUserInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo"));
		
		ULLHSDKLogin_QueryCurrentUserInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F21B0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.QueryCurrentUser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FLLHSDKLoginUser ULLHSDKLogin::STATIC_QueryCurrentUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.QueryCurrentUser"));
		
		ULLHSDKLogin_QueryCurrentUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2060
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.OpenSteamBindPage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_OpenSteamBindPage(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.OpenSteamBindPage"));
		
		ULLHSDKLogin_OpenSteamBindPage_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1FA0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULLHSDKLogin::STATIC_OpenLIMPCSwitchAccPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage"));
		
		ULLHSDKLogin_OpenLIMPCSwitchAccPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1F00
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULLHSDKLogin::STATIC_OpenLIMPCAccountPage(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage"));
		
		ULLHSDKLogin_OpenLIMPCAccountPage_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bConfirmed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::OnProtocolClick__DelegateSignature(bool bConfirmed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature"));
		
		ULLHSDKLogin_OnProtocolClick__DelegateSignature_Params params {};
		params.bConfirmed = bConfirmed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::OnLoginFinish__DelegateSignature(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature"));
		
		ULLHSDKLogin_OnLoginFinish__DelegateSignature_Params params {};
		params.AppUid = AppUid;
		params.AppToken = AppToken;
		params.LoginType = LoginType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::OnLoginFailed__DelegateSignature(ELLHSDKLoginType LoginType, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature"));
		
		ULLHSDKLogin_OnLoginFailed__DelegateSignature_Params params {};
		params.LoginType = LoginType;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ULLHSDKLogin::OnInitFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature"));
		
		ULLHSDKLogin_OnInitFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::OnBindFinish__DelegateSignature(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature"));
		
		ULLHSDKLogin_OnBindFinish__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.AppUid = AppUid;
		params.AppToken = AppToken;
		params.LoginType = LoginType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5550
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.NSLogout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_NSLogout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.NSLogout"));
		
		ULLHSDKLogin_NSLogout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1850
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.NSLoginStart
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_NSLoginStart(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.NSLoginStart"));
		
		ULLHSDKLogin_NSLoginStart_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B5550
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.NSFinalize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_NSFinalize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.NSFinalize"));
		
		ULLHSDKLogin_NSFinalize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1850
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.NSAccountInfoGet
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_NSAccountInfoGet(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.NSAccountInfoGet"));
		
		ULLHSDKLogin_NSAccountInfoGet_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1ED0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.LogoutLimPCSDK
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULLHSDKLogin::STATIC_LogoutLimPCSDK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.LogoutLimPCSDK"));
		
		ULLHSDKLogin_LogoutLimPCSDK_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.Logout
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_Logout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.Logout"));
		
		ULLHSDKLogin_Logout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1C50
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLLHSDKLoginUserInfo                        InUserInfo                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULLHSDKLogin::STATIC_LoginUserInfo_ToString(const struct FLLHSDKLoginUserInfo& InUserInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString"));
		
		ULLHSDKLogin_LoginUserInfo_ToString_Params params {};
		params.InUserInfo = InUserInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1D60
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.LoginUser_ToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLLHSDKLoginUser                            InUser                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULLHSDKLogin::STATIC_LoginUser_ToString(const struct FLLHSDKLoginUser& InUser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.LoginUser_ToString"));
		
		ULLHSDKLogin_LoginUser_ToString_Params params {};
		params.InUser = InUser;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1BB0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.LoginLimPCSDK
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULLHSDKLogin::STATIC_LoginLimPCSDK(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.LoginLimPCSDK"));
		
		ULLHSDKLogin_LoginLimPCSDK_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1B90
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.Login
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_Login()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.Login"));
		
		ULLHSDKLogin_Login_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::LimSteamSDKCallBack__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature"));
		
		ULLHSDKLogin_LimSteamSDKCallBack__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::LimPCSDKCallBack__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature"));
		
		ULLHSDKLogin_LimPCSDKCallBack__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::LimOnSteamLoginResultSet__DelegateSignature(const class FString& AppUid, const class FString& AppToken, const class FString& AppId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature"));
		
		ULLHSDKLogin_LimOnSteamLoginResultSet__DelegateSignature_Params params {};
		params.AppUid = AppUid;
		params.AppToken = AppToken;
		params.AppId = AppId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED6B0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.IsInitFinish
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKLogin::STATIC_IsInitFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.IsInitFinish"));
		
		ULLHSDKLogin_IsInitFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0750
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKLogin::STATIC_IsCurrentUserNewReg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg"));
		
		ULLHSDKLogin_IsCurrentUserNewReg_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1850
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.InitNSSDK
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_InitNSSDK(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.InitNSSDK"));
		
		ULLHSDKLogin_InitNSSDK_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F17B0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.InitLimSteamSDK
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_InitLimSteamSDK(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.InitLimSteamSDK"));
		
		ULLHSDKLogin_InitLimSteamSDK_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1710
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.InitLimPCSDK
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULLHSDKLogin::STATIC_InitLimPCSDK(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.InitLimPCSDK"));
		
		ULLHSDKLogin_InitLimPCSDK_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1510
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.GetSteamToken
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKLogin::STATIC_GetSteamToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.GetSteamToken"));
		
		ULLHSDKLogin_GetSteamToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1470
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_GetSteamRegisterUrl(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl"));
		
		ULLHSDKLogin_GetSteamRegisterUrl_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F11E0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.GetLimPCUserInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULLHSDKLogin::STATIC_GetLimPCUserInfo(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.GetLimPCUserInfo"));
		
		ULLHSDKLogin_GetLimPCUserInfo_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1160
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFieldsData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKLogin::STATIC_GetLimPCAlilogFieldsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFieldsData"));
		
		ULLHSDKLogin_GetLimPCAlilogFieldsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1130
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFields
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULLHSDKLogin::STATIC_GetLimPCAlilogFields()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFields"));
		
		ULLHSDKLogin_GetLimPCAlilogFields_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F10D0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKLogin* ULLHSDKLogin::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.GetInstance"));
		
		ULLHSDKLogin_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C90
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.FreeLimPCSDK
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_FreeLimPCSDK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.FreeLimPCSDK"));
		
		ULLHSDKLogin_FreeLimPCSDK_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0A40
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.DoSteamBind
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKLogin::STATIC_DoSteamBind(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.DoSteamBind"));
		
		ULLHSDKLogin_DoSteamBind_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0910
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.DestoryInstance"));
		
		ULLHSDKLogin_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0840
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.DAPLogAdd
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKLogin::STATIC_DAPLogAdd(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.DAPLogAdd"));
		
		ULLHSDKLogin_DAPLogAdd_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F07A0
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.CommonReportLimPCPoint
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULLHSDKLogin::STATIC_CommonReportLimPCPoint(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.CommonReportLimPCPoint"));
		
		ULLHSDKLogin_CommonReportLimPCPoint_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0750
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.ClearAutoLogin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKLogin::STATIC_ClearAutoLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.ClearAutoLogin"));
		
		ULLHSDKLogin_ClearAutoLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0680
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULLHSDKLogin::STATIC_ChangeLIMPCLanguage(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage"));
		
		ULLHSDKLogin_ChangeLIMPCLanguage_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0630
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.CanContinueLogin
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKLogin::STATIC_CanContinueLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.CanContinueLogin"));
		
		ULLHSDKLogin_CanContinueLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0660
	 * 		Name   -> Function LLHSDK.LLHSDKLogin.CancelSteamCallBack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKLogin::STATIC_CancelSteamCallBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKLogin.CancelSteamCallBack"));
		
		ULLHSDKLogin_CancelSteamCallBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKLogin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKLogin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKLogin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0950
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.UpdateNetworkExtensions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InDeviceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_UpdateNetworkExtensions(const class FString& InUserId, const class FString& InDeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.UpdateNetworkExtensions"));
		
		ULLHSDKMisc_UpdateNetworkExtensions_Params params {};
		params.InUserId = InUserId;
		params.InDeviceID = InDeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.TwitterShareText
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_TwitterShareText(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.TwitterShareText"));
		
		ULLHSDKMisc_TwitterShareText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0950
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.TwitterSharePhoto
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InFilePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_TwitterSharePhoto(const class FString& InText, const class FString& InFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.TwitterSharePhoto"));
		
		ULLHSDKMisc_TwitterSharePhoto_Params params {};
		params.InText = InText;
		params.InFilePath = InFilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_TryToEnableAndroidNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification"));
		
		ULLHSDKMisc_TryToEnableAndroidNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2EC0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.TcpPingDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDomain                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_TcpPingDetect(const class FString& InDomain, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.TcpPingDetect"));
		
		ULLHSDKMisc_TcpPingDetect_Params params {};
		params.InDomain = InDomain;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2D80
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.SystemShare
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ShareType                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_SystemShare(int32_t ShareType, const class FString& Description, const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.SystemShare"));
		
		ULLHSDKMisc_SystemShare_Params params {};
		params.ShareType = ShareType;
		params.Description = Description;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F28F0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKScreenOrientation                           Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_StartIOSFarlightBrowserWithOrientation(const class FString& URL, const class FString& Title, ELLHSDKScreenOrientation Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation"));
		
		ULLHSDKMisc_StartIOSFarlightBrowserWithOrientation_Params params {};
		params.URL = URL;
		params.Title = Title;
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F27C0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKScreenOrientation                           Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_StartBrowserWithOrientation(const class FString& URL, const class FString& Title, ELLHSDKScreenOrientation Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation"));
		
		ULLHSDKMisc_StartBrowserWithOrientation_Params params {};
		params.URL = URL;
		params.Title = Title;
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2650
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.StartBrowser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_StartBrowser(const class FString& URL, const class FString& Title)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.StartBrowser"));
		
		ULLHSDKMisc_StartBrowser_Params params {};
		params.URL = URL;
		params.Title = Title;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDomain                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_SetNetworkPolicyDomain(const class FString& InDomain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain"));
		
		ULLHSDKMisc_SetNetworkPolicyDomain_Params params {};
		params.InDomain = InDomain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F25B0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_SetNetworkMultipleDetect(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect"));
		
		ULLHSDKMisc_SetNetworkMultipleDetect_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDeviceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_SetNetworkDiagnosisDeviceID(const class FString& InDeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID"));
		
		ULLHSDKMisc_SetNetworkDiagnosisDeviceID_Params params {};
		params.InDeviceID = InDeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.RestartApplication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IntentString                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_RestartApplication(const class FString& IntentString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.RestartApplication"));
		
		ULLHSDKMisc_RestartApplication_Params params {};
		params.IntentString = IntentString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_RefreshFirebaseMessagingToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken"));
		
		ULLHSDKMisc_RefreshFirebaseMessagingToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFullFilePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_RefreshAndroidMediaScanner(const class FString& InFullFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner"));
		
		ULLHSDKMisc_RefreshAndroidMediaScanner_Params params {};
		params.InFullFilePath = InFullFilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_QueryThirdPartUserInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo"));
		
		ULLHSDKMisc_QueryThirdPartUserInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.PingDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDomain                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_PingDetect(const class FString& InDomain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.PingDetect"));
		
		ULLHSDKMisc_PingDetect_Params params {};
		params.InDomain = InDomain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2190
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.PickFileFromAlbum
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_PickFileFromAlbum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.PickFileFromAlbum"));
		
		ULLHSDKMisc_PickFileFromAlbum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F2100
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_OpenSteamPayWebPage(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage"));
		
		ULLHSDKMisc_OpenSteamPayWebPage_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1FD0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.OpenLimPCWebPage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_OpenLimPCWebPage(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.OpenLimPCWebPage"));
		
		ULLHSDKMisc_OpenLimPCWebPage_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnSystemShared__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature"));
		
		ULLHSDKMisc_OnSystemShared__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      FullPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnScreenshotCapturedEvent__DelegateSignature(const class FString& FullPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature"));
		
		ULLHSDKMisc_OnScreenshotCapturedEvent__DelegateSignature_Params params {};
		params.FullPath = FullPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      FirebaseToken                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnRefreshFirebaseToken__DelegateSignature(const class FString& FirebaseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature"));
		
		ULLHSDKMisc_OnRefreshFirebaseToken__DelegateSignature_Params params {};
		params.FirebaseToken = FirebaseToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSDKSocialUserInfo>                  SocialUserInfoList                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature"));
		
		ULLHSDKMisc_OnQueryThirdPartUserInfo__DelegateSignature_Params params {};
		params.Success = Success;
		params.ErrorCode = ErrorCode;
		params.SocialUserInfoList = SocialUserInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      PickFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnPickFileFromAlbumFinishEvent__DelegateSignature(const class FString& PickFilePath, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature"));
		
		ULLHSDKMisc_OnPickFileFromAlbumFinishEvent__DelegateSignature_Params params {};
		params.PickFilePath = PickFilePath;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnLimPCOpenWebview__DelegateSignature(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature"));
		
		ULLHSDKMisc_OnLimPCOpenWebview__DelegateSignature_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnLimPCCloseWebview__DelegateSignature(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature"));
		
		ULLHSDKMisc_OnLimPCCloseWebview__DelegateSignature_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ApplicationId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GraphDomain                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnGetFacebookToken__DelegateSignature(bool Result, const class FString& Token, const class FString& ApplicationId, const class FString& UserId, const class FString& GraphDomain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature"));
		
		ULLHSDKMisc_OnGetFacebookToken__DelegateSignature_Params params {};
		params.Result = Result;
		params.Token = Token;
		params.ApplicationId = ApplicationId;
		params.UserId = UserId;
		params.GraphDomain = GraphDomain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::OnFacebookPhotoShared__DelegateSignature(const class FString& FilePath, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature"));
		
		ULLHSDKMisc_OnFacebookPhotoShared__DelegateSignature_Params params {};
		params.FilePath = FilePath;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ULLHSDKMisc::OnBrowserClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature"));
		
		ULLHSDKMisc_OnBrowserClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ret                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::NetworkDiagnosisCallback__DelegateSignature(const class FString& Type, const class FString& Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature"));
		
		ULLHSDKMisc_NetworkDiagnosisCallback__DelegateSignature_Params params {};
		params.Type = Type;
		params.Ret = Ret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.MtrDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDomain                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_MtrDetect(const class FString& InDomain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.MtrDetect"));
		
		ULLHSDKMisc_MtrDetect_Params params {};
		params.InDomain = InDomain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0950
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.JumpToMarket
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InAppPkg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMarketPkg                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_JumpToMarket(const class FString& InAppPkg, const class FString& InMarketPkg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.JumpToMarket"));
		
		ULLHSDKMisc_JumpToMarket_Params params {};
		params.InAppPkg = InAppPkg;
		params.InMarketPkg = InMarketPkg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.JumpToAppStore
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      AppStoreUrl                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_JumpToAppStore(const class FString& AppStoreUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.JumpToAppStore"));
		
		ULLHSDKMisc_JumpToAppStore_Params params {};
		params.AppStoreUrl = AppStoreUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.IsFacebookShareable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKMisc::STATIC_IsFacebookShareable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.IsFacebookShareable"));
		
		ULLHSDKMisc_IsFacebookShareable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.IsAppRooted
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKMisc::STATIC_IsAppRooted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.IsAppRooted"));
		
		ULLHSDKMisc_IsAppRooted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0750
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKMisc::STATIC_IsAndroidNotificationEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled"));
		
		ULLHSDKMisc_IsAndroidNotificationEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F18F0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.InitNetworkDiagnosis
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProject                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InSecretKey                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InEndPoint                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAccessKeyId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAccessKeySecret                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InUid                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InChannel                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_InitNetworkDiagnosis(const class FString& InProject, const class FString& InSecretKey, const class FString& InEndPoint, const class FString& InAccessKeyId, const class FString& InAccessKeySecret, const class FString& InUid, const class FString& InChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.InitNetworkDiagnosis"));
		
		ULLHSDKMisc_InitNetworkDiagnosis_Params params {};
		params.InProject = InProject;
		params.InSecretKey = InSecretKey;
		params.InEndPoint = InEndPoint;
		params.InAccessKeyId = InAccessKeyId;
		params.InAccessKeySecret = InAccessKeySecret;
		params.InUid = InUid;
		params.InChannel = InChannel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.HttpDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_HttpDetect(const class FString& InUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.HttpDetect"));
		
		ULLHSDKMisc_HttpDetect_Params params {};
		params.InUrl = InUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKMisc::STATIC_GetNetworkDiagnosisDeviceID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID"));
		
		ULLHSDKMisc_GetNetworkDiagnosisDeviceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F1100
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKMisc* ULLHSDKMisc::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.GetInstance"));
		
		ULLHSDKMisc_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ECCD0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULLHSDKMisc::STATIC_GetFirebaseMessagingToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken"));
		
		ULLHSDKMisc_GetFirebaseMessagingToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.GetFacebookToken
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_GetFacebookToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.GetFacebookToken"));
		
		ULLHSDKMisc_GetFacebookToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0950
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_FacebookSharePhotoWithFileAndDescription(const class FString& Description, const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription"));
		
		ULLHSDKMisc_FacebookSharePhotoWithFileAndDescription_Params params {};
		params.Description = Description;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFilePath                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_FacebookSharePhotoByPath(const class FString& InFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath"));
		
		ULLHSDKMisc_FacebookSharePhotoByPath_Params params {};
		params.InFilePath = InFilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0C70
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.FacebookSharePhoto
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_FacebookSharePhoto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.FacebookSharePhoto"));
		
		ULLHSDKMisc_FacebookSharePhoto_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0AE0
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.FacebookShareLink
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InLinkURL                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPreviewURL                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InTitle                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InDesc                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_FacebookShareLink(const class FString& InLinkURL, const class FString& InPreviewURL, const class FString& InTitle, const class FString& InDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.FacebookShareLink"));
		
		ULLHSDKMisc_FacebookShareLink_Params params {};
		params.InLinkURL = InLinkURL;
		params.InPreviewURL = InPreviewURL;
		params.InTitle = InTitle;
		params.InDesc = InDesc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0950
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.DnsDetect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InServer                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InDomain                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKMisc::STATIC_DnsDetect(const class FString& InServer, const class FString& InDomain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.DnsDetect"));
		
		ULLHSDKMisc_DnsDetect_Params params {};
		params.InServer = InServer;
		params.InDomain = InDomain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0930
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.DestoryInstance"));
		
		ULLHSDKMisc_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0780
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKMisc::STATIC_CloseLimPCWebPageAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll"));
		
		ULLHSDKMisc_CloseLimPCWebPageAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKMisc::STATIC_CheckGyroSensorSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport"));
		
		ULLHSDKMisc_CheckGyroSensorSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKMisc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKMisc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKMisc"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6B70
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLLHSDKGenericSkuItemsDetailList            InDetails                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	class FString ULLHSDKPay::STATIC_Test_Google_SkuItemDetailsToString(const struct FLLHSDKGenericSkuItemsDetailList& InDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString"));
		
		ULLHSDKPay_Test_Google_SkuItemDetailsToString_Params params {};
		params.InDetails = InDetails;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersConsume__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::SwitchSDKPayOrdersConsume__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersConsume__DelegateSignature"));
		
		ULLHSDKPay_SwitchSDKPayOrdersConsume__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersCheck__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::SwitchSDKPayOrdersCheck__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersCheck__DelegateSignature"));
		
		ULLHSDKPay_SwitchSDKPayOrdersCheck__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumables__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::SwitchSDKPayGetConsumables__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumables__DelegateSignature"));
		
		ULLHSDKPay_SwitchSDKPayGetConsumables__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumableItems__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::SwitchSDKPayGetConsumableItems__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumableItems__DelegateSignature"));
		
		ULLHSDKPay_SwitchSDKPayGetConsumableItems__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayEShopOpen__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::SwitchSDKPayEShopOpen__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayEShopOpen__DelegateSignature"));
		
		ULLHSDKPay_SwitchSDKPayEShopOpen__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Switch_OrdersConsume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Switch_OrdersConsume(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Switch_OrdersConsume"));
		
		ULLHSDKPay_Switch_OrdersConsume_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Switch_OrdersCheck
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Switch_OrdersCheck(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Switch_OrdersCheck"));
		
		ULLHSDKPay_Switch_OrdersCheck_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Switch_GetConsumables
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Switch_GetConsumables(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Switch_GetConsumables"));
		
		ULLHSDKPay_Switch_GetConsumables_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Switch_GetConsumableItems
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Switch_GetConsumableItems(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Switch_GetConsumableItems"));
		
		ULLHSDKPay_Switch_GetConsumableItems_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Switch_EShopOpen
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Switch_EShopOpen(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Switch_EShopOpen"));
		
		ULLHSDKPay_Switch_EShopOpen_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6A50
	 * 		Name   -> Function LLHSDK.LLHSDKPay.SteamQuerySkus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_SteamQuerySkus(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.SteamQuerySkus"));
		
		ULLHSDKPay_SteamQuerySkus_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6AE0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Steam_StartPay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamPayInfo                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Steam_StartPay(const class FString& SteamPayInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Steam_StartPay"));
		
		ULLHSDKPay_Steam_StartPay_Params params {};
		params.SteamPayInfo = SteamPayInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.SetPayNotifyUrl
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InNotifyUrl                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_SetPayNotifyUrl(const class FString& InNotifyUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.SetPayNotifyUrl"));
		
		ULLHSDKPay_SetPayNotifyUrl_Params params {};
		params.InNotifyUrl = InNotifyUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FLLHSDKGenericSkuItemsDetailList            ItemsDetailList                                            (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InvalidProductIDs                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnLLHQuerySkus__DelegateSignature(const struct FLLHSDKGenericSkuItemsDetailList& ItemsDetailList, TArray<class FString> InvalidProductIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature"));
		
		ULLHSDKPay_OnLLHQuerySkus__DelegateSignature_Params params {};
		params.ItemsDetailList = ItemsDetailList;
		params.InvalidProductIDs = InvalidProductIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMsg                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PayValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProductID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKPayType                                     PayType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnLLHPayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, const class FString& ErrorMsg, int32_t PayValue, const class FString& ProductID, ELLHSDKPayType PayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature"));
		
		ULLHSDKPay_OnLLHPayFinished__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.ErrorCode = ErrorCode;
		params.ErrorMsg = ErrorMsg;
		params.PayValue = PayValue;
		params.ProductID = ProductID;
		params.PayType = PayType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemsDetailListJsonString                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, const class FString& ItemsDetailListJsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature"));
		
		ULLHSDKPay_OnGoogleQuerySkuSubItemDetails__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.ErrorCode = ErrorCode;
		params.ItemsDetailListJsonString = ItemsDetailListJsonString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemsDetailListJsonString                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, const class FString& ItemsDetailListJsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature"));
		
		ULLHSDKPay_OnGoogleQuerySkuItemDetails__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.ErrorCode = ErrorCode;
		params.ItemsDetailListJsonString = ItemsDetailListJsonString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Price                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKPayType                                     PayType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnGooglePayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, int32_t Price, const class FString& ItemID, ELLHSDKPayType PayType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature"));
		
		ULLHSDKPay_OnGooglePayFinished__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		params.ErrorCode = ErrorCode;
		params.Price = Price;
		params.ItemID = ItemID;
		params.PayType = PayType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProductID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnGetIOSPurchaseExtNull__DelegateSignature(const class FString& AppUid, const class FString& ProductID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature"));
		
		ULLHSDKPay_OnGetIOSPurchaseExtNull__DelegateSignature_Params params {};
		params.AppUid = AppUid;
		params.ProductID = ProductID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class FString>                              Skus                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::OnGetGoogleConsumeGoods__DelegateSignature(TArray<class FString> Skus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature"));
		
		ULLHSDKPay_OnGetGoogleConsumeGoods__DelegateSignature_Params params {};
		params.Skus = Skus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::LSteamSDKQuerySkus__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature"));
		
		ULLHSDKPay_LSteamSDKQuerySkus__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::LSteamSDKPayApplied__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature"));
		
		ULLHSDKPay_LSteamSDKPayApplied__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5470
	 * 		Name   -> Function LLHSDK.LLHSDKPay.LimPCStartPay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_LimPCStartPay(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.LimPCStartPay"));
		
		ULLHSDKPay_LimPCStartPay_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::LimPCSDKQueryPriceLadder__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature"));
		
		ULLHSDKPay_LimPCSDKQueryPriceLadder__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::LimPCSDKPayApplied__DelegateSignature(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature"));
		
		ULLHSDKPay_LimPCSDKPayApplied__DelegateSignature_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F53E0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Params                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_LimPCQueryPriceLadderWithRegion(const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion"));
		
		ULLHSDKPay_LimPCQueryPriceLadderWithRegion_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F53C0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKPay::STATIC_LimPCQueryPriceLadder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadder"));
		
		ULLHSDKPay_LimPCQueryPriceLadder_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0950
	 * 		Name   -> Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ProductID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PayExt                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_IOS_SetUserPayExtInCallback(const class FString& ProductID, const class FString& PayExt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback"));
		
		ULLHSDKPay_IOS_SetUserPayExtInCallback_Params params {};
		params.ProductID = ProductID;
		params.PayExt = PayExt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009ED810
	 * 		Name   -> Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PayExt                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_IOS_SetUserPayExt(const class FString& PayExt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt"));
		
		ULLHSDKPay_IOS_SetUserPayExt_Params params {};
		params.PayExt = PayExt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5340
	 * 		Name   -> Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_IOS_SetAutoPayExt(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt"));
		
		ULLHSDKPay_IOS_SetAutoPayExt_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5280
	 * 		Name   -> Function LLHSDK.LLHSDKPay.IOS_QuerySkus
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              ProductIDs                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_IOS_QuerySkus(TArray<class FString> ProductIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.IOS_QuerySkus"));
		
		ULLHSDKPay_IOS_QuerySkus_Params params {};
		params.ProductIDs = ProductIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5190
	 * 		Name   -> Function LLHSDK.LLHSDKPay.IOS_LLHPay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ProductID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PayExt                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_IOS_LLHPay(const class FString& ProductID, const class FString& PayExt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.IOS_LLHPay"));
		
		ULLHSDKPay_IOS_LLHPay_Params params {};
		params.ProductID = ProductID;
		params.PayExt = PayExt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5160
	 * 		Name   -> Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKPay::STATIC_IOS_GetAutoPayExt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt"));
		
		ULLHSDKPay_IOS_GetAutoPayExt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4FF0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_StartPaySubscription
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PayItemID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PayContext                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Google_StartPaySubscription(const class FString& PayItemID, const class FString& PayContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_StartPaySubscription"));
		
		ULLHSDKPay_Google_StartPaySubscription_Params params {};
		params.PayItemID = PayItemID;
		params.PayContext = PayContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4FF0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_StartPay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PayItemID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PayContext                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Google_StartPay(const class FString& PayItemID, const class FString& PayContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_StartPay"));
		
		ULLHSDKPay_Google_StartPay_Params params {};
		params.PayItemID = PayItemID;
		params.PayContext = PayContext;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4E90
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Items                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Google_QuerySkuItemDetailsSubscription(TArray<class FString> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription"));
		
		ULLHSDKPay_Google_QuerySkuItemDetailsSubscription_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4D30
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Items                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Google_QuerySkuItemDetails(TArray<class FString> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails"));
		
		ULLHSDKPay_Google_QuerySkuItemDetails_Params params {};
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKPay::STATIC_Google_HasConsumePointsGoods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods"));
		
		ULLHSDKPay_Google_HasConsumePointsGoods_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0720
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULLHSDKPay::STATIC_Google_HasConsumeGoods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods"));
		
		ULLHSDKPay_Google_HasConsumeGoods_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4CB0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> ULLHSDKPay::STATIC_Google_GetConsumePointsGoods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods"));
		
		ULLHSDKPay_Google_GetConsumePointsGoods_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4CB0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> ULLHSDKPay::STATIC_Google_GetConsumeGoods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods"));
		
		ULLHSDKPay_Google_GetConsumeGoods_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4A60
	 * 		Name   -> Function LLHSDK.LLHSDKPay.Google_ConsumeGoods
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Skus                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Contexts                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULLHSDKPay::STATIC_Google_ConsumeGoods(TArray<class FString> Skus, TArray<class FString> Contexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.Google_ConsumeGoods"));
		
		ULLHSDKPay_Google_ConsumeGoods_Params params {};
		params.Skus = Skus;
		params.Contexts = Contexts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4A00
	 * 		Name   -> Function LLHSDK.LLHSDKPay.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKPay* ULLHSDKPay::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.GetInstance"));
		
		ULLHSDKPay_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F49C0
	 * 		Name   -> Function LLHSDK.LLHSDKPay.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKPay::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKPay.DestoryInstance"));
		
		ULLHSDKPay_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKPay.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKPay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKPay"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6900
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportToThirdParty_TwoParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportToThirdParty_TwoParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportToThirdParty_TwoParams"));
		
		ULLHSDKReport_ReportToThirdParty_TwoParams_Params params {};
		params.EventName = EventName;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6760
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportToThirdParty_ThreeParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter3                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportToThirdParty_ThreeParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportToThirdParty_ThreeParams"));
		
		ULLHSDKReport_ReportToThirdParty_ThreeParams_Params params {};
		params.EventName = EventName;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		params.Parameter3 = Parameter3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5500
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportToThirdParty_OneParam
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportToThirdParty_OneParam(const class FString& EventName, const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportToThirdParty_OneParam"));
		
		ULLHSDKReport_ReportToThirdParty_OneParam_Params params {};
		params.EventName = EventName;
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6560
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportToThirdParty_FourParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter3                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter4                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportToThirdParty_FourParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportToThirdParty_FourParams"));
		
		ULLHSDKReport_ReportToThirdParty_FourParams_Params params {};
		params.EventName = EventName;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		params.Parameter3 = Parameter3;
		params.Parameter4 = Parameter4;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6310
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportToThirdParty_FiveParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter3                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter4                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter5                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportToThirdParty_FiveParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportToThirdParty_FiveParams"));
		
		ULLHSDKReport_ReportToThirdParty_FiveParams_Params params {};
		params.EventName = EventName;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		params.Parameter3 = Parameter3;
		params.Parameter4 = Parameter4;
		params.Parameter5 = Parameter5;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6270
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportToThirdParty
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportToThirdParty(const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportToThirdParty"));
		
		ULLHSDKReport_ReportToThirdParty_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F6090
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_TwoParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKReportCurrencyType                          Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Revenue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportRevenueToThirdParty_TwoParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_TwoParams"));
		
		ULLHSDKReport_ReportRevenueToThirdParty_TwoParams_Params params {};
		params.EventName = EventName;
		params.Currency = Currency;
		params.Revenue = Revenue;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5E50
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_ThreeParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKReportCurrencyType                          Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Revenue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter3                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportRevenueToThirdParty_ThreeParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_ThreeParams"));
		
		ULLHSDKReport_ReportRevenueToThirdParty_ThreeParams_Params params {};
		params.EventName = EventName;
		params.Currency = Currency;
		params.Revenue = Revenue;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		params.Parameter3 = Parameter3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5CC0
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_OneParam
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKReportCurrencyType                          Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Revenue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportRevenueToThirdParty_OneParam(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_OneParam"));
		
		ULLHSDKReport_ReportRevenueToThirdParty_OneParam_Params params {};
		params.EventName = EventName;
		params.Currency = Currency;
		params.Revenue = Revenue;
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5A20
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FourParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKReportCurrencyType                          Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Revenue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter3                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter4                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportRevenueToThirdParty_FourParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FourParams"));
		
		ULLHSDKReport_ReportRevenueToThirdParty_FourParams_Params params {};
		params.EventName = EventName;
		params.Currency = Currency;
		params.Revenue = Revenue;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		params.Parameter3 = Parameter3;
		params.Parameter4 = Parameter4;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5730
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FiveParams
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKReportCurrencyType                          Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Revenue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter1                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter2                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter3                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter4                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Parameter5                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportRevenueToThirdParty_FiveParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FiveParams"));
		
		ULLHSDKReport_ReportRevenueToThirdParty_FiveParams_Params params {};
		params.EventName = EventName;
		params.Currency = Currency;
		params.Revenue = Revenue;
		params.Parameter1 = Parameter1;
		params.Parameter2 = Parameter2;
		params.Parameter3 = Parameter3;
		params.Parameter4 = Parameter4;
		params.Parameter5 = Parameter5;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F55F0
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKReportCurrencyType                          Currency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Revenue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportRevenueToThirdParty(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty"));
		
		ULLHSDKReport_ReportRevenueToThirdParty_Params params {};
		params.EventName = EventName;
		params.Currency = Currency;
		params.Revenue = Revenue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F5500
	 * 		Name   -> Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JsonContentStr                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULLHSDKReport::STATIC_ReportJsonToLilithImmediate(const class FString& EventName, const class FString& JsonContentStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate"));
		
		ULLHSDKReport_ReportJsonToLilithImmediate_Params params {};
		params.EventName = EventName;
		params.JsonContentStr = JsonContentStr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F4A30
	 * 		Name   -> Function LLHSDK.LLHSDKReport.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULLHSDKReport* ULLHSDKReport::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.GetInstance"));
		
		ULLHSDKReport_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F49E0
	 * 		Name   -> Function LLHSDK.LLHSDKReport.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULLHSDKReport::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function LLHSDK.LLHSDKReport.DestoryInstance"));
		
		ULLHSDKReport_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKReport.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKReport::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKReport"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULLHSDKSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULLHSDKSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class LLHSDK.LLHSDKSettings"));
		return ptr;
	}

}


