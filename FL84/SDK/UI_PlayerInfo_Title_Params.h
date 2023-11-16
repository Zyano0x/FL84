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
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.GetModuleName
	 */
	struct UUI_PlayerInfo_Title_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.SetSelf
	 */
	struct UUI_PlayerInfo_Title_C_SetSelf_Params
	{
	public:
		bool                                                       IsSelf;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.SetPosition
	 */
	struct UUI_PlayerInfo_Title_C_SetPosition_Params
	{	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.SetTitleColor
	 */
	struct UUI_PlayerInfo_Title_C_SetTitleColor_Params
	{
	public:
		E_RankingType                                              Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J8NI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.BP_OnEntryReleased
	 */
	struct UUI_PlayerInfo_Title_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.BP_OnItemExpansionChanged
	 */
	struct UUI_PlayerInfo_Title_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.BP_OnItemSelectionChanged
	 */
	struct UUI_PlayerInfo_Title_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.OnListItemObjectSet
	 */
	struct UUI_PlayerInfo_Title_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.PreConstruct
	 */
	struct UUI_PlayerInfo_Title_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.ExecuteUbergraph_UI_PlayerInfo_Title
	 */
	struct UUI_PlayerInfo_Title_C_ExecuteUbergraph_UI_PlayerInfo_Title_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
