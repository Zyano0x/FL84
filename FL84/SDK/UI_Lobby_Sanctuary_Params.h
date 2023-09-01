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
	 * Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName
	 */
	struct UUI_Lobby_Sanctuary_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI
	 */
	struct UUI_Lobby_Sanctuary_C_BP_RefreshSanctuaryUI_Params
	{
	public:
		bool                                                       bInLocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInMatching;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct
	 */
	struct UUI_Lobby_Sanctuary_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct
	 */
	struct UUI_Lobby_Sanctuary_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary
	 */
	struct UUI_Lobby_Sanctuary_C_ExecuteUbergraph_UI_Lobby_Sanctuary_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
