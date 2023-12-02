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
	 * UserDefinedStruct S_ResurrectInfo.S_ResurrectInfo
	 * Size -> 0x0005
	 */
	struct FS_ResurrectInfo
	{
	public:
		bool                                                       bClearWeapons_8_85433FCD494E4E2DDCA2F6AB69D508C9;        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bClearAllItems_7_1B66870A49E70A4A31DBD1B93C1AE45D;       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bEmptyEnergy_9_422079A04E20412A0DD60594501D7D8C;         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bReChargeJetToFull_10_2649F2CB4F2A722D287E91848E966DBF;  // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EPlayerResurrectType                                       ResurrectMethod_15_E3E0A84B479C7DB70DAAF88AAF99DA23;     // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
