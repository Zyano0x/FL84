#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBlockoutMaterialType : uint8
{
	BlockoutMaterialType_Grid      = 0,
	BlockoutMaterialType_CustomMaterial = 1,
	BlockoutMaterialType_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x38 - 0x8)
// ScriptStruct BlockoutToolsPlugin.BlockoutMaterialPreset
struct FBlockoutMaterialPreset : public FTableRowBase
{
public:
	bool                                         bUseGrid;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GridSize;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckerLuminance;                                  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTopColor;                                      // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TopColor;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


