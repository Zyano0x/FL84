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
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.GetModuleName
	 */
	struct UUI_TabControl_Base_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.AddItemByItemData
	 */
	struct UUI_TabControl_Base_C_AddItemByItemData_Params
	{
	public:
		struct FS_TabItem                                          TabData;                                                 // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YF3I[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.AddSizedItem
	 */
	struct UUI_TabControl_Base_C_AddSizedItem_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Icon;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_HintData                                         HintDotData;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             LinkWidget;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Szie;                                                    // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BJS0[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.ReviseItem
	 */
	struct UUI_TabControl_Base_C_ReviseItem_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Icon;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_HintData                                         HintDotData;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             LinkWidget;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_913K[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.RefreshAllItems
	 */
	struct UUI_TabControl_Base_C_RefreshAllItems_Params
	{	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.InsertItem
	 */
	struct UUI_TabControl_Base_C_InsertItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EKNS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Key;                                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Icon;                                                    // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_HintData                                         HintDotData;                                             // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             LinkWidget;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.AddItemByPreset
	 */
	struct UUI_TabControl_Base_C_AddItemByPreset_Params
	{
	public:
		struct FS_TabItem                                          S_TabItem;                                               // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.BindChildWidget
	 */
	struct UUI_TabControl_Base_C_BindChildWidget_Params
	{	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.SetBindWidget
	 */
	struct UUI_TabControl_Base_C_SetBindWidget_Params
	{
	public:
		class UListView*                                           BindList;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.ScrollToItem
	 */
	struct UUI_TabControl_Base_C_ScrollToItem_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Active;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U2MY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      InScrollOffset;                                          // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.ClearItems
	 */
	struct UUI_TabControl_Base_C_ClearItems_Params
	{	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.SetStyle
	 */
	struct UUI_TabControl_Base_C_SetStyle_Params
	{	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.GetKeys
	 */
	struct UUI_TabControl_Base_C_GetKeys_Params
	{
	public:
		TArray<class FString>                                      Keys;                                                    // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.AddPresetItem
	 */
	struct UUI_TabControl_Base_C_AddPresetItem_Params
	{	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.SetActiveTab
	 */
	struct UUI_TabControl_Base_C_SetActiveTab_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UCDB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.GetLinkedWidgetByKey
	 */
	struct UUI_TabControl_Base_C_GetLinkedWidgetByKey_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.RemoveItem
	 */
	struct UUI_TabControl_Base_C_RemoveItem_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6R6D[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.AddItem
	 */
	struct UUI_TabControl_Base_C_AddItem_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Text;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             Icon;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_HintData                                         HintDotData;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             LinkWidget;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8PL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.PreConstruct
	 */
	struct UUI_TabControl_Base_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.OnItemClicked
	 */
	struct UUI_TabControl_Base_C_OnItemClicked_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.OnItemSelected
	 */
	struct UUI_TabControl_Base_C_OnItemSelected_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSelected;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.ExecuteUbergraph_UI_TabControl_Base
	 */
	struct UUI_TabControl_Base_C_ExecuteUbergraph_UI_TabControl_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Base.UI_TabControl_Base_C.OnActiveTabChanged__DelegateSignature
	 */
	struct UUI_TabControl_Base_C_OnActiveTabChanged__DelegateSignature_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
