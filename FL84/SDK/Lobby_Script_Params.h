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
	 * Function Lobby_Script.Lobby_Script_C.GetModuleName
	 */
	struct ALobby_Script_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function Lobby_Script.Lobby_Script_C.ReceiveBeginPlay
	 */
	struct ALobby_Script_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Lobby_Script.Lobby_Script_C.ExecuteUbergraph_Lobby_Script
	 */
	struct ALobby_Script_C_ExecuteUbergraph_Lobby_Script_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif