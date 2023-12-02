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
	 * UserDefinedStruct S_Event_BattleRoyale.S_Event_BattleRoyale
	 * Size -> 0x0058
	 */
	struct FS_Event_BattleRoyale
	{
	public:
		int32_t                                                    BattleTime_15_6488AAB44E84633B11E7DF844AD3B376;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_BattleEvent_BattleRoyale                                 EventType_11_8FC191774137C63ED18FD5987B59941D;           // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2HL0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         EventParam_10_DC47076342DAE72F001FD1A032026480;          // 0x0008(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
