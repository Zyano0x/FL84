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
	 * Function WB_Setting_MaterialList.WB_Setting_MaterialList_C.GetModuleName
	 */
	struct UWB_Setting_MaterialList_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Setting_MaterialList.WB_Setting_MaterialList_C.BP_OnEntryReleased
	 */
	struct UWB_Setting_MaterialList_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WB_Setting_MaterialList.WB_Setting_MaterialList_C.BP_OnItemExpansionChanged
	 */
	struct UWB_Setting_MaterialList_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Setting_MaterialList.WB_Setting_MaterialList_C.BP_OnItemSelectionChanged
	 */
	struct UWB_Setting_MaterialList_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Setting_MaterialList.WB_Setting_MaterialList_C.OnListItemObjectSet
	 */
	struct UWB_Setting_MaterialList_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Setting_MaterialList.WB_Setting_MaterialList_C.ExecuteUbergraph_WB_Setting_MaterialList
	 */
	struct UWB_Setting_MaterialList_C_ExecuteUbergraph_WB_Setting_MaterialList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ITLP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
