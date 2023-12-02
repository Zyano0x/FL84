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
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.ShouldTeamActivate
	 */
	struct UBP_BotTeamManager_C_ShouldTeamActivate_Params
	{
	public:
		struct FSolarBotTeamInfo                                   BotInfo;                                                 // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.OnTeamDeactive
	 */
	struct UBP_BotTeamManager_C_OnTeamDeactive_Params
	{
	public:
		struct FSolarBotTeamInfo                                   TeamInfo;                                                // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotUnRegister
	 */
	struct UBP_BotTeamManager_C_OnBotUnRegister_Params
	{
	public:
		struct FSolarBotMemberInfo                                 BotInfo;                                                 // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotStateChanged
	 */
	struct UBP_BotTeamManager_C_OnBotStateChanged_Params
	{
	public:
		struct FSolarBotMemberInfo                                 BotInfo;                                                 // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESolarBotMemberState                                       OldState;                                                // 0x00B0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.OnTeamActivate
	 */
	struct UBP_BotTeamManager_C_OnTeamActivate_Params
	{
	public:
		struct FSolarBotTeamInfo                                   TeamInfo;                                                // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotRegister
	 */
	struct UBP_BotTeamManager_C_OnBotRegister_Params
	{
	public:
		struct FSolarBotMemberInfo                                 BotInfo;                                                 // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BotTeamManager.BP_BotTeamManager_C.ExecuteUbergraph_BP_BotTeamManager
	 */
	struct UBP_BotTeamManager_C_ExecuteUbergraph_BP_BotTeamManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R1UH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
