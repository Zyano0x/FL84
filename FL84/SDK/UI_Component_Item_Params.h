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
	 * Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChangedCopy
	 */
	struct UUI_Component_Item_C_BP_OnItemSelectionChangedCopy_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.SetIcon_LuaCopy
	 */
	struct UUI_Component_Item_C_SetIcon_LuaCopy_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.PlayEnterAnim
	 */
	struct UUI_Component_Item_C_PlayEnterAnim_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSetCopy
	 */
	struct UUI_Component_Item_C_OnListItemObjectSetCopy_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.GetModuleName
	 */
	struct UUI_Component_Item_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_3
	 */
	struct UUI_Component_Item_C_SequenceEvent__ENTRYPOINTUI_Component_Item_3_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_2
	 */
	struct UUI_Component_Item_C_SequenceEvent__ENTRYPOINTUI_Component_Item_2_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.SequenceEvent__ENTRYPOINTUI_Component_Item_1
	 */
	struct UUI_Component_Item_C_SequenceEvent__ENTRYPOINTUI_Component_Item_1_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.SetIcon_Lua
	 */
	struct UUI_Component_Item_C_SetIcon_Lua_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.BP_OnEntryReleased
	 */
	struct UUI_Component_Item_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Component_Item_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Component_Item_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSet
	 */
	struct UUI_Component_Item_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.PlaySound_Puzzle_Unlock_Anim
	 */
	struct UUI_Component_Item_C_PlaySound_Puzzle_Unlock_Anim_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.PlaySound_Anim_Exchange
	 */
	struct UUI_Component_Item_C_PlaySound_Anim_Exchange_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.PreConstruct
	 */
	struct UUI_Component_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.ChangItemState
	 */
	struct UUI_Component_Item_C_ChangItemState_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.PlayReceiveAnimEvent
	 */
	struct UUI_Component_Item_C_PlayReceiveAnimEvent_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.StopReceiveAnimEvent
	 */
	struct UUI_Component_Item_C_StopReceiveAnimEvent_Params
	{	};

	/**
	 * Function UI_Component_Item.UI_Component_Item_C.ExecuteUbergraph_UI_Component_Item
	 */
	struct UUI_Component_Item_C_ExecuteUbergraph_UI_Component_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
