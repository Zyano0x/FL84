#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// Class LunarMariaArea.LM_AreaTileData
class ULM_AreaTileData : public UDataAsset
{
public:
	TMap<class FName, struct FAreaTileLayerData> LayerTileData;                                     // 0x30(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULM_AreaTileData* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class LunarMariaArea.LM_AreaData_Base
class ULM_AreaData_Base : public UDataAsset
{
public:
	int32                                        ComponentSizeQuads;                                // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubsectionSizeQuads;                               // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentNumSubsections;                           // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBitArea;                                        // 0x3C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AreaDataID;                                        // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULM_AreaData_Base* GetDefaultObj();

};

// 0x1C0 (0x210 - 0x50)
// Class LunarMariaArea.LM_AreaData
class ULM_AreaData : public ULM_AreaData_Base
{
public:
	bool                                         bDataTableDirty;                                   // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULandscapeInfo*                        LandscapeInfo;                                     // 0x58(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsProcessArea;                                     // 0x60(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FIntPoint, class ULM_AreaTileData*> AreaTileData;                                      // 0x68(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAreaLayerData>     LayerTextures;                                     // 0xB8(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAreaGroupSet>      GroupSettings;                                     // 0x108(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TMap<class FName, struct FLinearColor>       DecalDisplayColorSettings;                         // 0x158(0x50)(Edit, NativeAccessSpecifierPublic)
	class UScriptStruct*                         AreaAttributeStruct;                               // 0x1A8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            FinalAreaAttributeDataTable;                       // 0x1B0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULM_AreaData* GetDefaultObj();

};

}


