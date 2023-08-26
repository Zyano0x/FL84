#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetProperties
	 */
	struct UBP_Tab_ItemBase_C_SetProperties_Params
	{
	public:
		class UBP_TabItemObj_C*                                    Obj;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.UpdateWidget
	 */
	struct UBP_Tab_ItemBase_C_UpdateWidget_Params
	{	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.InitWidget
	 */
	struct UBP_Tab_ItemBase_C_InitWidget_Params
	{
	public:
		class USolarRedHint_General_C*                             HintWidget;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarTextBlock*                                     Text;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              Icon;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetSelected
	 */
	struct UBP_Tab_ItemBase_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetStyle
	 */
	struct UBP_Tab_ItemBase_C_SetStyle_Params
	{
	public:
		E_TabStyle                                                 Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetHintData
	 */
	struct UBP_Tab_ItemBase_C_SetHintData_Params
	{
	public:
		struct FS_HintData                                         S_HintData;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.SetItemSize
	 */
	struct UBP_Tab_ItemBase_C_SetItemSize_Params
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.BP_OnItemExpansionChanged
	 */
	struct UBP_Tab_ItemBase_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.PreConstruct
	 */
	struct UBP_Tab_ItemBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.OnListItemObjectSet
	 */
	struct UBP_Tab_ItemBase_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.BP_OnItemSelectionChanged
	 */
	struct UBP_Tab_ItemBase_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.OnRevised
	 */
	struct UBP_Tab_ItemBase_C_OnRevised_Params
	{	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.BP_OnEntryReleased
	 */
	struct UBP_Tab_ItemBase_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.OnLocalLangChanged
	 */
	struct UBP_Tab_ItemBase_C_OnLocalLangChanged_Params
	{
	public:
		class UObject*                                             Publisher;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      MetaData;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.ExecuteUbergraph_BP_Tab_ItemBase
	 */
	struct UBP_Tab_ItemBase_C_ExecuteUbergraph_BP_Tab_ItemBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y8US[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Tab_ItemBase.BP_Tab_ItemBase_C.ItemSelected__DelegateSignature
	 */
	struct UBP_Tab_ItemBase_C_ItemSelected__DelegateSignature_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
