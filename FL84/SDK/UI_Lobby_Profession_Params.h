﻿#pragma once

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
	 * Function UI_Lobby_Profession.UI_Lobby_Profession_C.GetModuleName
	 */
	struct UUI_Lobby_Profession_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Profession.UI_Lobby_Profession_C.SetSelection
	 */
	struct UUI_Lobby_Profession_C_SetSelection_Params
	{
	public:
		unsigned char                                              Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Profession.UI_Lobby_Profession_C.UpdateState
	 */
	struct UUI_Lobby_Profession_C_UpdateState_Params
	{	};

	/**
	 * Function UI_Lobby_Profession.UI_Lobby_Profession_C.Render
	 */
	struct UUI_Lobby_Profession_C_Render_Params
	{	};

	/**
	 * Function UI_Lobby_Profession.UI_Lobby_Profession_C.PreConstruct
	 */
	struct UUI_Lobby_Profession_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Profession.UI_Lobby_Profession_C.ExecuteUbergraph_UI_Lobby_Profession
	 */
	struct UUI_Lobby_Profession_C_ExecuteUbergraph_UI_Lobby_Profession_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif