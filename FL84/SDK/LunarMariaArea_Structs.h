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
	 * ScriptStruct LunarMariaArea.AreaTileLayerData
	 * Size -> 0x0050
	 */
	struct FAreaTileLayerData
	{
	public:
		TMap<struct FIntPoint, class UTexture2D*>                  ComponentWeightMapTextures;                              // 0x0000(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LunarMariaArea.AreaLayerData
	 * Size -> 0x0068
	 */
	struct FAreaLayerData
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentBit;                                              // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBAL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FIntPoint, class UTexture2D*>                  ComponentWeightMapTextures;                              // 0x0010(0x0050) Edit, Transient, EditConst, NativeAccessSpecifierPublic
		class FName                                                GroupName;                                               // 0x0060(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LunarMariaArea.AreaGroupSet
	 * Size -> 0x0010
	 */
	struct FAreaGroupSet
	{
	public:
		TArray<class FName>                                        LayerNames;                                              // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
