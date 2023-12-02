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
	 * Function BP_MessageObj.BP_MessageObj_C.Init
	 */
	struct UBP_MessageObj_C_Init_Params
	{
	public:
		struct FS_MessageRequest                                   MessageInfo;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Time;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QT0A[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MessageObj.BP_MessageObj_C.ReplyDeal
	 */
	struct UBP_MessageObj_C_ReplyDeal_Params
	{
	public:
		int32_t                                                    BlockTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reply;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MessageObj.BP_MessageObj_C.Timeout
	 */
	struct UBP_MessageObj_C_Timeout_Params
	{	};

	/**
	 * Function BP_MessageObj.BP_MessageObj_C.BlockTimeUp
	 */
	struct UBP_MessageObj_C_BlockTimeUp_Params
	{	};

	/**
	 * Function BP_MessageObj.BP_MessageObj_C.ExecuteUbergraph_BP_MessageObj
	 */
	struct UBP_MessageObj_C_ExecuteUbergraph_BP_MessageObj_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MessageObj.BP_MessageObj_C.OnTimeOut__DelegateSignature
	 */
	struct UBP_MessageObj_C_OnTimeOut__DelegateSignature_Params
	{
	public:
		struct FS_MessageRequest                                   Info;                                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
