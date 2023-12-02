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
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.GetModuleName
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.IsSoloMode
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_IsSoloMode_Params
	{
	public:
		bool                                                       bIsSoloMode;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TTS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.RestoreSelcetion
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_RestoreSelcetion_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.SetSelectedState
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_SetSelectedState_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.SetDeleteState
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_SetDeleteState_Params
	{
	public:
		bool                                                       bDelete;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.SetChangeState
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_SetChangeState_Params
	{
	public:
		bool                                                       bChange;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.RefreshState
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_RefreshState_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.CallLuaRefreshByPS
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_CallLuaRefreshByPS_Params
	{
	public:
		class ASCMPlayerState*                                     ps;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.GetClickedEnable
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_GetClickedEnable_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.Setup State
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_SetupState_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Selected;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Owner;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Change_Btn;                                              // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Delete_Btn;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Yourself;                                                // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Closed;                                                  // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Waiting;                                                 // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.BP_OnEntryReleased
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.BP_OnItemExpansionChanged
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.BP_OnItemSelectionChanged
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.OnListItemObjectSet
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.PreConstruct
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.BndEvt__Btn_Portrait_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_BndEvt__Btn_Portrait_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.BndEvt__Btn_Delete_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_BndEvt__Btn_Delete_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Player_Info.UI_CreateRoom_Management_Player_Info_C.ExecuteUbergraph_UI_CreateRoom_Management_Player_Info
	 */
	struct UUI_CreateRoom_Management_Player_Info_C_ExecuteUbergraph_UI_CreateRoom_Management_Player_Info_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
