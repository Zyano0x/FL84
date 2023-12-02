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
	 * Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.Get All Bot Character and Set Bt Tree
	 */
	struct UBattleRoyaleGameModeAIComp_Custom_C_GetAllBotCharacterandSetBtTree_Params
	{
	public:
		class UBehaviorTree*                                       BTAsset;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.OnGameModeHandleMatchHasStarted
	 */
	struct UBattleRoyaleGameModeAIComp_Custom_C_OnGameModeHandleMatchHasStarted_Params
	{
	public:
		bool                                                       bOutSuccess;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4E36[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UGameModeCompBase*>                           ComponentCollection;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.OnGameModeStartPlay
	 */
	struct UBattleRoyaleGameModeAIComp_Custom_C_OnGameModeStartPlay_Params
	{
	public:
		bool                                                       bOutSuccess;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VAV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UGameModeCompBase*>                           ComponentCollection;                                     // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.Event_AIBeginPlay
	 */
	struct UBattleRoyaleGameModeAIComp_Custom_C_Event_AIBeginPlay_Params
	{	};

	/**
	 * Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.MainTick
	 */
	struct UBattleRoyaleGameModeAIComp_Custom_C_MainTick_Params
	{	};

	/**
	 * Function BattleRoyaleGameModeAIComp_Custom.BattleRoyaleGameModeAIComp_Custom_C.ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom
	 */
	struct UBattleRoyaleGameModeAIComp_Custom_C_ExecuteUbergraph_BattleRoyaleGameModeAIComp_Custom_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J32A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
