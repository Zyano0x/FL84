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
	 * Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Get UI Refs from Panel
	 */
	struct UUI_CreateRoom_Management_Team_4M_C_GetUIRefsfromPanel_Params
	{
	public:
		class UWidget*                                             HorizontalBoxRef;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidgetSwitcher*                                     WidgetSwitcher_IsOwner;                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Get SideText by Panel
	 */
	struct UUI_CreateRoom_Management_Team_4M_C_GetSideTextbyPanel_Params
	{
	public:
		class USolarTextBlock*                                     TargetPanel;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.PreConstruct
	 */
	struct UUI_CreateRoom_Management_Team_4M_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Construct
	 */
	struct UUI_CreateRoom_Management_Team_4M_C_Construct_Params
	{	};

	/**
	 * Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.ExecuteUbergraph_UI_CreateRoom_Management_Team_4M
	 */
	struct UUI_CreateRoom_Management_Team_4M_C_ExecuteUbergraph_UI_CreateRoom_Management_Team_4M_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
