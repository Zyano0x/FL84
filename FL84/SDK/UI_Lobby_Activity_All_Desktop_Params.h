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
	 * Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.SetStateDesktop
	 */
	struct UUI_Lobby_Activity_All_Desktop_C_SetStateDesktop_Params
	{
	public:
		E_TabLobbyItemState                                        StateHD;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.PreConstruct
	 */
	struct UUI_Lobby_Activity_All_Desktop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.ExecuteUbergraph_UI_Lobby_Activity_All_Desktop
	 */
	struct UUI_Lobby_Activity_All_Desktop_C_ExecuteUbergraph_UI_Lobby_Activity_All_Desktop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
