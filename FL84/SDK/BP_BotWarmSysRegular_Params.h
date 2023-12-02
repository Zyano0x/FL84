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
	 * Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetActivePlayerNumBP
	 */
	struct UBP_BotWarmSysRegular_C_GetActivePlayerNumBP_Params
	{
	public:
		int32_t                                                    PlayerNum;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlayerTeamNum;                                           // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetWarmScoreByEvent
	 */
	struct UBP_BotWarmSysRegular_C_GetWarmScoreByEvent_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EUpdateWarmServiceEventType                                InEventType;                                             // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5Z9A[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetTargetTickValue
	 */
	struct UBP_BotWarmSysRegular_C_GetTargetTickValue_Params
	{
	public:
		class ASolarPlayerState*                                   InPS;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWarmTargetState                                    InState;                                                 // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
