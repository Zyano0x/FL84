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
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.GetPlayerList
	 */
	struct UBPC_PlayerManager_C_GetPlayerList_Params
	{
	public:
		E_PlayerListType                                           Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1R9B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ABP_PlayerState_Framework_C*>                 ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.ReceiveBeginPlay
	 */
	struct UBPC_PlayerManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerDie
	 */
	struct UBPC_PlayerManager_C_OnPlayerDie_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerResurrect
	 */
	struct UBPC_PlayerManager_C_OnPlayerResurrect_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.BattleStart
	 */
	struct UBPC_PlayerManager_C_BattleStart_Params
	{	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.PlayerOut
	 */
	struct UBPC_PlayerManager_C_PlayerOut_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.OnPlayerJoin
	 */
	struct UBPC_PlayerManager_C_OnPlayerJoin_Params
	{
	public:
		class ASCMPlayerState*                                     NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAi;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_PlayerManager.BPC_PlayerManager_C.ExecuteUbergraph_BPC_PlayerManager
	 */
	struct UBPC_PlayerManager_C_ExecuteUbergraph_BPC_PlayerManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1LJV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
