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
	 * Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.GetModuleName
	 */
	struct ABP_BotAIController_BattleRoyale_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct ABP_BotAIController_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ReceiveTick
	 */
	struct ABP_BotAIController_BattleRoyale_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.CallAIBegin
	 */
	struct ABP_BotAIController_BattleRoyale_C_CallAIBegin_Params
	{	};

	/**
	 * Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.自定义事件_1
	 */
	struct ABP_BotAIController_BattleRoyale_C__1_Params
	{	};

	/**
	 * Function BP_BotAIController_BattleRoyale.BP_BotAIController_BattleRoyale_C.ExecuteUbergraph_BP_BotAIController_BattleRoyale
	 */
	struct ABP_BotAIController_BattleRoyale_C_ExecuteUbergraph_BP_BotAIController_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
