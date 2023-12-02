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
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.GetOwnerPlayerID
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::GetOwnerPlayerID(int32_t* PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.GetOwnerPlayerID"));
		
		UBPC_RequestMessage_C_GetOwnerPlayerID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerId != nullptr)
			*PlayerId = params.PlayerId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.ToMessageInfo
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FS_MessageRequest                           MessageInfo                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::ToMessageInfo(const class FString& Key, struct FS_MessageRequest* MessageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.ToMessageInfo"));
		
		UBPC_RequestMessage_C_ToMessageInfo_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageInfo != nullptr)
			*MessageInfo = params.MessageInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.ToString
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FS_MessageRequest                           MessageInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::ToString(const struct FS_MessageRequest& MessageInfo, class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.ToString"));
		
		UBPC_RequestMessage_C_ToString_Params params {};
		params.MessageInfo = MessageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_RequestMessage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.ReceiveBeginPlay"));
		
		UBPC_RequestMessage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.ReceiveRequest
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_MessageRequest                           Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::ReceiveRequest(const struct FS_MessageRequest& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.ReceiveRequest"));
		
		UBPC_RequestMessage_C_ReceiveRequest_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.SendReply
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_MessageRequest                           Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reply                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_RequestMessage_C::SendReply(const struct FS_MessageRequest& Info, bool Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.SendReply"));
		
		UBPC_RequestMessage_C_SendReply_Params params {};
		params.Info = Info;
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.ExecuteUbergraph_BPC_RequestMessage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::ExecuteUbergraph_BPC_RequestMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.ExecuteUbergraph_BPC_RequestMessage"));
		
		UBPC_RequestMessage_C_ExecuteUbergraph_BPC_RequestMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.OnGetReply__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Reply                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReplierPlayerID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::OnGetReply__DelegateSignature(const class FString& Handle, bool Reply, unsigned char Type, int32_t ReplierPlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.OnGetReply__DelegateSignature"));
		
		UBPC_RequestMessage_C_OnGetReply__DelegateSignature_Params params {};
		params.Handle = Handle;
		params.Reply = Reply;
		params.Type = Type;
		params.ReplierPlayerID = ReplierPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_RequestMessage.BPC_RequestMessage_C.OnReceiveRequest__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SenderPlayerID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RequestMessage_C::OnReceiveRequest__DelegateSignature(const class FString& Handle, unsigned char Type, int32_t SenderPlayerID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_RequestMessage.BPC_RequestMessage_C.OnReceiveRequest__DelegateSignature"));
		
		UBPC_RequestMessage_C_OnReceiveRequest__DelegateSignature_Params params {};
		params.Handle = Handle;
		params.Type = Type;
		params.SenderPlayerID = SenderPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_RequestMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_RequestMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_RequestMessage.BPC_RequestMessage_C"));
		return ptr;
	}

}


