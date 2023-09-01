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
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.SetRank
	 */
	struct UUI_Component_ComboBox_C_SetRank_Params
	{
	public:
		bool                                                       HasRank;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.SetExpandDirection
	 */
	struct UUI_Component_ComboBox_C_SetExpandDirection_Params
	{	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.GetRealText
	 */
	struct UUI_Component_ComboBox_C_GetRealText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    LocKey;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5R9W[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.SetSelectedItem
	 */
	struct UUI_Component_ComboBox_C_SetSelectedItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0IV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.SetExpandState
	 */
	struct UUI_Component_ComboBox_C_SetExpandState_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.GetExpamdState
	 */
	struct UUI_Component_ComboBox_C_GetExpamdState_Params
	{
	public:
		bool                                                       IsExpanded;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.ClearItems
	 */
	struct UUI_Component_ComboBox_C_ClearItems_Params
	{	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.AddPresetItem
	 */
	struct UUI_Component_ComboBox_C_AddPresetItem_Params
	{	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.GetSelectedItem
	 */
	struct UUI_Component_ComboBox_C_GetSelectedItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SPVT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.AddItem
	 */
	struct UUI_Component_ComboBox_C_AddItem_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Icon;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LocalTextKey;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RankLevel;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.SetEnabled
	 */
	struct UUI_Component_ComboBox_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.PreConstruct
	 */
	struct UUI_Component_ComboBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.Update
	 */
	struct UUI_Component_ComboBox_C_Update_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Component_ComboBox_C_BndEvt__ExpandBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.BndEvt__ListView_Content_Down_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature
	 */
	struct UUI_Component_ComboBox_C_BndEvt__ListView_Content_Down_K2Node_ComponentBoundEvent_4_OnListItemSelectionChangedDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.ExecuteUbergraph_UI_Component_ComboBox
	 */
	struct UUI_Component_ComboBox_C_ExecuteUbergraph_UI_Component_ComboBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.OnExpandStateChanged__DelegateSignature
	 */
	struct UUI_Component_ComboBox_C_OnExpandStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       Expanded;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox.UI_Component_ComboBox_C.OnSelectionChanged__DelegateSignature
	 */
	struct UUI_Component_ComboBox_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
