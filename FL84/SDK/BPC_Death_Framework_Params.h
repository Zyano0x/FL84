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
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.GMRevive
	 */
	struct UBPC_Death_Framework_C_GMRevive_Params
	{
	public:
		class ASCMPlayerState*                                     InKilled;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AutoRevive;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EV6W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.Try Buy Resurrect
	 */
	struct UBPC_Death_Framework_C_TryBuyResurrect_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarPointDamageEvent                              DamageEvent;                                             // 0x0008(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
		bool                                                       Succeed;                                                 // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5QEK[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.CheckTerminator
	 */
	struct UBPC_Death_Framework_C_CheckTerminator_Params
	{
	public:
		class ASCMPlayerState*                                     InKiller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     InKilled;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PHY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.GetDefenderManager
	 */
	struct UBPC_Death_Framework_C_GetDefenderManager_Params
	{
	public:
		class ABP_DefenderManager_C*                               AsBPDefenderManager;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.UpdateDataTrace
	 */
	struct UBPC_Death_Framework_C_UpdateDataTrace_Params
	{
	public:
		E_DeathType                                                Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T4QY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASCMPlayerState*                                     Killer;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     Killed;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarPointDamageEvent                              DamageEvent;                                             // 0x0018(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              DamageCauser;                                            // 0x0128(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, class FString>                         AdditionalData;                                          // 0x0130(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerKill
	 */
	struct UBPC_Death_Framework_C_ReceivePlayerKill_Params
	{
	public:
		class ASCMPlayerState*                                     Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     Killed;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASCMPlayerState*>                             Assists;                                                 // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FSolarPointDamageEvent                              InDamageEvent;                                           // 0x0020(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              InDamageCauser;                                          // 0x0130(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerDeathVerge
	 */
	struct UBPC_Death_Framework_C_ReceivePlayerDeathVerge_Params
	{
	public:
		class ASCMPlayerState*                                     InAttacker;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     InDeathVergePlayer;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarPointDamageEvent                              InDamageEvent;                                           // 0x0010(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AActor*                                              InDamageCauser;                                          // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerResurrect
	 */
	struct UBPC_Death_Framework_C_ReceivePlayerResurrect_Params
	{
	public:
		class ASolarCharacter*                                     ResurrectCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASCMPlayerState*                                     ResurrectPlayer;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.ExecuteUbergraph_BPC_Death_Framework
	 */
	struct UBPC_Death_Framework_C_ExecuteUbergraph_BPC_Death_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N73L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerKill__DelegateSignature
	 */
	struct UBPC_Death_Framework_C_OnPlayerKill__DelegateSignature_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerResurrect__DelegateSignature
	 */
	struct UBPC_Death_Framework_C_OnPlayerResurrect__DelegateSignature_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerDie__DelegateSignature
	 */
	struct UBPC_Death_Framework_C_OnPlayerDie__DelegateSignature_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
