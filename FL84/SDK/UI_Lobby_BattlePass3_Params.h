#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.GetModuleName
	 */
	struct UUI_Lobby_BattlePass3_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetStateHD
	 */
	struct UUI_Lobby_BattlePass3_C_SetStateHD_Params
	{
	public:
		E_TabLobbyItemState                                        State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetClaimable
	 */
	struct UUI_Lobby_BattlePass3_C_SetClaimable_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetUpdate
	 */
	struct UUI_Lobby_BattlePass3_C_SetUpdate_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.SetLevel
	 */
	struct UUI_Lobby_BattlePass3_C_SetLevel_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VAXX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.PreConstruct
	 */
	struct UUI_Lobby_BattlePass3_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.BattlePassStateChange_Event
	 */
	struct UUI_Lobby_BattlePass3_C_BattlePassStateChange_Event_Params
	{	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.BattlePassPlayUpgradeAnimation
	 */
	struct UUI_Lobby_BattlePass3_C_BattlePassPlayUpgradeAnimation_Params
	{	};

	/**
	 * Function UI_Lobby_BattlePass3.UI_Lobby_BattlePass3_C.ExecuteUbergraph_UI_Lobby_BattlePass3
	 */
	struct UUI_Lobby_BattlePass3_C_ExecuteUbergraph_UI_Lobby_BattlePass3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
