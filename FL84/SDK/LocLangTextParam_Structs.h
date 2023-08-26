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
	 * ScriptStruct LocLangTextParam.LocLangTextParam
	 * Size -> 0x0040
	 */
	struct FLocLangTextParam
	{
	public:
		class FText                                                Text_5_07B11734414DAC59EB449FBB8F8F6D85;                 // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsLocText_6_C019E82842E44B7964CCF8B81E448CC5;            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M3K[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LocID_8_512E20F14AF0921CD684E7A44FCA8746;                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESolarSupportLanguages                                     PreviewLang_12_9C82FFB74395E8B4D431CAA5A3F4FC58;         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WME[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontSizeForLang                               SetSpecialLang_16_5BE2F4C046C6FACB7E3DD8B130E69FF5;      // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
