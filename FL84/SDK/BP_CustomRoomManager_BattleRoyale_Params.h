﻿#pragma once

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
	 * Function BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C.OnClientRoomDataReadyLuaCall
	 */
	struct ABP_CustomRoomManager_BattleRoyale_C_OnClientRoomDataReadyLuaCall_Params
	{	};

	/**
	 * Function BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C.OnPlayerRemovedFromRoom
	 */
	struct ABP_CustomRoomManager_BattleRoyale_C_OnPlayerRemovedFromRoom_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERemovedReasonType                                         reason;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
