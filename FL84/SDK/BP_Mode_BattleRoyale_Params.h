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
	 * Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.GetAirlineCruiseComponent
	 */
	struct ABP_Mode_BattleRoyale_C_GetAirlineCruiseComponent_Params
	{
	public:
		class UAirlineCruiseComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.IsKillWhenPlayerOut
	 */
	struct ABP_Mode_BattleRoyale_C_IsKillWhenPlayerOut_Params
	{
	public:
		class ASolarPlayerState*                                   PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_87DC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct ABP_Mode_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.UpdateDeserterTag
	 */
	struct ABP_Mode_BattleRoyale_C_UpdateDeserterTag_Params
	{
	public:
		class ASolarPlayerState*                                   PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mode_BattleRoyale.BP_Mode_BattleRoyale_C.ExecuteUbergraph_BP_Mode_BattleRoyale
	 */
	struct ABP_Mode_BattleRoyale_C_ExecuteUbergraph_BP_Mode_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
