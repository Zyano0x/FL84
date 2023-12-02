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
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnRep_GameState
	 */
	struct ABP_GameState_Framework_C_OnRep_GameState_Params
	{	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.SetGameState
	 */
	struct ABP_GameState_Framework_C_SetGameState_Params
	{
	public:
		ESCMInGameState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnDataManagerPrepare
	 */
	struct ABP_GameState_Framework_C_OnDataManagerPrepare_Params
	{	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.ReceiveBeginPlay
	 */
	struct ABP_GameState_Framework_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnOBPlayerListChange
	 */
	struct ABP_GameState_Framework_C_OnOBPlayerListChange_Params
	{	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnCustomRoomDataChange
	 */
	struct ABP_GameState_Framework_C_OnCustomRoomDataChange_Params
	{
	public:
		struct FCustomRoomData                                     InCustomRoomData;                                        // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnPlayerBattleStateChange
	 */
	struct ABP_GameState_Framework_C_OnPlayerBattleStateChange_Params
	{
	public:
		class ASCMPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.ExecuteUbergraph_BP_GameState_Framework
	 */
	struct ABP_GameState_Framework_C_ExecuteUbergraph_BP_GameState_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_34KO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnGameStateChanged__DelegateSignature
	 */
	struct ABP_GameState_Framework_C_OnGameStateChanged__DelegateSignature_Params
	{
	public:
		ESCMInGameState                                            NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnPlayerBattleStateChanged__DelegateSignature
	 */
	struct ABP_GameState_Framework_C_OnPlayerBattleStateChanged__DelegateSignature_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnRoomDataChanged__DelegateSignature
	 */
	struct ABP_GameState_Framework_C_OnRoomDataChanged__DelegateSignature_Params
	{
	public:
		struct FCustomRoomData                                     RoomData;                                                // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnOBPlayerListChanged__DelegateSignature
	 */
	struct ABP_GameState_Framework_C_OnOBPlayerListChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BP_GameState_Framework.BP_GameState_Framework_C.OnBasicSystemReady_0__DelegateSignature
	 */
	struct ABP_GameState_Framework_C_OnBasicSystemReady_0__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
