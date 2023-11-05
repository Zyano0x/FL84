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
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.ForceRefreshBatteryUI
	 */
	struct UUI_Lobby_Battery_C_ForceRefreshBatteryUI_Params
	{	};

	/**
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.RefreshBatteryUI
	 */
	struct UUI_Lobby_Battery_C_RefreshBatteryUI_Params
	{
	public:
		int32_t                                                    BatteryLevelNewParam;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCharging;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.PreConstruct
	 */
	struct UUI_Lobby_Battery_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.Construct
	 */
	struct UUI_Lobby_Battery_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.EventRefreshBatteryUI
	 */
	struct UUI_Lobby_Battery_C_EventRefreshBatteryUI_Params
	{	};

	/**
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.Destruct
	 */
	struct UUI_Lobby_Battery_C_Destruct_Params
	{	};

	/**
	 * Function UI_Lobby_Battery.UI_Lobby_Battery_C.ExecuteUbergraph_UI_Lobby_Battery
	 */
	struct UUI_Lobby_Battery_C_ExecuteUbergraph_UI_Lobby_Battery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
