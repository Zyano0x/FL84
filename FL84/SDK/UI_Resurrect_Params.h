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
	 * Function UI_Resurrect.UI_Resurrect_C.RemoveInputFlag
	 */
	struct UUI_Resurrect_C_RemoveInputFlag_Params
	{	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.AddInputFlag
	 */
	struct UUI_Resurrect_C_AddInputFlag_Params
	{	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.TryCloseByPlayer
	 */
	struct UUI_Resurrect_C_TryCloseByPlayer_Params
	{
	public:
		class ABP_PlayerState_Framework_C*                         OldPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.Visible and Invisible Protection
	 */
	struct UUI_Resurrect_C_VisibleandInvisibleProtection_Params
	{
	public:
		bool                                                       Exec;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.SetIcon
	 */
	struct UUI_Resurrect_C_SetIcon_Params
	{
	public:
		E_ResurrectType                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.UIEvent_Show
	 */
	struct UUI_Resurrect_C_UIEvent_Show_Params
	{
	public:
		int32_t                                                    ReviveWaitTime;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.ShowResurrectUI
	 */
	struct UUI_Resurrect_C_ShowResurrectUI_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ResurrectType                                            Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3RPE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerState_Framework_C*                         Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.RebirthCountDown
	 */
	struct UUI_Resurrect_C_RebirthCountDown_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.CloseUI
	 */
	struct UUI_Resurrect_C_CloseUI_Params
	{	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.BeginCountDown
	 */
	struct UUI_Resurrect_C_BeginCountDown_Params
	{	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.EndEvent
	 */
	struct UUI_Resurrect_C_EndEvent_Params
	{	};

	/**
	 * Function UI_Resurrect.UI_Resurrect_C.ExecuteUbergraph_UI_Resurrect
	 */
	struct UUI_Resurrect_C_ExecuteUbergraph_UI_Resurrect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
