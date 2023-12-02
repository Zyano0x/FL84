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
	 * Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Set Player ID And Change Color
	 */
	struct UUI_MapMark_ReviveTeammates_C_SetPlayerIDAndChangeColor_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.SetColor
	 */
	struct UUI_MapMark_ReviveTeammates_C_SetColor_Params
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.SetIcon
	 */
	struct UUI_MapMark_ReviveTeammates_C_SetIcon_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8BTZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Event_PlayAnim
	 */
	struct UUI_MapMark_ReviveTeammates_C_Event_PlayAnim_Params
	{	};

	/**
	 * Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Tick
	 */
	struct UUI_MapMark_ReviveTeammates_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.ExecuteUbergraph_UI_MapMark_ReviveTeammates
	 */
	struct UUI_MapMark_ReviveTeammates_C_ExecuteUbergraph_UI_MapMark_ReviveTeammates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
