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
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetIsOnScreen
	 */
	struct UUI_WorldMark_ReviveTeammates_C_SetIsOnScreen_Params
	{	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.Set Player ID And Change Color
	 */
	struct UUI_WorldMark_ReviveTeammates_C_SetPlayerIDAndChangeColor_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetColor
	 */
	struct UUI_WorldMark_ReviveTeammates_C_SetColor_Params
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.GetVisibility_1
	 */
	struct UUI_WorldMark_ReviveTeammates_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetIcon
	 */
	struct UUI_WorldMark_ReviveTeammates_C_SetIcon_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DF6L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.PreConstruct
	 */
	struct UUI_WorldMark_ReviveTeammates_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.Tick
	 */
	struct UUI_WorldMark_ReviveTeammates_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.OnInitialized
	 */
	struct UUI_WorldMark_ReviveTeammates_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetOutOfScreen
	 */
	struct UUI_WorldMark_ReviveTeammates_C_SetOutOfScreen_Params
	{
	public:
		bool                                                       OutOfScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.ExecuteUbergraph_UI_WorldMark_ReviveTeammates
	 */
	struct UUI_WorldMark_ReviveTeammates_C_ExecuteUbergraph_UI_WorldMark_ReviveTeammates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
