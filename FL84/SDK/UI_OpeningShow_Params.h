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
	 * Function UI_OpeningShow.UI_OpeningShow_C.UpdateOpeningShow
	 */
	struct UUI_OpeningShow_C_UpdateOpeningShow_Params
	{
	public:
		EDefenderTeamType                                          TeamType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_OpeningShow.UI_OpeningShow_C.OnSolarUIOpened
	 */
	struct UUI_OpeningShow_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_OpeningShow.UI_OpeningShow_C.OnSolarUIClosed
	 */
	struct UUI_OpeningShow_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_OpeningShow.UI_OpeningShow_C.ExecuteUbergraph_UI_OpeningShow
	 */
	struct UUI_OpeningShow_C_ExecuteUbergraph_UI_OpeningShow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
