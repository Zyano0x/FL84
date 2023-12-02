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
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.GetOccupying
	 */
	struct ABattlegroundControlPoint_C_GetOccupying_Params
	{
	public:
		bool                                                       NewOccupying;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OTT2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.GetStatus
	 */
	struct ABattlegroundControlPoint_C_GetStatus_Params
	{
	public:
		EFactionType                                               InFaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControlPointStatus                                        OutStatus;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.OnOccupiedChanged
	 */
	struct ABattlegroundControlPoint_C_OnOccupiedChanged_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.OnOccupyingChanged
	 */
	struct ABattlegroundControlPoint_C_OnOccupyingChanged_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.ReceiveBeginPlay
	 */
	struct ABattlegroundControlPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnOccupiedFactionChanged
	 */
	struct ABattlegroundControlPoint_C_K2_OnOccupiedFactionChanged_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnCharactersInsideChanged
	 */
	struct ABattlegroundControlPoint_C_K2_OnCharactersInsideChanged_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnProgressOwnerFactionChanged
	 */
	struct ABattlegroundControlPoint_C_K2_OnProgressOwnerFactionChanged_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnProgressStatusChanged
	 */
	struct ABattlegroundControlPoint_C_K2_OnProgressStatusChanged_Params
	{	};

	/**
	 * Function BattlegroundControlPoint.BattlegroundControlPoint_C.ExecuteUbergraph_BattlegroundControlPoint
	 */
	struct ABattlegroundControlPoint_C_ExecuteUbergraph_BattlegroundControlPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
