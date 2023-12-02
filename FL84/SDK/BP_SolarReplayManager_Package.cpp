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
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UBP_SolarReplayManager_C::OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED"));
		
		UBP_SolarReplayManager_C_OnRecordingStartedDelegate_AE6F7B614EC71BD9E8EE58B2ED3BA5ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UBP_SolarReplayManager_C::OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6"));
		
		UBP_SolarReplayManager_C_OnRecordingStartedDelegate_05FA0E164F9BFCE227D9298B6C694CC6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UBP_SolarReplayManager_C::OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793"));
		
		UBP_SolarReplayManager_C_OnPlayingStartedDelegate_DD902EC047F0EDE3D20E3480AA4C6793_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaOnPostLoadMapWithWorld
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::LuaOnPostLoadMapWithWorld(const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaOnPostLoadMapWithWorld"));
		
		UBP_SolarReplayManager_C_LuaOnPostLoadMapWithWorld_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingStartFailed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_SolarReplayManager_C::ReceivePlayingStartFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingStartFailed"));
		
		UBP_SolarReplayManager_C_ReceivePlayingStartFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EReplayPlayingFinishReason                         reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      StreamerErrorCode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StreamerErrorMsg                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBP_SolarReplayManager_C::ReceivePlayingFinished(EReplayPlayingFinishReason reason, unsigned char StreamerErrorCode, const class FString& StreamerErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingFinished"));
		
		UBP_SolarReplayManager_C_ReceivePlayingFinished_Params params {};
		params.reason = reason;
		params.StreamerErrorCode = StreamerErrorCode;
		params.StreamerErrorMsg = StreamerErrorMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InBattleID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLive                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::RequestPlayReplay(const class FString& InBattleID, bool IsLive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplay"));
		
		UBP_SolarReplayManager_C_RequestPlayReplay_Params params {};
		params.InBattleID = InBattleID;
		params.IsLive = IsLive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplayOfCurrentBattle
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SolarReplayManager_C::RequestPlayReplayOfCurrentBattle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplayOfCurrentBattle"));
		
		UBP_SolarReplayManager_C_RequestPlayReplayOfCurrentBattle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.NotifyBackendPlayReplayFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool UBP_SolarReplayManager_C::NotifyBackendPlayReplayFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.NotifyBackendPlayReplayFinished"));
		
		UBP_SolarReplayManager_C_NotifyBackendPlayReplayFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetRequestTryStrategy
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Interval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Times                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::SetRequestTryStrategy(float Interval, int32_t Times)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetRequestTryStrategy"));
		
		UBP_SolarReplayManager_C_SetRequestTryStrategy_Params params {};
		params.Interval = Interval;
		params.Times = Times;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestBattleList
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PageSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::RequestBattleList(int32_t PageIndex, int32_t PageSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestBattleList"));
		
		UBP_SolarReplayManager_C_RequestBattleList_Params params {};
		params.PageIndex = PageIndex;
		params.PageSize = PageSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsHighlightVersionOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      HighlightFileName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBP_SolarReplayManager_C::IsHighlightVersionOut(const class FString& HighlightFileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsHighlightVersionOut"));
		
		UBP_SolarReplayManager_C_IsHighlightVersionOut_Params params {};
		params.HighlightFileName = HighlightFileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsRequestingReplayDownloadInfo
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool UBP_SolarReplayManager_C::IsRequestingReplayDownloadInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsRequestingReplayDownloadInfo"));
		
		UBP_SolarReplayManager_C_IsRequestingReplayDownloadInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetReadyToRecord
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsReady                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OBPlayerIDs                                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::SetReadyToRecord(bool bIsReady, TArray<class FString> OBPlayerIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetReadyToRecord"));
		
		UBP_SolarReplayManager_C_SetReadyToRecord_Params params {};
		params.bIsReady = bIsReady;
		params.OBPlayerIDs = OBPlayerIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReportHighlightConversion
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FHighlightReportData                        HighlightReportData                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::ReportHighlightConversion(const struct FHighlightReportData& HighlightReportData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReportHighlightConversion"));
		
		UBP_SolarReplayManager_C_ReportHighlightConversion_Params params {};
		params.HighlightReportData = HighlightReportData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetBattleIDByIndex
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBP_SolarReplayManager_C::GetBattleIDByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetBattleIDByIndex"));
		
		UBP_SolarReplayManager_C_GetBattleIDByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool UBP_SolarReplayManager_C::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsReady"));
		
		UBP_SolarReplayManager_C_IsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetStartRecordingParams
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FStartRecordingParams                       OutParams                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::GetStartRecordingParams(struct FStartRecordingParams* OutParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetStartRecordingParams"));
		
		UBP_SolarReplayManager_C_GetStartRecordingParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParams != nullptr)
			*OutParams = params.OutParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaBindDelegates
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_SolarReplayManager_C::LuaBindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaBindDelegates"));
		
		UBP_SolarReplayManager_C_LuaBindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.OnLiveWatchTargetLost
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_SolarReplayManager_C::OnLiveWatchTargetLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.OnLiveWatchTargetLost"));
		
		UBP_SolarReplayManager_C_OnLiveWatchTargetLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.SendLiveWatchOnlyMsg
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::SendLiveWatchOnlyMsg(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.SendLiveWatchOnlyMsg"));
		
		UBP_SolarReplayManager_C_SendLiveWatchOnlyMsg_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestWatchingLiveOfPlayer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBP_SolarReplayManager_C::RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestWatchingLiveOfPlayer"));
		
		UBP_SolarReplayManager_C_RequestWatchingLiveOfPlayer_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestCheckpointForLiveWatch
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBP_SolarReplayManager_C::RequestCheckpointForLiveWatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestCheckpointForLiveWatch"));
		
		UBP_SolarReplayManager_C_RequestCheckpointForLiveWatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SolarReplayManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SolarReplayManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C"));
		return ptr;
	}

}


