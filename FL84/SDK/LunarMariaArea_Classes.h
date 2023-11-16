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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LunarMariaArea.LM_AreaTileData
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class ULM_AreaTileData : public UDataAsset
	{
	public:
		TMap<class FName, struct FAreaTileLayerData>               LayerTileData;                                           // 0x0030(0x0050) Edit, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LunarMariaArea.LM_AreaData_Base
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class ULM_AreaData_Base : public UDataAsset
	{
	public:
		int32_t                                                    ComponentSizeQuads;                                      // 0x0030(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubsectionSizeQuads;                                     // 0x0034(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentNumSubsections;                                 // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBitArea;                                              // 0x003C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YF4Z[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AreaDataID;                                              // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LunarMariaArea.LM_AreaData
	 * Size -> 0x01C0 (FullSize[0x0210] - InheritedSize[0x0050])
	 */
	class ULM_AreaData : public ULM_AreaData_Base
	{
	public:
		bool                                                       bDataTableDirty;                                         // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OA1A[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULandscapeInfo*                                      LandscapeInfo;                                           // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsProcessArea;                                           // 0x0060(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3WG8[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FIntPoint, class ULM_AreaTileData*>            AreaTileData;                                            // 0x0068(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TMap<class FName, struct FAreaLayerData>                   LayerTextures;                                           // 0x00B8(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TMap<class FName, struct FAreaGroupSet>                    GroupSettings;                                           // 0x0108(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		TMap<class FName, struct FLinearColor>                     DecalDisplayColorSettings;                               // 0x0158(0x0050) Edit, NativeAccessSpecifierPublic
		class UScriptStruct*                                       AreaAttributeStruct;                                     // 0x01A8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          FinalAreaAttributeDataTable;                             // 0x01B0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH8K[0x58];                                  // 0x01B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
