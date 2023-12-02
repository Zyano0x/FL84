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
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.Out Put Kill Log
	 */
	struct UBPC_Death_BattleRoyale_C_OutPutKillLog_Params
	{
	public:
		bool                                                       InBool;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WNC0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.TryRevivePlayerbyCoin
	 */
	struct UBPC_Death_BattleRoyale_C_TryRevivePlayerbyCoin_Params
	{
	public:
		class ABP_PlayerState_BattleRoyale_C*                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Succeed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.CanPlayerBattle
	 */
	struct UBPC_Death_BattleRoyale_C_CanPlayerBattle_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.GetMainLogic
	 */
	struct UBPC_Death_BattleRoyale_C_GetMainLogic_Params
	{
	public:
		class UBP_Logic_BattleRoyale_C*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.GetConiReviveManager
	 */
	struct UBPC_Death_BattleRoyale_C_GetConiReviveManager_Params
	{
	public:
		class ABP_ReviveItemManger_BattleRoyale_C*                 Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct UBPC_Death_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerKill
	 */
	struct UBPC_Death_BattleRoyale_C_ReceivePlayerKill_Params
	{
	public:
		class ASCMPlayerState*                                     Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     Killed;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASCMPlayerState*>                             Assists;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FSolarPointDamageEvent                              InDamageEvent;                                           // 0x0020(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              InDamageCauser;                                          // 0x0130(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.OnBattleStateChanged
	 */
	struct UBPC_Death_BattleRoyale_C_OnBattleStateChanged_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              OldValue;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewValue;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerDeathVerge
	 */
	struct UBPC_Death_BattleRoyale_C_ReceivePlayerDeathVerge_Params
	{
	public:
		class ASCMPlayerState*                                     InAttacker;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     InDeathVergePlayer;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarPointDamageEvent                              InDamageEvent;                                           // 0x0010(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              InDamageCauser;                                          // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerResurrect
	 */
	struct UBPC_Death_BattleRoyale_C_ReceivePlayerResurrect_Params
	{
	public:
		class ASolarCharacter*                                     ResurrectCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     ResurrectPlayer;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ExecuteUbergraph_BPC_Death_BattleRoyale
	 */
	struct UBPC_Death_BattleRoyale_C_ExecuteUbergraph_BPC_Death_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XP5F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
