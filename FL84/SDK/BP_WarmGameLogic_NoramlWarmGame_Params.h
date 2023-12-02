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
	 * Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.覆盖毒圈
	 */
	struct ABP_WarmGameLogic_NoramlWarmGame_C__Params_
	{
	public:
		class UBP_MapInfoComponent_C*                              InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.覆盖航线
	 */
	struct ABP_WarmGameLogic_NoramlWarmGame_C__Params
	{
	public:
		class UBP_MapInfoComponent_C*                              MapInfo;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.Event_ExecLogic
	 */
	struct ABP_WarmGameLogic_NoramlWarmGame_C_Event_ExecLogic_Params
	{	};

	/**
	 * Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame
	 */
	struct ABP_WarmGameLogic_NoramlWarmGame_C_ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3V0K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
