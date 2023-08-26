#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.GetModuleName
	 */
	struct UUI_Lobby_StartBtn_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.UpdatePlatformBlendState
	 */
	struct UUI_Lobby_StartBtn_C_UpdatePlatformBlendState_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.UpdatePanelState
	 */
	struct UUI_Lobby_StartBtn_C_UpdatePanelState_Params
	{
	public:
		bool                                                       Leader;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Matching;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ready;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Disable;                                                 // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.Update All Widgets
	 */
	struct UUI_Lobby_StartBtn_C_UpdateAllWidgets_Params
	{	};

	/**
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.PreConstruct
	 */
	struct UUI_Lobby_StartBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.Construct
	 */
	struct UUI_Lobby_StartBtn_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_StartBtn.UI_Lobby_StartBtn_C.ExecuteUbergraph_UI_Lobby_StartBtn
	 */
	struct UUI_Lobby_StartBtn_C_ExecuteUbergraph_UI_Lobby_StartBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
