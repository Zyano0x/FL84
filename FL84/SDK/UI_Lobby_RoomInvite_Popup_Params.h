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
	 * Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.GetModuleName
	 */
	struct UUI_Lobby_RoomInvite_Popup_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.Update_Btn
	 */
	struct UUI_Lobby_RoomInvite_Popup_C_Update_Btn_Params
	{
	public:
		ET_Type_Button                                             NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.SetType
	 */
	struct UUI_Lobby_RoomInvite_Popup_C_SetType_Params
	{
	public:
		ET_Type_System_Push                                        NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.PreConstruct
	 */
	struct UUI_Lobby_RoomInvite_Popup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_Popup
	 */
	struct UUI_Lobby_RoomInvite_Popup_C_ExecuteUbergraph_UI_Lobby_RoomInvite_Popup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
