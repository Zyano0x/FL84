#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * ScriptStruct Str_LightData.Str_LightData
	 * Size -> 0x0070
	 */
	struct FStr_LightData
	{
	public:
		struct FStr_DirectionalLightSetting                        DirectionalLightSetting_8_652AA6EC4864A03310E86FB1505F4BFA; // 0x0000(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FStr_SkyLightSetting                                SkyLightSetting_2_D57A042E4F37A86B5F7C70BDC7D2CF8C;      // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStr_EdgeLightSetting                               EdgeLightSetting_12_36AD4D4A4FA15CCD9E68109626546B69;    // 0x0040(0x0030) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
