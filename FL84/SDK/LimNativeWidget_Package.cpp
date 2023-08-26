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
	 * 		RVA    -> 0x00944480
	 * 		Name   -> Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              Permissions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       Results                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioPermissionHelperProxy::OnAndroidPermissionResult(TArray<class FString> Permissions, TArray<bool> Results)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult");
		
		UAudioPermissionHelperProxy_OnAndroidPermissionResult_Params params {};
		params.Permissions = Permissions;
		params.Results = Results;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009432A0
	 * 		Name   -> Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	EIOSAudioPermissionState UAudioPermissionHelperProxy::STATIC_CheckIOSAudioPermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission");
		
		UAudioPermissionHelperProxy_CheckIOSAudioPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009432A0
	 * 		Name   -> Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAudioPermissionHelperProxy::STATIC_CheckAndroidAudioPermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission");
		
		UAudioPermissionHelperProxy_CheckAndroidAudioPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008EE0F0
	 * 		Name   -> Function LimNativeWidget.AudioPermissionHelperProxy.AcquireIOSAudioPermission
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAudioPermissionHelperProxy::AcquireIOSAudioPermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.AudioPermissionHelperProxy.AcquireIOSAudioPermission");
		
		UAudioPermissionHelperProxy_AcquireIOSAudioPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008EE0F0
	 * 		Name   -> Function LimNativeWidget.AudioPermissionHelperProxy.AcquireAndroidAudioPermission
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAudioPermissionHelperProxy::AcquireAndroidAudioPermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.AudioPermissionHelperProxy.AcquireAndroidAudioPermission");
		
		UAudioPermissionHelperProxy_AcquireAndroidAudioPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioPermissionHelperProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioPermissionHelperProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.AudioPermissionHelperProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944E30
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InSelfPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::UpdateSelfPosition(const struct FVector& InSelfPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition");
		
		UChatGMEManager_UpdateSelfPosition_Params params {};
		params.InSelfPosition = InSelfPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944DA0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InRange                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::UpdateAudioRecvRange(int32_t InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange");
		
		UChatGMEManager_UpdateAudioRecvRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C150
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.UnRegisterLuaEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UChatGMEManager::UnRegisterLuaEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.UnRegisterLuaEvent");
		
		UChatGMEManager_UnRegisterLuaEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944D80
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.Uninit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::Uninit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.Uninit");
		
		UChatGMEManager_Uninit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944CD0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.SwitchRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InRoomId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UChatGMEManager::SwitchRoom(const class FString& InRoomId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.SwitchRoom");
		
		UChatGMEManager_SwitchRoom_Params params {};
		params.InRoomId = InRoomId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944C40
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InTeamId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::SetRangeAudioTeamID(int32_t InTeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID");
		
		UChatGMEManager_SetRangeAudioTeamID_Params params {};
		params.InTeamId = InTeamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944BC0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EChatGMERangeAudioMode                             InAudioMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::SetRangeAudioMode(EChatGMERangeAudioMode InAudioMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode");
		
		UChatGMEManager_SetRangeAudioMode_Params params {};
		params.InAudioMode = InAudioMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009448D0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EChatGMEAudioRouteSendType                         SendType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SendOpenIDList                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChatGMEAudioRouteRecvType                         RecvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              RecvOpenIDList                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::SetAudioSendAndRecvRules(EChatGMEAudioRouteSendType SendType, TArray<class FString> SendOpenIDList, EChatGMEAudioRouteRecvType RecvType, TArray<class FString> RecvOpenIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules");
		
		UChatGMEManager_SetAudioSendAndRecvRules_Params params {};
		params.SendType = SendType;
		params.SendOpenIDList = SendOpenIDList;
		params.RecvType = RecvType;
		params.RecvOpenIDList = RecvOpenIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944830
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.SelectSpeak
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDeviceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::SelectSpeak(const class FString& InDeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.SelectSpeak");
		
		UChatGMEManager_SelectSpeak_Params params {};
		params.InDeviceID = InDeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944790
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.SelectMic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDeviceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::SelectMic(const class FString& InDeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.SelectMic");
		
		UChatGMEManager_SelectMic_Params params {};
		params.InDeviceID = InDeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944770
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.PreInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::PreInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.PreInit");
		
		UChatGMEManager_PreInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataUserVolumes                     InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnUserVolumesDelegate__DelegateSignature(const struct FChatGMEDataUserVolumes& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature");
		
		UChatGMEManager_OnUserVolumesDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataUserUpdate                      InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnUserUpdateDelegate__DelegateSignature(const struct FChatGMEDataUserUpdate& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature");
		
		UChatGMEManager_OnUserUpdateDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataRoomOperator                    InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnRoomManagementOperatorDelegate__DelegateSignature(const struct FChatGMEDataRoomOperator& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature");
		
		UChatGMEManager_OnRoomManagementOperatorDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataResult                          Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnResultDelegate__DelegateSignature(const struct FChatGMEDataResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature");
		
		UChatGMEManager_OnResultDelegate__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataRecordCompleted                 InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnRecordCompletedDelegate__DelegateSignature(const struct FChatGMEDataRecordCompleted& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature");
		
		UChatGMEManager_OnRecordCompletedDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataNumberOfUserUpdate              InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnNumberOfUsersUpdateDelegate__DelegateSignature(const struct FChatGMEDataNumberOfUserUpdate& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature");
		
		UChatGMEManager_OnNumberOfUsersUpdateDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataNumberOfAudioStreamsUpdate      InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature(const struct FChatGMEDataNumberOfAudioStreamsUpdate& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature");
		
		UChatGMEManager_OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataFileInfo                        InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnNotifyFileInfoDelegate__DelegateSignature(const struct FChatGMEDataFileInfo& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature");
		
		UChatGMEManager_OnNotifyFileInfoDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      InData                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnNotifyDelegate__DelegateSignature(const class FString& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature");
		
		UChatGMEManager_OnNotifyDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009445C0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetGMETokenCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnGetAuthBuffer(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetGMETokenCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer");
		
		UChatGMEManager_OnGetAuthBuffer_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataDeviceInfo                      InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnDeviceChangedDelegate__DelegateSignature(const struct FChatGMEDataDeviceInfo& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature");
		
		UChatGMEManager_OnDeviceChangedDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataChangeRoomType                  InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnChangeRoomTypeDelegate__DelegateSignature(const struct FChatGMEDataChangeRoomType& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature");
		
		UChatGMEManager_OnChangeRoomTypeDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FChatGMEDataRoomQuality                     InData                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnChangeRoomQualityDelegate__DelegateSignature(const struct FChatGMEDataRoomQuality& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature");
		
		UChatGMEManager_OnChangeRoomQualityDelegate__DelegateSignature_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::OnAndroidPermissionResult__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature");
		
		UChatGMEManager_OnAndroidPermissionResult__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009443A0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.MediaMute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InMute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::MediaMute(const class FString& InUserId, bool InMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.MediaMute");
		
		UChatGMEManager_MediaMute_Params params {};
		params.InUserId = InUserId;
		params.InMute = InMute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944370
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.IsRoomEntered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::IsRoomEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.IsRoomEntered");
		
		UChatGMEManager_IsRoomEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944340
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.IsAudioSendEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::IsAudioSendEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.IsAudioSendEnabled");
		
		UChatGMEManager_IsAudioSendEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944310
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::IsAudioRecvEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled");
		
		UChatGMEManager_IsAudioRecvEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009442E0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::IsAudioPlayDeviceEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled");
		
		UChatGMEManager_IsAudioPlayDeviceEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009442B0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::IsAudioCaptureDeviceEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled");
		
		UChatGMEManager_IsAudioCaptureDeviceEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943580
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.InnerEnableMic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::InnerEnableMic(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.InnerEnableMic");
		
		UChatGMEManager_InnerEnableMic_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00944130
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.InitGME
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InEnvId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGMEUserID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::InitGME(const class FString& InEnvId, const class FString& InGMEUserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.InitGME");
		
		UChatGMEManager_InitGME_Params params {};
		params.InEnvId = InEnvId;
		params.InGMEUserID = InGMEUserID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943FA0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppId                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InEnvId                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::Init(const class FString& InUserId, const class FString& InAppId, const class FString& InEnvId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.Init");
		
		UChatGMEManager_Init_Params params {};
		params.InUserId = InUserId;
		params.InAppId = InAppId;
		params.InEnvId = InEnvId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943F70
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GetSpeakerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::GetSpeakerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GetSpeakerState");
		
		UChatGMEManager_GetSpeakerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943F20
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GetSpeakerList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FChatGMEDataDeviceInfo> UChatGMEManager::GetSpeakerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GetSpeakerList");
		
		UChatGMEManager_GetSpeakerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943EA0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UChatGMEManager::STATIC_GetRecordingLocalFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath");
		
		UChatGMEManager_GetRecordingLocalFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943E70
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GetMicState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::GetMicState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GetMicState");
		
		UChatGMEManager_GetMicState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943E20
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GetMicList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FChatGMEDataDeviceInfo> UChatGMEManager::GetMicList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GetMicList");
		
		UChatGMEManager_GetMicList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943DF0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UChatGMEManager* UChatGMEManager::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GetInstance");
		
		UChatGMEManager_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943D50
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::GameUploadRecordedFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile");
		
		UChatGMEManager_GameUploadRecordedFile_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943D30
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameStopRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::GameStopRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameStopRecording");
		
		UChatGMEManager_GameStopRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943D10
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameStopPlayFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::GameStopPlayFile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameStopPlayFile");
		
		UChatGMEManager_GameStopPlayFile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943C70
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameStartRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::GameStartRecording(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameStartRecording");
		
		UChatGMEManager_GameStartRecording_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943BD0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChatGMEManager::GameSetSpeakerVolume(int32_t Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume");
		
		UChatGMEManager_GameSetSpeakerVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943B30
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameSetMicVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MicVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChatGMEManager::GameSetMicVolume(int32_t MicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameSetMicVolume");
		
		UChatGMEManager_GameSetMicVolume_Params params {};
		params.MicVolume = MicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943B10
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameResumeRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::GameResumeRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameResumeRecording");
		
		UChatGMEManager_GameResumeRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943A70
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::GamePlayRecordedFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile");
		
		UChatGMEManager_GamePlayRecordedFile_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943A50
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GamePauseRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::GamePauseRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GamePauseRecording");
		
		UChatGMEManager_GamePauseRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009439A0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UChatGMEManager::GameGetVoiceFileDuration(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration");
		
		UChatGMEManager_GameGetVoiceFileDuration_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943970
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UChatGMEManager::GameGetSpeakerVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume");
		
		UChatGMEManager_GameGetSpeakerVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943940
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UChatGMEManager::GameGetSpeakerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel");
		
		UChatGMEManager_GameGetSpeakerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943910
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameGetMicVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UChatGMEManager::GameGetMicVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameGetMicVolume");
		
		UChatGMEManager_GameGetMicVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009438E0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameGetMicLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UChatGMEManager::GameGetMicLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameGetMicLevel");
		
		UChatGMEManager_GameGetMicLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009437E0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FileID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::GameDownloadRecordedFile(const class FString& FileID, const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile");
		
		UChatGMEManager_GameDownloadRecordedFile_Params params {};
		params.FileID = FileID;
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009437C0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.GameCancleRecording
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::GameCancleRecording()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.GameCancleRecording");
		
		UChatGMEManager_GameCancleRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943790
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.ExitRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UChatGMEManager::ExitRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.ExitRoom");
		
		UChatGMEManager_ExitRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009436A0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnterRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InRoomId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChatGMERoomType                                   InRoomType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UChatGMEManager::EnterRoom(const class FString& InRoomId, EChatGMERoomType InRoomType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnterRoom");
		
		UChatGMEManager_EnterRoom_Params params {};
		params.InRoomId = InRoomId;
		params.InRoomType = InRoomType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943610
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnableSpeaker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::EnableSpeaker(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnableSpeaker");
		
		UChatGMEManager_EnableSpeaker_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943580
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnableMic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::EnableMic(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnableMic");
		
		UChatGMEManager_EnableMic_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009434F0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnableAudioSend
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::EnableAudioSend(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnableAudioSend");
		
		UChatGMEManager_EnableAudioSend_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943460
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnableAudioRecv
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::EnableAudioRecv(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnableAudioRecv");
		
		UChatGMEManager_EnableAudioRecv_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009433D0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::EnableAudioPlayDevice(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice");
		
		UChatGMEManager_EnableAudioPlayDevice_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943340
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatGMEManager::EnableAudioCaptureDevice(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice");
		
		UChatGMEManager_EnableAudioCaptureDevice_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943320
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.DestroyInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UChatGMEManager::STATIC_DestroyInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.DestroyInstance");
		
		UChatGMEManager_DestroyInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00943300
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.DeleteCacheFiles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UChatGMEManager::DeleteCacheFiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.DeleteCacheFiles");
		
		UChatGMEManager_DeleteCacheFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009432D0
	 * 		Name   -> Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UChatGMEManager::CheckPlatformMicPermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission");
		
		UChatGMEManager_CheckPlatformMicPermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatGMEManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatGMEManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatGMEManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEmojiEntryData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEmojiEntryData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEmojiEntryData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataVoice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataVoice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataVoice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataCustomEmotion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataCustomEmotion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataCustomEmotion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListEntryDataShaderedGameCard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListEntryDataShaderedGameCard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListEntryDataShaderedGameCard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatListUserEntryData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatListUserEntryData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.ChatListUserEntryData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C150
	 * 		Name   -> Function LimNativeWidget.LimChatManager.UnRegisterLuaEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULimChatManager::UnRegisterLuaEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.UnRegisterLuaEvent");
		
		ULimChatManager_UnRegisterLuaEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C950
	 * 		Name   -> Function LimNativeWidget.LimChatManager.UnInitChatManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::UnInitChatManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.UnInitChatManager");
		
		ULimChatManager_UnInitChatManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C800
	 * 		Name   -> Function LimNativeWidget.LimChatManager.TranslateText
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Lang                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::TranslateText(const class FString& Text, const class FString& Lang, const class FString& ExtraInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.TranslateText");
		
		ULimChatManager_TranslateText_Params params {};
		params.Text = Text;
		params.Lang = Lang;
		params.ExtraInfo = ExtraInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C700
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SwitchConvTo
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChatListConvData                           InConvData                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RefreshConvList                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SwitchConvTo(const struct FChatListConvData& InConvData, bool RefreshConvList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SwitchConvTo");
		
		ULimChatManager_SwitchConvTo_Params params {};
		params.InConvData = InConvData;
		params.RefreshConvList = RefreshConvList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C660
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SetCtxLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Lang                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SetCtxLanguage(const class FString& Lang)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SetCtxLanguage");
		
		ULimChatManager_SetCtxLanguage_Params params {};
		params.Lang = Lang;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C5B0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SetConvRead
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChatListConvData                           ConvData                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SetConvRead(const struct FChatListConvData& ConvData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SetConvRead");
		
		ULimChatManager_SetConvRead_Params params {};
		params.ConvData = ConvData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C420
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SetConvMsgRead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MsgId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SetConvMsgRead(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& MsgId, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SetConvMsgRead");
		
		ULimChatManager_SetConvMsgRead_Params params {};
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.MsgId = MsgId;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C250
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ConvID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SendVoiceMessageToConv(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& FileID, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv");
		
		ULimChatManager_SendVoiceMessageToConv_Params params {};
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.FileID = FileID;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094C080
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SendTextMessageToConv
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ConvID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SendTextMessageToConv(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Message, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SendTextMessageToConv");
		
		ULimChatManager_SendTextMessageToConv_Params params {};
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.Message = Message;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094BF80
	 * 		Name   -> Function LimNativeWidget.LimChatManager.SendTextMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extra                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::SendTextMessage(const class FString& Message, const class FString& Extra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.SendTextMessage");
		
		ULimChatManager_SendTextMessage_Params params {};
		params.Message = Message;
		params.Extra = Extra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094B840
	 * 		Name   -> Function LimNativeWidget.LimChatManager.PostInitChatManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeReportConfig                      ReportConfig                                               (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeParkConfig                        ParkConfig                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::PostInitChatManager(const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.PostInitChatManager");
		
		ULimChatManager_PostInitChatManager_Params params {};
		params.ReportConfig = ReportConfig;
		params.ParkConfig = ParkConfig;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094B6D0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OpenChatUI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ChatWidgetPath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* ULimChatManager::OpenChatUI(class UObject* WorldContextObject, const class FString& ChatWidgetPath, int32_t ZOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OpenChatUI");
		
		ULimChatManager_OpenChatUI_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ChatWidgetPath = ChatWidgetPath;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               TranslateRes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TranslatedText                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Translator                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ExtraInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnTextTranslateDynamicDelegate__DelegateSignature(bool TranslateRes, const class FString& TranslatedText, const class FString& Translator, const class FString& ExtraInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnTextTranslateDynamicDelegate__DelegateSignature_Params params {};
		params.TranslateRes = TranslateRes;
		params.TranslatedText = TranslatedText;
		params.Translator = Translator;
		params.ExtraInfo = ExtraInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FChatListMessageData                        MsgCallBack                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnSendMessageCallBackDynamicDelegate__DelegateSignature(const struct FChatListMessageData& MsgCallBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnSendMessageCallBackDynamicDelegate__DelegateSignature_Params params {};
		params.MsgCallBack = MsgCallBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ULimChatManager::OnRedHintUpdateDynamicDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnRedHintUpdateDynamicDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FChatListMessageData                        Msg                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnReceiveMessageDynamicDelegate__DelegateSignature(const struct FChatListMessageData& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnReceiveMessageDynamicDelegate__DelegateSignature_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            MsgType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeDataBizFullObj                    NativeMsg                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32_t MsgType, const struct FLimNativeDataBizFullObj& NativeMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnReceiveLogicMessageDynamicDelegate__DelegateSignature_Params params {};
		params.MsgType = MsgType;
		params.NativeMsg = NativeMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008EE0F0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnOpenChatUI
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::OnOpenChatUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnOpenChatUI");
		
		ULimChatManager_OnOpenChatUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FNewChatListMessageData                     MsgCallBack                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RetData                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Code                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(const struct FNewChatListMessageData& MsgCallBack, const class FString& RetData, int32_t Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnNewSendMessageCallBackDynamicDelegate__DelegateSignature_Params params {};
		params.MsgCallBack = MsgCallBack;
		params.RetData = RetData;
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FNewChatListMessageData                     Msg                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnNewReceiveMessageDynamicDelegate__DelegateSignature(const struct FNewChatListMessageData& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnNewReceiveMessageDynamicDelegate__DelegateSignature_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094B520
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetMiscConfigInfoCallBack         RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnMiscConfigInfoHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetMiscConfigInfoCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle");
		
		ULimChatManager_OnMiscConfigInfoHandle_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094B2E0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnMessageSend
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnSendMsgCallBack                 RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnMessageSend(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSendMsgCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnMessageSend");
		
		ULimChatManager_OnMessageSend_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094B0F0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnMessageReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnMsgReceivedEventCallBack        RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnMessageReceived(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgReceivedEventCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnMessageReceived");
		
		ULimChatManager_OnMessageReceived_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               LoginRes                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Code                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RetData                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32_t Code, const class FString& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnLoginDynamicDelegate__DelegateSignature_Params params {};
		params.LoginRes = LoginRes;
		params.Code = Code;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094AF80
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnLogin
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnLoginCallBack                   RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnLogin(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnLoginCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnLogin");
		
		ULimChatManager_OnLogin_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094AE00
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnLogicMsgReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnMsgLogicReceivedEventCallBack   RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnLogicMsgReceived(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnLogicMsgReceived");
		
		ULimChatManager_OnLogicMsgReceived_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094ACD0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnLog
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnLog(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnLog");
		
		ULimChatManager_OnLog_Params params {};
		params.InWrapper = InWrapper;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bUp                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Left                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Top                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Right                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Bottom                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnInputBoxStateChangeDelegate__DelegateSignature(bool bUp, int32_t Left, int32_t Top, int32_t Right, int32_t Bottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature");
		
		ULimChatManager_OnInputBoxStateChangeDelegate__DelegateSignature_Params params {};
		params.bUp = bUp;
		params.Left = Left;
		params.Top = Top;
		params.Right = Right;
		params.Bottom = Bottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void ULimChatManager::OnGetUsersStateCallBackDynamicDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetUsersStateCallBackDynamicDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FChatListUserData>                   UserDataList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetUsersCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData> UserDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetUsersCallBackDynamicDelegate__DelegateSignature_Params params {};
		params.UserDataList = UserDataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094AAB0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetUserListState
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetUsersStateCallBack           RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetUserListState(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersStateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetUserListState");
		
		ULimChatManager_OnGetUserListState_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094A7E0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetUserListInfo
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetUsersCallBack                RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetUserListInfo(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetUserListInfo");
		
		ULimChatManager_OnGetUserListInfo_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094A680
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetUserInfo
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetUserCallBack                 RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetUserInfo(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUserCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetUserInfo");
		
		ULimChatManager_OnGetUserInfo_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FChatListUserData                           UserData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetUserCallBackDynamicDelegate__DelegateSignature(const struct FChatListUserData& UserData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetUserCallBackDynamicDelegate__DelegateSignature_Params params {};
		params.UserData = UserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094A4A0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetTextTranslateHandle
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeTextTranslateCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetTextTranslateHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeTextTranslateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetTextTranslateHandle");
		
		ULimChatManager_OnGetTextTranslateHandle_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094A390
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetNetStatHandle
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RetData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetNetStatHandle(const struct FLimNativeLowLevelWrapper& InWrapper, int32_t RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetNetStatHandle");
		
		ULimChatManager_OnGetNetStatHandle_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetNetStatDynamicDelegate__DelegateSignature(int32_t val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetNetStatDynamicDelegate__DelegateSignature_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094A1D0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetMessageInRange
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetMsgsCallBack                 RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetMessageInRange(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetMsgsCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetMessageInRange");
		
		ULimChatManager_OnGetMessageInRange_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Code                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetMessageDataDynamicDelegate__DelegateSignature(int32_t Code, const class FString& ConvID, ELimNativeConvType ConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetMessageDataDynamicDelegate__DelegateSignature_Params params {};
		params.Code = Code;
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FChatListUserData>                   FriendList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetFriendsCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData> FriendList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetFriendsCallBackDynamicDelegate__DelegateSignature_Params params {};
		params.FriendList = FriendList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949F00
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetFriends
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetFriendCallBack               RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetFriends(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetFriendCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetFriends");
		
		ULimChatManager_OnGetFriends_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949D80
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnGetConnStateHandle
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeGetConnStateCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetConnStateHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetConnStateCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnGetConnStateHandle");
		
		ULimChatManager_OnGetConnStateHandle_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32_t val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnGetConnStatDynamicDelegate__DelegateSignature_Params params {};
		params.Result = Result;
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               GetConvRes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnConvsGetDynamicDelegate__DelegateSignature_Params params {};
		params.GetConvRes = GetConvRes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949C10
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnConvRead
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnSetConvReadCallBack             RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConvRead(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSetConvReadCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnConvRead");
		
		ULimChatManager_OnConvRead_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009499D0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnConvListGet
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnConvsGetCallBack                RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConvListGet(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvsGetCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnConvListGet");
		
		ULimChatManager_OnConvListGet_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeConvHandleCallBackData            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConvHandleDynamicDelegate__DelegateSignature(bool Result, const struct FLimNativeConvHandleCallBackData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnConvHandleDynamicDelegate__DelegateSignature_Params params {};
		params.Result = Result;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949820
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnConvHandle
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnConvHandleCallBack              RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConvHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvHandleCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnConvHandle");
		
		ULimChatManager_OnConvHandle_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949650
	 * 		Name   -> Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FLimNativeLowLevelWrapper                   InWrapper                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLimNativeOnGetConvChatLevelConfigCallBack  RetData                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConvChatLevelConfig(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig");
		
		ULimChatManager_OnConvChatLevelConfig_Params params {};
		params.InWrapper = InWrapper;
		params.RetData = RetData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32_t val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnConfigInfoHandleDynamicDelegate__DelegateSignature_Params params {};
		params.Result = Result;
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature");
		
		ULimChatManager_OnConfigGetChatLevlDynamicDelegate__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949630
	 * 		Name   -> Function LimNativeWidget.LimChatManager.Logout
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::Logout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.Logout");
		
		ULimChatManager_Logout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949430
	 * 		Name   -> Function LimNativeWidget.LimChatManager.Login
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InAppId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InAppUserID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InRoleID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtra                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::Login(const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.Login");
		
		ULimChatManager_Login_Params params {};
		params.InAppId = InAppId;
		params.InAppUserID = InAppUserID;
		params.InToken = InToken;
		params.InRoleID = InRoleID;
		params.InExtra = InExtra;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009490D0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.InitChatManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLimNativeInitConfig                        InitConfig                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      InEnvId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InGMEUserID                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::InitChatManager(const struct FLimNativeInitConfig& InitConfig, const class FString& InEnvId, const class FString& InGMEUserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.InitChatManager");
		
		ULimChatManager_InitChatManager_Params params {};
		params.InitConfig = InitConfig;
		params.InEnvId = InEnvId;
		params.InGMEUserID = InGMEUserID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00949000
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetUserListState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              InUserIDList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::GetUserListState(TArray<class FString> InUserIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetUserListState");
		
		ULimChatManager_GetUserListState_Params params {};
		params.InUserIDList = InUserIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948E90
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetUserListInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              InUserIDList                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::GetUserListInfo(TArray<class FString> InUserIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetUserListInfo");
		
		ULimChatManager_GetUserListInfo_Params params {};
		params.InUserIDList = InUserIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948DF0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetUserInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InUserId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::GetUserInfo(const class FString& InUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetUserInfo");
		
		ULimChatManager_GetUserInfo_Params params {};
		params.InUserId = InUserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948DD0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetMiscConfigInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::GetMiscConfigInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetMiscConfigInfo");
		
		ULimChatManager_GetMiscConfigInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948C40
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetMessageInRange
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class FString                                      ConvID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FromMsgId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToMsgId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::GetMessageInRange(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetMessageInRange");
		
		ULimChatManager_GetMessageInRange_Params params {};
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.FromMsgId = FromMsgId;
		params.ToMsgId = ToMsgId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948B90
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetMessage
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FChatListConvData                           TargetConv                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::GetMessage(const struct FChatListConvData& TargetConv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetMessage");
		
		ULimChatManager_GetMessage_Params params {};
		params.TargetConv = TargetConv;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948B10
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetLimSlssvr
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimChatManager::STATIC_GetLimSlssvr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetLimSlssvr");
		
		ULimChatManager_GetLimSlssvr_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948A90
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetLimSDKRegion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString ULimChatManager::STATIC_GetLimSDKRegion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetLimSDKRegion");
		
		ULimChatManager_GetLimSDKRegion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948A60
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetLimGameID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULimChatManager::STATIC_GetLimGameID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetLimGameID");
		
		ULimChatManager_GetLimGameID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948A30
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULimChatManager* ULimChatManager::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetInstance");
		
		ULimChatManager_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948A10
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetFriendList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::GetFriendList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetFriendList");
		
		ULimChatManager_GetFriendList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009489E0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetFarlightDomain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t ULimChatManager::STATIC_GetFarlightDomain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetFarlightDomain");
		
		ULimChatManager_GetFarlightDomain_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009487A0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetConvMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ConvID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FromMsgId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToMsgId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::GetConvMessage(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetConvMessage");
		
		ULimChatManager_GetConvMessage_Params params {};
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		params.FromMsgId = FromMsgId;
		params.ToMsgId = ToMsgId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948780
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetConvList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::GetConvList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetConvList");
		
		ULimChatManager_GetConvList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948760
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetConvChatLevelConfig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::GetConvChatLevelConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetConvChatLevelConfig");
		
		ULimChatManager_GetConvChatLevelConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948740
	 * 		Name   -> Function LimNativeWidget.LimChatManager.GetConnState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULimChatManager::GetConnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.GetConnState");
		
		ULimChatManager_GetConnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948610
	 * 		Name   -> Function LimNativeWidget.LimChatManager.DiscardConv
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ConvID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELimNativeConvType                                 ConvType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULimChatManager::DiscardConv(const class FString& ConvID, ELimNativeConvType ConvType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.DiscardConv");
		
		ULimChatManager_DiscardConv_Params params {};
		params.ConvID = ConvID;
		params.ConvType = ConvType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009485F0
	 * 		Name   -> Function LimNativeWidget.LimChatManager.DestroyInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULimChatManager::STATIC_DestroyInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.DestroyInstance");
		
		ULimChatManager_DestroyInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00948530
	 * 		Name   -> Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FChatListConvData                           InConvData                                                 (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULimChatManager::CheckTargetIsContainIn(const struct FChatListConvData& InConvData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn");
		
		ULimChatManager_CheckTargetIsContainIn_Params params {};
		params.InConvData = InConvData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimChatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimChatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.LimChatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DB60
	 * 		Name   -> Function LimNativeWidget.LimNativeWidgetSettings.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULimNativeWidgetSettings* ULimNativeWidgetSettings::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.LimNativeWidgetSettings.GetInstance");
		
		ULimNativeWidgetSettings_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULimNativeWidgetSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULimNativeWidgetSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.LimNativeWidgetSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E8C0
	 * 		Name   -> Function LimNativeWidget.NertcManager.UpdateSelfPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InSelfPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    InSelfRotator                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::UpdateSelfPosition(const struct FVector& InSelfPosition, const struct FRotator& InSelfRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.UpdateSelfPosition");
		
		UNertcManager_UpdateSelfPosition_Params params {};
		params.InSelfPosition = InSelfPosition;
		params.InSelfRotator = InSelfRotator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E830
	 * 		Name   -> Function LimNativeWidget.NertcManager.UpdateAudioRecvRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InRange                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::UpdateAudioRecvRange(int32_t InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.UpdateAudioRecvRange");
		
		UNertcManager_UpdateAudioRecvRange_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C150
	 * 		Name   -> Function LimNativeWidget.NertcManager.UnRegisterLuaEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UNertcManager::UnRegisterLuaEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.UnRegisterLuaEvent");
		
		UNertcManager_UnRegisterLuaEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E810
	 * 		Name   -> Function LimNativeWidget.NertcManager.Uninit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNertcManager::Uninit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.Uninit");
		
		UNertcManager_Uninit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E660
	 * 		Name   -> Function LimNativeWidget.NertcManager.SwitchRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RoomID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Uid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TeamID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AudioDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SwitchRoom(const class FString& RoomID, const class FString& AppToken, int32_t Uid, int32_t TeamID, int32_t AudioDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SwitchRoom");
		
		UNertcManager_SwitchRoom_Params params {};
		params.RoomID = RoomID;
		params.AppToken = AppToken;
		params.Uid = Uid;
		params.TeamID = TeamID;
		params.AudioDistance = AudioDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E5B0
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    OpenIDList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetSubscribeAudioOnlyBy(TArray<int32_t> OpenIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy");
		
		UNertcManager_SetSubscribeAudioOnlyBy_Params params {};
		params.OpenIDList = OpenIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E500
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    OpenIDList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetSubscribeAudioBlocklist(TArray<int32_t> OpenIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist");
		
		UNertcManager_SetSubscribeAudioBlocklist_Params params {};
		params.OpenIDList = OpenIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E450
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    OpenIDList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetSubscribeAudioAllowlist(TArray<int32_t> OpenIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist");
		
		UNertcManager_SetSubscribeAudioAllowlist_Params params {};
		params.OpenIDList = OpenIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E3C0
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetRangeAudioTeamID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TeamID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetRangeAudioTeamID(int32_t TeamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetRangeAudioTeamID");
		
		UNertcManager_SetRangeAudioTeamID_Params params {};
		params.TeamID = TeamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E340
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetRangeAudioMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EChatGMERangeAudioMode                             InAudioMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetRangeAudioMode(EChatGMERangeAudioMode InAudioMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetRangeAudioMode");
		
		UNertcManager_SetRangeAudioMode_Params params {};
		params.InAudioMode = InAudioMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E2B0
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetClientRole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bBroadCast                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetClientRole(bool bBroadCast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetClientRole");
		
		UNertcManager_SetClientRole_Params params {};
		params.bBroadCast = bBroadCast;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008EE0F0
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetAudioSessionRestriction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNertcManager::SetAudioSessionRestriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetAudioSessionRestriction");
		
		UNertcManager_SetAudioSessionRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E110
	 * 		Name   -> Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EChatGMEAudioRouteSendType                         InSendType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InSendOpenIDList                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EChatGMEAudioRouteRecvType                         InRecvType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    InRecvOpenIDList                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SetAudioSendAndRecvRules(EChatGMEAudioRouteSendType InSendType, TArray<int32_t> InSendOpenIDList, EChatGMEAudioRouteRecvType InRecvType, TArray<int32_t> InRecvOpenIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules");
		
		UNertcManager_SetAudioSendAndRecvRules_Params params {};
		params.InSendType = InSendType;
		params.InSendOpenIDList = InSendOpenIDList;
		params.InRecvType = InRecvType;
		params.InRecvOpenIDList = InRecvOpenIDList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094E070
	 * 		Name   -> Function LimNativeWidget.NertcManager.SelectSpeak
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDeviceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SelectSpeak(const class FString& InDeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SelectSpeak");
		
		UNertcManager_SelectSpeak_Params params {};
		params.InDeviceID = InDeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DFD0
	 * 		Name   -> Function LimNativeWidget.NertcManager.SelectMic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InDeviceID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::SelectMic(const class FString& InDeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.SelectMic");
		
		UNertcManager_SelectMic_Params params {};
		params.InDeviceID = InDeviceID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               EnterRoom                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Uid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32_t Uid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature");
		
		UNertcManager_OnUserRoomStateChange__DelegateSignature_Params params {};
		params.EnterRoom = EnterRoom;
		params.Uid = Uid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FNertcUserUpdateData                        UserData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnUserInfoUpdateDelegate__DelegateSignature(const struct FNertcUserUpdateData& UserData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature");
		
		UNertcManager_OnUserInfoUpdateDelegate__DelegateSignature_Params params {};
		params.UserData = UserData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnNertcConnectionChange__DelegateSignature(int32_t State, int32_t reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature");
		
		UNertcManager_OnNertcConnectionChange__DelegateSignature_Params params {};
		params.State = State;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVad                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnLocalUserVolumeChanged__DelegateSignature(int32_t Volume, bool bVad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature");
		
		UNertcManager_OnLocalUserVolumeChanged__DelegateSignature_Params params {};
		params.Volume = Volume;
		params.bVad = bVad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnExitRoomDelegate__DelegateSignature(int32_t Result, int64_t reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature");
		
		UNertcManager_OnExitRoomDelegate__DelegateSignature_Params params {};
		params.Result = Result;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int64_t                                            RoomID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Uid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            Elapsed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnEnterRoomDelegate__DelegateSignature(int64_t RoomID, int32_t Uid, int32_t Result, int64_t Elapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature");
		
		UNertcManager_OnEnterRoomDelegate__DelegateSignature_Params params {};
		params.RoomID = RoomID;
		params.Uid = Uid;
		params.Result = Result;
		params.Elapsed = Elapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bChanged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnAudioDeviceStateChanged__DelegateSignature(bool bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature");
		
		UNertcManager_OnAudioDeviceStateChanged__DelegateSignature_Params params {};
		params.bChanged = bChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::OnAndroidPermissionResult__DelegateSignature(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature");
		
		UNertcManager_OnAndroidPermissionResult__DelegateSignature_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DF40
	 * 		Name   -> Function LimNativeWidget.NertcManager.MuteLocalStream
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::MuteLocalStream(bool bMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.MuteLocalStream");
		
		UNertcManager_MuteLocalStream_Params params {};
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DE70
	 * 		Name   -> Function LimNativeWidget.NertcManager.MediaMute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Uid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::MediaMute(int32_t Uid, bool bMute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.MediaMute");
		
		UNertcManager_MediaMute_Params params {};
		params.Uid = Uid;
		params.bMute = bMute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DE40
	 * 		Name   -> Function LimNativeWidget.NertcManager.IsRoomEntered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNertcManager::IsRoomEntered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.IsRoomEntered");
		
		UNertcManager_IsRoomEntered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DD00
	 * 		Name   -> Function LimNativeWidget.NertcManager.InnerEnterRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RoomID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Uid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::InnerEnterRoom(const class FString& RoomID, const class FString& AppToken, int32_t Uid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.InnerEnterRoom");
		
		UNertcManager_InnerEnterRoom_Params params {};
		params.RoomID = RoomID;
		params.AppToken = AppToken;
		params.Uid = Uid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D710
	 * 		Name   -> Function LimNativeWidget.NertcManager.InnerEnableMic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::InnerEnableMic(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.InnerEnableMic");
		
		UNertcManager_InnerEnableMic_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DC60
	 * 		Name   -> Function LimNativeWidget.NertcManager.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Appkey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::Init(const class FString& Appkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.Init");
		
		UNertcManager_Init_Params params {};
		params.Appkey = Appkey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DC10
	 * 		Name   -> Function LimNativeWidget.NertcManager.GetSpeakerList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FChatGMEDataDeviceInfo> UNertcManager::GetSpeakerList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.GetSpeakerList");
		
		UNertcManager_GetSpeakerList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DBC0
	 * 		Name   -> Function LimNativeWidget.NertcManager.GetMicList
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FChatGMEDataDeviceInfo> UNertcManager::GetMicList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.GetMicList");
		
		UNertcManager_GetMicList_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DB90
	 * 		Name   -> Function LimNativeWidget.NertcManager.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UNertcManager* UNertcManager::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.GetInstance");
		
		UNertcManager_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DAC0
	 * 		Name   -> Function LimNativeWidget.NertcManager.GameSetSpeakerVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNertcManager::GameSetSpeakerVolume(int32_t Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.GameSetSpeakerVolume");
		
		UNertcManager_GameSetSpeakerVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DA20
	 * 		Name   -> Function LimNativeWidget.NertcManager.GameSetMicVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            MicVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNertcManager::GameSetMicVolume(int32_t MicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.GameSetMicVolume");
		
		UNertcManager_GameSetMicVolume_Params params {};
		params.MicVolume = MicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094DA00
	 * 		Name   -> Function LimNativeWidget.NertcManager.ExitRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNertcManager::ExitRoom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.ExitRoom");
		
		UNertcManager_ExitRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D8C0
	 * 		Name   -> Function LimNativeWidget.NertcManager.EnterRoom
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      RoomID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Uid                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::EnterRoom(const class FString& RoomID, const class FString& AppToken, int32_t Uid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.EnterRoom");
		
		UNertcManager_EnterRoom_Params params {};
		params.RoomID = RoomID;
		params.AppToken = AppToken;
		params.Uid = Uid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D830
	 * 		Name   -> Function LimNativeWidget.NertcManager.EnableSpeaker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::EnableSpeaker(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.EnableSpeaker");
		
		UNertcManager_EnableSpeaker_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D7A0
	 * 		Name   -> Function LimNativeWidget.NertcManager.EnableRangeVoice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnbale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::EnableRangeVoice(bool bEnbale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.EnableRangeVoice");
		
		UNertcManager_EnableRangeVoice_Params params {};
		params.bEnbale = bEnbale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D710
	 * 		Name   -> Function LimNativeWidget.NertcManager.EnableMic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::EnableMic(bool InEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.EnableMic");
		
		UNertcManager_EnableMic_Params params {};
		params.InEnable = InEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D600
	 * 		Name   -> Function LimNativeWidget.NertcManager.EnabelAudioIndication
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InEnable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            millions                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnbaleLocal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNertcManager::EnabelAudioIndication(bool InEnable, int32_t millions, bool bEnbaleLocal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.EnabelAudioIndication");
		
		UNertcManager_EnabelAudioIndication_Params params {};
		params.InEnable = InEnable;
		params.millions = millions;
		params.bEnbaleLocal = bEnbaleLocal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0094D5E0
	 * 		Name   -> Function LimNativeWidget.NertcManager.DestroyInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UNertcManager::STATIC_DestroyInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LimNativeWidget.NertcManager.DestroyInstance");
		
		UNertcManager_DestroyInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNertcManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNertcManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LimNativeWidget.NertcManager");
		return ptr;
	}

}


