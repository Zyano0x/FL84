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
	 * Function UI_Material_ItemSlot.UI_Material_ItemSlot_C.GetModuleName
	 */
	struct UUI_Material_ItemSlot_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Material_ItemSlot.UI_Material_ItemSlot_C.BP_OnEntryReleased
	 */
	struct UUI_Material_ItemSlot_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Material_ItemSlot.UI_Material_ItemSlot_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Material_ItemSlot_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Material_ItemSlot.UI_Material_ItemSlot_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Material_ItemSlot_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Material_ItemSlot.UI_Material_ItemSlot_C.OnListItemObjectSet
	 */
	struct UUI_Material_ItemSlot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Material_ItemSlot.UI_Material_ItemSlot_C.ExecuteUbergraph_UI_Material_ItemSlot
	 */
	struct UUI_Material_ItemSlot_C_ExecuteUbergraph_UI_Material_ItemSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ONLG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
