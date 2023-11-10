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
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		struct FAnoSDKAntiData                             AntiData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::OnAnoSentAntiData__DelegateSignature(const struct FAnoSDKAntiData& AntiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature"));
		
		UAnoSDK_OnAnoSentAntiData__DelegateSignature_Params params {};
		params.AntiData = AntiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AntiData                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::OnAnoRecvAntiData__DelegateSignature(int32_t Type, const class FString& AntiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature"));
		
		UAnoSDK_OnAnoRecvAntiData__DelegateSignature_Params params {};
		params.Type = Type;
		params.AntiData = AntiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C7E0
	 * 		Name   -> Function AnoSDK.AnoSDK.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UAnoSDK* UAnoSDK::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.GetInstance"));
		
		UAnoSDK_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C7C0
	 * 		Name   -> Function AnoSDK.AnoSDK.DestoryInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_DestoryInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.DestoryInstance"));
		
		UAnoSDK_DestoryInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C6A0
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETssSDKEntryId                                     EntryId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OpenId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKSetUserInfo(ETssSDKEntryId EntryId, const class FString& OpenId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo"));
		
		UAnoSDK_AnoUESDKSetUserInfo_Params params {};
		params.EntryId = EntryId;
		params.OpenId = OpenId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0330
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      DomainName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKSetCSChannelDomain(const class FString& DomainName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain"));
		
		UAnoSDK_AnoUESDKSetCSChannelDomain_Params params {};
		params.DomainName = DomainName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0330
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKSetChannelIP(const class FString& IP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP"));
		
		UAnoSDK_AnoUESDKSetChannelIP_Params params {};
		params.IP = IP;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F3790
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKSendSDKCoreData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData"));
		
		UAnoSDK_AnoUESDKSendSDKCoreData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F3790
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKSendDataToSvr
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKSendDataToSvr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKSendDataToSvr"));
		
		UAnoSDK_AnoUESDKSendDataToSvr_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C680
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKSendCoreTimeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData"));
		
		UAnoSDK_AnoUESDKSendCoreTimeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B8070
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKReportThreadShutDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown"));
		
		UAnoSDK_AnoUESDKReportThreadShutDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009B8070
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKReportThreadInit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKReportThreadInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKReportThreadInit"));
		
		UAnoSDK_AnoUESDKReportThreadInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F3790
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKRegistInfoListener
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKRegistInfoListener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKRegistInfoListener"));
		
		UAnoSDK_AnoUESDKRegistInfoListener_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F3790
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKOnResume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKOnResume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKOnResume"));
		
		UAnoSDK_AnoUESDKOnResume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C510
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Buf                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Len                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Crc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKOnRecvSignature(const class FString& Name, const class FString& Buf, int32_t Len, int32_t Crc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature"));
		
		UAnoSDK_AnoUESDKOnRecvSignature_Params params {};
		params.Name = Name;
		params.Buf = Buf;
		params.Len = Len;
		params.Crc = Crc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F0330
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKOnRecvData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKOnRecvData(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKOnRecvData"));
		
		UAnoSDK_AnoUESDKOnRecvData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009F3790
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKOnPause
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnoSDK::STATIC_AnoUESDKOnPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKOnPause"));
		
		UAnoSDK_AnoUESDKOnPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C3F0
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKIoctl
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Request                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Cmd                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKIoctl(int32_t Request, const class FString& Cmd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKIoctl"));
		
		UAnoSDK_AnoUESDKIoctl_Params params {};
		params.Request = Request;
		params.Cmd = Cmd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C9C320
	 * 		Name   -> Function AnoSDK.AnoSDK.AnoUESDKInit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            GameID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Appkey                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnoSDK::STATIC_AnoUESDKInit(int32_t GameID, const class FString& Appkey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function AnoSDK.AnoSDK.AnoUESDKInit"));
		
		UAnoSDK_AnoUESDKInit_Params params {};
		params.GameID = GameID;
		params.Appkey = Appkey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnoSDK.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnoSDK::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AnoSDK.AnoSDK"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnoSDKSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnoSDKSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class AnoSDK.AnoSDKSettings"));
		return ptr;
	}

}


