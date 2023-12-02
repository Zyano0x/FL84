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
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.IsWarmGame
	 */
	struct UBPC_WarmGame_BattleRoyale_C_IsWarmGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XY7Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetAIPickResult
	 */
	struct UBPC_WarmGame_BattleRoyale_C_GetAIPickResult_Params
	{
	public:
		TArray<int32_t>                                            InCharactetIDs;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    OutCharacterID;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutSkinId;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.Create Warm Logic Actor And Exec
	 */
	struct UBPC_WarmGame_BattleRoyale_C_CreateWarmLogicActorAndExec_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49MK[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.CheckSpAIForWarmGame
	 */
	struct UBPC_WarmGame_BattleRoyale_C_CheckSpAIForWarmGame_Params
	{
	public:
		bool                                                       SpecialAI;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M3GF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[s]SetBotBT
	 */
	struct UBPC_WarmGame_BattleRoyale_C_sSetBotBT_Params
	{
	public:
		class UBehaviorTree*                                       BotBehaviorTree;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]ShowNotice
	 */
	struct UBPC_WarmGame_BattleRoyale_C_cShowNotice_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GDCD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UZJO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]RequestNearestPosition
	 */
	struct UBPC_WarmGame_BattleRoyale_C_cRequestNearestPosition_Params
	{
	public:
		E_GuidTargetType                                           Target;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_17ES[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnRep_WeaponPos
	 */
	struct UBPC_WarmGame_BattleRoyale_C_OnRep_WeaponPos_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdatePos
	 */
	struct UBPC_WarmGame_BattleRoyale_C_UpdatePos_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]CreateWorldMark
	 */
	struct UBPC_WarmGame_BattleRoyale_C_cCreateWorldMark_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_WorldMark_Common_C*                              AsUIWorldMarkCommon;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3WXS[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]LocalCharacter
	 */
	struct UBPC_WarmGame_BattleRoyale_C_cLocalCharacter_Params
	{
	public:
		class ASolarCharacter*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]PlayerHasWeapon
	 */
	struct UBPC_WarmGame_BattleRoyale_C_cPlayerHasWeapon_Params
	{
	public:
		bool                                                       HasWeapon;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasVehicleWeapon;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C9RE[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateArrowDirection
	 */
	struct UBPC_WarmGame_BattleRoyale_C_UpdateArrowDirection_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateItemPos
	 */
	struct UBPC_WarmGame_BattleRoyale_C_UpdateItemPos_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateWeaponPos
	 */
	struct UBPC_WarmGame_BattleRoyale_C_UpdateWeaponPos_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetGuidArrow
	 */
	struct UBPC_WarmGame_BattleRoyale_C_GetGuidArrow_Params
	{
	public:
		class ABP_DirectionArrow_C*                                Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[C]ShowArrow
	 */
	struct UBPC_WarmGame_BattleRoyale_C_CShowArrow_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y908[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateVehiclePos
	 */
	struct UBPC_WarmGame_BattleRoyale_C_UpdateVehiclePos_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetNearestPosition
	 */
	struct UBPC_WarmGame_BattleRoyale_C_GetNearestPosition_Params
	{
	public:
		E_GuidTargetType                                           Target;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L6MR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[A]GetPlayBattleCount
	 */
	struct UBPC_WarmGame_BattleRoyale_C_AGetPlayBattleCount_Params
	{
	public:
		int32_t                                                    count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[ S]Game Mode Special Config
	 */
	struct UBPC_WarmGame_BattleRoyale_C_SGameModeSpecialConfig_Params
	{
	public:
		bool                                                       SpecialConfig;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F4WU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Order;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isB;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CX77[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[C]PlayerABTest
	 */
	struct UBPC_WarmGame_BattleRoyale_C_CPlayerABTest_Params
	{
	public:
		bool                                                       SpecialConfig;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetMainLogic
	 */
	struct UBPC_WarmGame_BattleRoyale_C_GetMainLogic_Params
	{
	public:
		class UBP_Logic_BattleRoyale_C*                            Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct UBPC_WarmGame_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ReceiveTick
	 */
	struct UBPC_WarmGame_BattleRoyale_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnSystemReady
	 */
	struct UBPC_WarmGame_BattleRoyale_C_OnSystemReady_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.PlanyerEnterSafeArea
	 */
	struct UBPC_WarmGame_BattleRoyale_C_PlanyerEnterSafeArea_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.PlayerLeaveSafeArea
	 */
	struct UBPC_WarmGame_BattleRoyale_C_PlayerLeaveSafeArea_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnNextSafeAreaSetted
	 */
	struct UBPC_WarmGame_BattleRoyale_C_OnNextSafeAreaSetted_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WaitTime;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveTime;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnRequestReceived
	 */
	struct UBPC_WarmGame_BattleRoyale_C_OnRequestReceived_Params
	{
	public:
		E_GuidTargetType                                           Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RO9H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnEjectStateChanged
	 */
	struct UBPC_WarmGame_BattleRoyale_C_OnEjectStateChanged_Params
	{
	public:
		E_CharacterEjectState                                      State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U2PF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASolarCharacter*                                     TargetCharacter;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ConfigFinished
	 */
	struct UBPC_WarmGame_BattleRoyale_C_ConfigFinished_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.CustomEvent_1
	 */
	struct UBPC_WarmGame_BattleRoyale_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ExecuteUbergraph_BPC_WarmGame_BattleRoyale
	 */
	struct UBPC_WarmGame_BattleRoyale_C_ExecuteUbergraph_BPC_WarmGame_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
