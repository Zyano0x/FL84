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
	 * UserDefinedStruct S_WarmGameSetting_AiCompbASE.S_WarmGameSetting_AiCompBase
	 * Size -> 0x0038
	 */
	struct FS_WarmGameSetting_AiCompBase
	{
	public:
		int32_t                                                    MaxiumTeam_12_C517CE564EDE787AE3734383D264A254;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CBDN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Comment_15_FE32996349B1C0680A106781D7EE6C86;             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UDataTable*                                          Action_5_7DB1AB4A46E32BB245EB5BAAECC0C063;               // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          Item_7_22057775450469E40587299341C57CCC;                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          Downsize_9_CFC5DE0B4AE8A479571703AEE5031A22;             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          DeathBox_11_BD72AB2C4EC6B2999BF1C99A081A2563;            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
