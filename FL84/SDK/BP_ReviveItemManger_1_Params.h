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
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.GetResurrectByItemUI
	 */
	struct ABP_ReviveItemManger_0_C_GetResurrectByItemUI_Params
	{
	public:
		class UUI_Resurrect_C*                                     Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.SetPlayerReviveData
	 */
	struct ABP_ReviveItemManger_0_C_SetPlayerReviveData_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FF_ReviveItemData                                   Data;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.GetPlayerReviveData
	 */
	struct ABP_ReviveItemManger_0_C_GetPlayerReviveData_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FF_ReviveItemData                                   Data;                                                    // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bFind;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S5X5[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.RemovePlayerFromRevivingPlayerArr
	 */
	struct ABP_ReviveItemManger_0_C_RemovePlayerFromRevivingPlayerArr_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.AddPlayerIntoRevivingPlayerArr
	 */
	struct ABP_ReviveItemManger_0_C_AddPlayerIntoRevivingPlayerArr_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnRep_AdvanceNotice
	 */
	struct ABP_ReviveItemManger_0_C_OnRep_AdvanceNotice_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnRep_ClearItemNotice
	 */
	struct ABP_ReviveItemManger_0_C_OnRep_ClearItemNotice_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.[ S]Try to Revive Player with Item
	 */
	struct ABP_ReviveItemManger_0_C_STrytoRevivePlayerwithItem_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3JYW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Set Player Use Revive Item Times
	 */
	struct ABP_ReviveItemManger_0_C_SetPlayerUseReviveItemTimes_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.[ A]Get Player Use Revive Item Times
	 */
	struct ABP_ReviveItemManger_0_C_AGetPlayerUseReviveItemTimes_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.CanPlayerUseReviveItem
	 */
	struct ABP_ReviveItemManger_0_C_CanPlayerUseReviveItem_Params
	{
	public:
		class ASolarPlayerState*                                   InPlayerState;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCheckItemNum;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y5SL[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.CanGlobalUseReviveItem
	 */
	struct ABP_ReviveItemManger_0_C_CanGlobalUseReviveItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.RevivePlayer
	 */
	struct ABP_ReviveItemManger_0_C_RevivePlayer_Params
	{
	public:
		unsigned char                                              UnknownData_PXVY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          _;                                                       // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       _bool_;                                                  // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SWIE[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ReceiveBeginPlay
	 */
	struct ABP_ReviveItemManger_0_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_ClearRevive
	 */
	struct ABP_ReviveItemManger_0_C_Event_ClearRevive_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnPlayerResurrected
	 */
	struct ABP_ReviveItemManger_0_C_OnPlayerResurrected_Params
	{
	public:
		E_ResurrectType                                            ResurrectType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0S5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerState_Framework_C*                         TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_ClearReviveNotifyInAdvance
	 */
	struct ABP_ReviveItemManger_0_C_Event_ClearReviveNotifyInAdvance_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_InitReviveItem
	 */
	struct ABP_ReviveItemManger_0_C_Event_InitReviveItem_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.UpdateTime
	 */
	struct ABP_ReviveItemManger_0_C_UpdateTime_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.DownReviveImmediately
	 */
	struct ABP_ReviveItemManger_0_C_DownReviveImmediately_Params
	{
	public:
		class ASolarPlayerState*                                   Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnPlayerHealthStateChanged
	 */
	struct ABP_ReviveItemManger_0_C_OnPlayerHealthStateChanged_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_CharacterHealthState                                     NewState;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ReviveDisableNotice
	 */
	struct ABP_ReviveItemManger_0_C_ReviveDisableNotice_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.Event_PlayerReconnect
	 */
	struct ABP_ReviveItemManger_0_C_Event_PlayerReconnect_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnStartReviveItemRecycleCountDownDataRequested
	 */
	struct ABP_ReviveItemManger_0_C_OnStartReviveItemRecycleCountDownDataRequested_Params
	{	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.OnSpecTargetChanged_Event_1
	 */
	struct ABP_ReviveItemManger_0_C_OnSpecTargetChanged_Event_1_Params
	{
	public:
		class ASolarPlayerState*                                   OldTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASolarPlayerState*                                   NewTarget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_1.BP_ReviveItemManger_0_C.ExecuteUbergraph_BP_ReviveItemManger_1
	 */
	struct ABP_ReviveItemManger_0_C_ExecuteUbergraph_BP_ReviveItemManger_1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
