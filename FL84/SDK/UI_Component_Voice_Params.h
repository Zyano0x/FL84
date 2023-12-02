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
	 * Function UI_Component_Voice.UI_Component_Voice_C.GetModuleName
	 */
	struct UUI_Component_Voice_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Voice.UI_Component_Voice_C.BP_OnEntryReleased
	 */
	struct UUI_Component_Voice_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Component_Voice.UI_Component_Voice_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Component_Voice_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Voice.UI_Component_Voice_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Component_Voice_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Voice.UI_Component_Voice_C.OnListItemObjectSet
	 */
	struct UUI_Component_Voice_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Voice.UI_Component_Voice_C.OnQualityChanged
	 */
	struct UUI_Component_Voice_C_OnQualityChanged_Params
	{
	public:
		ESolarItemQualityType                                      Quality;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Voice.UI_Component_Voice_C.ExecuteUbergraph_UI_Component_Voice
	 */
	struct UUI_Component_Voice_C_ExecuteUbergraph_UI_Component_Voice_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
