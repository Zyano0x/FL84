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
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.GetModuleName
	 */
	struct UUI_Lobby_BattlePass_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetClaimable
	 */
	struct UUI_Lobby_BattlePass_C_SetClaimable_Params
	{
	public:
		bool                                                       Claimable;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetUpdate
	 */
	struct UUI_Lobby_BattlePass_C_SetUpdate_Params
	{
	public:
		bool                                                       Update;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetLevel
	 */
	struct UUI_Lobby_BattlePass_C_SetLevel_Params
	{
	public:
		bool                                                       Max;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L188[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.PreConstruct
	 */
	struct UUI_Lobby_BattlePass_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.BattlePassStateChange_Event
	 */
	struct UUI_Lobby_BattlePass_C_BattlePassStateChange_Event_Params
	{	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.BattlePassPlayUpgradeAnimation
	 */
	struct UUI_Lobby_BattlePass_C_BattlePassPlayUpgradeAnimation_Params
	{	};

	/**
	 * Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.ExecuteUbergraph_UI_Lobby_BattlePass
	 */
	struct UUI_Lobby_BattlePass_C_ExecuteUbergraph_UI_Lobby_BattlePass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S9QU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
