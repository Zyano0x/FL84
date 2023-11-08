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
	 * UserDefinedStruct S_HintData.S_HintData
	 * Size -> 0x000B
	 */
	struct FS_HintData
	{
	public:
		int64_t                                                    Key_14_D775E56C482FB0DD62C084A4047E30ED;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERedHintPath                                               Path_7_6229F76641F2B5DD8915A592798C0451;                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAutoRefresh_9_E2E903644E809943087FCDAB89AF4410;         // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_RedHint                                             Style_13_2AE8F5AD43CAA7BCF6308795DC0100A4;               // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
