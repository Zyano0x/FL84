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
	 * Function BP_BotAIController.BP_BotAIController_C.SetWarmGameClock
	 */
	struct ABP_BotAIController_C_SetWarmGameClock_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BotAIController.BP_BotAIController_C.GetModuleName
	 */
	struct ABP_BotAIController_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotAIController.BP_BotAIController_C.ReceiveBeginPlay
	 */
	struct ABP_BotAIController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BotAIController.BP_BotAIController_C.ReceiveTick
	 */
	struct ABP_BotAIController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotAIController.BP_BotAIController_C.ExecuteUbergraph_BP_BotAIController
	 */
	struct ABP_BotAIController_C_ExecuteUbergraph_BP_BotAIController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
