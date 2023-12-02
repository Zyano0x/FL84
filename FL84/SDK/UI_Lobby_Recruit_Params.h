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
	 * DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_DA0FFAFD4DE80F1986F3A58946724480
	 */
	struct UUI_Lobby_Recruit_C_OnClicked_DA0FFAFD4DE80F1986F3A58946724480_Params
	{	};

	/**
	 * DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_B65D6933465FC9953CB8A3A276CB7BBC
	 */
	struct UUI_Lobby_Recruit_C_OnClicked_B65D6933465FC9953CB8A3A276CB7BBC_Params
	{	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Destruct
	 */
	struct UUI_Lobby_Recruit_C_Destruct_Params
	{	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIClosed
	 */
	struct UUI_Lobby_Recruit_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIOpened
	 */
	struct UUI_Lobby_Recruit_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ConstructCopy
	 */
	struct UUI_Lobby_Recruit_C_ConstructCopy_Params
	{	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName
	 */
	struct UUI_Lobby_Recruit_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetSize
	 */
	struct UUI_Lobby_Recruit_C_SetSize_Params
	{
	public:
		int32_t                                                    SizeH;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeW;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetStateDesktop
	 */
	struct UUI_Lobby_Recruit_C_SetStateDesktop_Params
	{
	public:
		E_Type_State_Desktop                                       StateDesktopInvite;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_Type_State_Desktop                                       StateDesktopRecruit;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CA0O[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct
	 */
	struct UUI_Lobby_Recruit_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct
	 */
	struct UUI_Lobby_Recruit_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit
	 */
	struct UUI_Lobby_Recruit_C_ExecuteUbergraph_UI_Lobby_Recruit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
