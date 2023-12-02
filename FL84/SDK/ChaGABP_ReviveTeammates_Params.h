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
	 * Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.K2_OnEndAbility
	 */
	struct UChaGABP_ReviveTeammates_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.OnAbilityExec
	 */
	struct UChaGABP_ReviveTeammates_C_OnAbilityExec_Params
	{	};

	/**
	 * Function ChaGABP_ReviveTeammates.ChaGABP_ReviveTeammates_C.ExecuteUbergraph_ChaGABP_ReviveTeammates
	 */
	struct UChaGABP_ReviveTeammates_C_ExecuteUbergraph_ChaGABP_ReviveTeammates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K843[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
