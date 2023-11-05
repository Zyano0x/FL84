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
	 * UserDefinedStruct Str_EdgeLightSetting.Str_EdgeLightSetting
	 * Size -> 0x0030
	 */
	struct FStr_EdgeLightSetting
	{
	public:
		struct FLinearColor                                        LightColor1_29_3C5C22CB456CE00B5DFC4297338C4B22;         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightColor2_30_6F35837E4F5631579541F9852C58CA07;         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightColor3_31_73DBAAED433340095BA5828B42358B7F;         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
