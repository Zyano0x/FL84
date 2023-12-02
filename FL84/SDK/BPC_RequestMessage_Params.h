#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.GetOwnerPlayerID
	 */
	struct UBPC_RequestMessage_C_GetOwnerPlayerID_Params
	{
	public:
		int32_t                                                    PlayerId;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7PNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.ToMessageInfo
	 */
	struct UBPC_RequestMessage_C_ToMessageInfo_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FS_MessageRequest                                   MessageInfo;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FWJ5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.ToString
	 */
	struct UBPC_RequestMessage_C_ToString_Params
	{
	public:
		struct FS_MessageRequest                                   MessageInfo;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NESS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.ReceiveBeginPlay
	 */
	struct UBPC_RequestMessage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.ReceiveRequest
	 */
	struct UBPC_RequestMessage_C_ReceiveRequest_Params
	{
	public:
		struct FS_MessageRequest                                   Info;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.SendReply
	 */
	struct UBPC_RequestMessage_C_SendReply_Params
	{
	public:
		struct FS_MessageRequest                                   Info;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reply;                                                   // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.ExecuteUbergraph_BPC_RequestMessage
	 */
	struct UBPC_RequestMessage_C_ExecuteUbergraph_BPC_RequestMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5NHP[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.OnGetReply__DelegateSignature
	 */
	struct UBPC_RequestMessage_C_OnGetReply__DelegateSignature_Params
	{
	public:
		class FString                                              Handle;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Reply;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              Type;                                                    // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NUJS[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReplierPlayerID;                                         // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_RequestMessage.BPC_RequestMessage_C.OnReceiveRequest__DelegateSignature
	 */
	struct UBPC_RequestMessage_C_OnReceiveRequest__DelegateSignature_Params
	{
	public:
		class FString                                              Handle;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              Type;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1QBO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SenderPlayerID;                                          // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
