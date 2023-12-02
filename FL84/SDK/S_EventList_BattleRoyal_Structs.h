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
	 * UserDefinedStruct S_EventList_BattleRoyal.S_EventList_BattleRoyal
	 * Size -> 0x0010
	 */
	struct FS_EventList_BattleRoyal
	{
	public:
		TArray<struct FS_Event_BattleRoyale>                       EventList_3_9C55B4BD476EE1024C917DAC11DB6F31;            // 0x0000(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
