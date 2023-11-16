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
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsKilled
	 */
	struct UUI_Component_PlayerName_C_SetIsKilled_Params
	{
	public:
		bool                                                       IsKilled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetIsCheater
	 */
	struct UUI_Component_PlayerName_C_SetIsCheater_Params
	{
	public:
		bool                                                       bCheater;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVipStyle
	 */
	struct UUI_Component_PlayerName_C_SetVipStyle_Params
	{
	public:
		E_Type_PlayerName_Vip_Color                                VIP_Type;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerNameAndStyle
	 */
	struct UUI_Component_PlayerName_C_SetPlayerNameAndStyle_Params
	{
	public:
		class FString                                              NickName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bCheat;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_Type_PlayerName_Vip_Color                                VIP_Type;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bKilled;                                                 // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetPlayerName
	 */
	struct UUI_Component_PlayerName_C_SetPlayerName_Params
	{
	public:
		class FString                                              NickName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDefaultStyle
	 */
	struct UUI_Component_PlayerName_C_SetDefaultStyle_Params
	{
	public:
		bool                                                       bSpecialSelf;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetNameStyle
	 */
	struct UUI_Component_PlayerName_C_SetNameStyle_Params
	{
	public:
		bool                                                       bCheater;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_Type_PlayerName_Vip_Color                                VIP_State;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bKilled;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7ZV[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.PreConstruct
	 */
	struct UUI_Component_PlayerName_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.Construct
	 */
	struct UUI_Component_PlayerName_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.ReSize
	 */
	struct UUI_Component_PlayerName_C_ReSize_Params
	{	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.UpdatePlayerNameAndStyle
	 */
	struct UUI_Component_PlayerName_C_UpdatePlayerNameAndStyle_Params
	{
	public:
		class FString                                              NickName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              VipType;                                                 // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCheat;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bKilled;                                                 // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetText
	 */
	struct UUI_Component_PlayerName_C_SetText_Params
	{
	public:
		class FString                                              Content;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetTextColorAndOpacity
	 */
	struct UUI_Component_PlayerName_C_SetTextColorAndOpacity_Params
	{
	public:
		struct FSlateColor                                         InColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetStyle
	 */
	struct UUI_Component_PlayerName_C_SetStyle_Params
	{
	public:
		unsigned char                                              VipType;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCheat;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bKilled;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetDeath
	 */
	struct UUI_Component_PlayerName_C_SetDeath_Params
	{
	public:
		bool                                                       bDeath;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetVip
	 */
	struct UUI_Component_PlayerName_C_SetVip_Params
	{
	public:
		unsigned char                                              VipType;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.SetCheater
	 */
	struct UUI_Component_PlayerName_C_SetCheater_Params
	{
	public:
		bool                                                       bCheat;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerName.UI_Component_PlayerName_C.ExecuteUbergraph_UI_Component_PlayerName
	 */
	struct UUI_Component_PlayerName_C_ExecuteUbergraph_UI_Component_PlayerName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
