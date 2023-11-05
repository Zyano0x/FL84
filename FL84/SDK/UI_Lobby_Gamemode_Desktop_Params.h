#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.SetGameModeInfo
	 */
	struct UUI_Lobby_Gamemode_Desktop_C_SetGameModeInfo_Params
	{
	public:
		class FString                                              ModeName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GroupName;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.SetStateDesktop
	 */
	struct UUI_Lobby_Gamemode_Desktop_C_SetStateDesktop_Params
	{
	public:
		E_Type_State_Desktop                                       StateDesktop;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5WRP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.PreConstruct
	 */
	struct UUI_Lobby_Gamemode_Desktop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.BndEvt__Btn_Gamemode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Lobby_Gamemode_Desktop_C_BndEvt__Btn_Gamemode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.ExecuteUbergraph_UI_Lobby_Gamemode_Desktop
	 */
	struct UUI_Lobby_Gamemode_Desktop_C_ExecuteUbergraph_UI_Lobby_Gamemode_Desktop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.OnClicked__DelegateSignature
	 */
	struct UUI_Lobby_Gamemode_Desktop_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
