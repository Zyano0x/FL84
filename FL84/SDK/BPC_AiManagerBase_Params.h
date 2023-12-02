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
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetMatchTeammateCount
	 */
	struct UBPC_AiManagerBase_C_GetMatchTeammateCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z32P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetRandomDifficulty
	 */
	struct UBPC_AiManagerBase_C_GetRandomDifficulty_Params
	{
	public:
		int32_t                                                    Difficulty;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JYAI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.GetMemberAIOrder
	 */
	struct UBPC_AiManagerBase_C_GetMemberAIOrder_Params
	{
	public:
		TMap<class FString, int32_t>                               TeamCount;                                               // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.ReceiveBeginPlay
	 */
	struct UBPC_AiManagerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.OnPlayerJoin
	 */
	struct UBPC_AiManagerBase_C_OnPlayerJoin_Params
	{
	public:
		class ASCMPlayerState*                                     NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAi;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.CustomEvent_1
	 */
	struct UBPC_AiManagerBase_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BPC_AiManagerBase.BPC_AiManagerBase_C.ExecuteUbergraph_BPC_AiManagerBase
	 */
	struct UBPC_AiManagerBase_C_ExecuteUbergraph_BPC_AiManagerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
