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
	 * Function UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C.SetStateDesktop
	 */
	struct UUI_Lobby_Invite_Btn_C_SetStateDesktop_Params
	{
	public:
		bool                                                       IsDesktop;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_Type_State_Desktop                                       StateDesktop;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C.PreConstruct
	 */
	struct UUI_Lobby_Invite_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C.ExecuteUbergraph_UI_Lobby_Invite_Btn
	 */
	struct UUI_Lobby_Invite_Btn_C_ExecuteUbergraph_UI_Lobby_Invite_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
