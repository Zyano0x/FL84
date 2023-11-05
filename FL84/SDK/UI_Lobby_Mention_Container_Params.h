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
	 * Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.OnInitialized
	 */
	struct UUI_Lobby_Mention_Container_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.OnSolarUIClosed
	 */
	struct UUI_Lobby_Mention_Container_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.OnSolarUIOpened
	 */
	struct UUI_Lobby_Mention_Container_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Lobby_Mention_Container.UI_Lobby_Mention_Container_C.GetModuleName
	 */
	struct UUI_Lobby_Mention_Container_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
