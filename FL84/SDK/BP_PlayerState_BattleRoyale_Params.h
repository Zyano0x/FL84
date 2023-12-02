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
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.PlayerCanRebirthBlueprint
	 */
	struct ABP_PlayerState_BattleRoyale_C_PlayerCanRebirthBlueprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.PlayerIsResurrecting
	 */
	struct ABP_PlayerState_BattleRoyale_C_PlayerIsResurrecting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.IsPlayerWaitingForTeammatesHelp
	 */
	struct ABP_PlayerState_BattleRoyale_C_IsPlayerWaitingForTeammatesHelp_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetItemData
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetItemData_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M5NE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quality;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetPlayerChestOpen
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetPlayerChestOpen_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetSinglePlayerItem
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetSinglePlayerItem_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasItem;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_INDJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    count;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UZFY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetWeaponPartData
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetWeaponPartData_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8TT8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quality;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetPlayerItems
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetPlayerItems_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Get Player Accessories
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetPlayerAccessories_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Set Intervened By AI
	 */
	struct ABP_PlayerState_BattleRoyale_C_SetIntervenedByAI_Params
	{	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.GetNearestPos
	 */
	struct ABP_PlayerState_BattleRoyale_C_GetNearestPos_Params
	{
	public:
		E_GuidTargetType                                           Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LH6Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnRep_PlayerBattleState
	 */
	struct ABP_PlayerState_BattleRoyale_C_OnRep_PlayerBattleState_Params
	{	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.[s]SetPlayerState
	 */
	struct ABP_PlayerState_BattleRoyale_C_sSetPlayerState_Params
	{
	public:
		E_PlayerBattleState_BattleRoyale                           State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerState_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.Event_RespondReconnection
	 */
	struct ABP_PlayerState_BattleRoyale_C_Event_RespondReconnection_Params
	{	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ResurrectionStateChange
	 */
	struct ABP_PlayerState_BattleRoyale_C_ResurrectionStateChange_Params
	{
	public:
		EResurrectionState                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.RequestNearestPos
	 */
	struct ABP_PlayerState_BattleRoyale_C_RequestNearestPos_Params
	{
	public:
		E_GuidTargetType                                           Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnNearestPosReceived
	 */
	struct ABP_PlayerState_BattleRoyale_C_OnNearestPosReceived_Params
	{
	public:
		E_GuidTargetType                                           Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OTIV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnPlayerGainExperience
	 */
	struct ABP_PlayerState_BattleRoyale_C_OnPlayerGainExperience_Params
	{
	public:
		int32_t                                                    GainedExp;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentExp;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalExp;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EExpBehaviorType                                           BehaviorType;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.DelayAndBeginSpectate
	 */
	struct ABP_PlayerState_BattleRoyale_C_DelayAndBeginSpectate_Params
	{	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.ExecuteUbergraph_BP_PlayerState_BattleRoyale
	 */
	struct ABP_PlayerState_BattleRoyale_C_ExecuteUbergraph_BP_PlayerState_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZCSH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_BattleRoyale.BP_PlayerState_BattleRoyale_C.OnRequestReplied__DelegateSignature
	 */
	struct ABP_PlayerState_BattleRoyale_C_OnRequestReplied__DelegateSignature_Params
	{
	public:
		E_GuidTargetType                                           Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5S31[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
