#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.GetModuleName
	 */
	struct UUI_Lobby_BattlePass_Next_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetClaimable
	 */
	struct UUI_Lobby_BattlePass_Next_C_SetClaimable_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetUpdate
	 */
	struct UUI_Lobby_BattlePass_Next_C_SetUpdate_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetLevel
	 */
	struct UUI_Lobby_BattlePass_Next_C_SetLevel_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KCUJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.PreConstruct
	 */
	struct UUI_Lobby_BattlePass_Next_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.BattlePassStateChange_Event
	 */
	struct UUI_Lobby_BattlePass_Next_C_BattlePassStateChange_Event_Params
	{	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.BattlePassPlayUpgradeAnimation
	 */
	struct UUI_Lobby_BattlePass_Next_C_BattlePassPlayUpgradeAnimation_Params
	{	};

	/**
	 * Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.ExecuteUbergraph_UI_Lobby_BattlePass_Next
	 */
	struct UUI_Lobby_BattlePass_Next_C_ExecuteUbergraph_UI_Lobby_BattlePass_Next_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2DM4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
