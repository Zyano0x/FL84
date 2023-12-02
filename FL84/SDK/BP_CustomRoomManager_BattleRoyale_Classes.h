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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_CustomRoomManager_BattleRoyale.BP_CustomRoomManager_BattleRoyale_C
	 * Size -> 0x0000 (FullSize[0x04C4] - InheritedSize[0x04C4])
	 */
	class ABP_CustomRoomManager_BattleRoyale_C : public ABP_CustomroomManager_C
	{
	public:
		void OnClientRoomDataReadyLuaCall();
		void OnPlayerRemovedFromRoom(const class FString& SolarPlayerID, ERemovedReasonType reason);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
