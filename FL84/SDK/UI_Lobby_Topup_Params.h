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
	 * Function UI_Lobby_Topup.UI_Lobby_Topup_C.SetStateDesktop
	 */
	struct UUI_Lobby_Topup_C_SetStateDesktop_Params
	{
	public:
		E_Type_State_Desktop                                       StateDesktop;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Topup.UI_Lobby_Topup_C.PreConstruct
	 */
	struct UUI_Lobby_Topup_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Topup.UI_Lobby_Topup_C.Construct
	 */
	struct UUI_Lobby_Topup_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_Topup.UI_Lobby_Topup_C.ExecuteUbergraph_UI_Lobby_Topup
	 */
	struct UUI_Lobby_Topup_C_ExecuteUbergraph_UI_Lobby_Topup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KW7F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
