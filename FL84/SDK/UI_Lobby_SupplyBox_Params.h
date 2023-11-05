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
	 * DelegateFunction UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.OnClicked_583ABB684A6893C8BBA48AA3DD1A7D2F
	 */
	struct UUI_Lobby_SupplyBox_C_OnClicked_583ABB684A6893C8BBA48AA3DD1A7D2F_Params
	{	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.Destruct
	 */
	struct UUI_Lobby_SupplyBox_C_Destruct_Params
	{	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.Construct
	 */
	struct UUI_Lobby_SupplyBox_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.GetModuleName
	 */
	struct UUI_Lobby_SupplyBox_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetPercent
	 */
	struct UUI_Lobby_SupplyBox_C_SetPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetState
	 */
	struct UUI_Lobby_SupplyBox_C_SetState_Params
	{
	public:
		int32_t                                                    State;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Claim;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SZQH[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.PreConstruct
	 */
	struct UUI_Lobby_SupplyBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.ExecuteUbergraph_UI_Lobby_SupplyBox
	 */
	struct UUI_Lobby_SupplyBox_C_ExecuteUbergraph_UI_Lobby_SupplyBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
