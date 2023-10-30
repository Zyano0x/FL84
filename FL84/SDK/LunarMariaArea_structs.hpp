#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct LunarMariaArea.AreaGroupSet
struct FAreaGroupSet
{
public:
	TArray<class FName>                          LayerNames;                                        // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct LunarMariaArea.AreaLayerData
struct FAreaLayerData
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentBit;                                        // 0x8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_213[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FIntPoint, class UTexture2D*>    ComponentWeightMapTextures;                        // 0x10(0x50)(Edit, Transient, EditConst, NativeAccessSpecifierPublic)
	class FName                                  GroupName;                                         // 0x60(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LunarMariaArea.AreaTileLayerData
struct FAreaTileLayerData
{
public:
	TMap<struct FIntPoint, class UTexture2D*>    ComponentWeightMapTextures;                        // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

}


