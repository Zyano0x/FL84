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
	 * UserDefinedStruct S_Notice.S_Notice
	 * Size -> 0x0019
	 */
	struct FS_Notice
	{
	public:
		class UObject*                                             Icon_23_BE1B67524B1209FD0942B6B9560F62CC;                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Text_24_2592C444471410BA3FD02289094D92BE;                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		E_NoticeLevel                                              NoticeLevel_25_2D9897214095D9FC1F3636B3132BC0AD;         // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
