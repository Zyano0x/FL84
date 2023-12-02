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
	 * UserDefinedStruct S_NoyaNoticeInfo.S_NoyaNoticeInfo
	 * Size -> 0x006C
	 */
	struct FS_NoyaNoticeInfo
	{
	public:
		E_NoticeType_Noya                                          Type_19_61521B0446EAF964ED4414B88CA78D95;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4RZH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LifeTime_20_BD882D5545761162ABC2D8B45FABE100;            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Text_21_231C41074F4B39F8D3276B9B458D1D31;                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TMap<unsigned char, bool>                                  TriggerCondition_24_461190CB4B9B8C849665FEBEA709D091;    // 0x0018(0x0050) Edit, BlueprintVisible
		int32_t                                                    MaxTiggerTimes_23_1487705444240010E31DD4A6A175CACD;      // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
