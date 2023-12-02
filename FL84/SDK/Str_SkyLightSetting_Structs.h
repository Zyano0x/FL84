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
	 * UserDefinedStruct Str_SkyLightSetting.Str_SkyLightSetting
	 * Size -> 0x0008
	 */
	struct FStr_SkyLightSetting
	{
	public:
		float                                                      Intensity_2_BF70603C48E1FB710393B6A01DE85371;            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FColor                                              LightColor_17_3C5C22CB456CE00B5DFC4297338C4B22;          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
