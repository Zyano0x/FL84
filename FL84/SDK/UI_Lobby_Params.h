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
	 * Function UI_Lobby.UI_Lobby_C.GetModuleName
	 */
	struct UUI_Lobby_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.SetLevel
	 */
	struct UUI_Lobby_C_SetLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.SetClanLock
	 */
	struct UUI_Lobby_C_SetClanLock_Params
	{
	public:
		int32_t                                                    ClanLock;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.AddVideoPanel
	 */
	struct UUI_Lobby_C_AddVideoPanel_Params
	{	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.ShowFlyAnimation
	 */
	struct UUI_Lobby_C_ShowFlyAnimation_Params
	{	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.GetAnimTargetLocation
	 */
	struct UUI_Lobby_C_GetAnimTargetLocation_Params
	{
	public:
		class UWidget*                                             TargetObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             UserObject;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           TargetLocation;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.PreConstruct
	 */
	struct UUI_Lobby_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.Construct
	 */
	struct UUI_Lobby_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.ReceiveShow
	 */
	struct UUI_Lobby_C_ReceiveShow_Params
	{	};

	/**
	 * Function UI_Lobby.UI_Lobby_C.ExecuteUbergraph_UI_Lobby
	 */
	struct UUI_Lobby_C_ExecuteUbergraph_UI_Lobby_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8SY6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
