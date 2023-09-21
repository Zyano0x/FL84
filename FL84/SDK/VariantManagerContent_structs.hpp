#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyValueCategory : uint8
{
	Undefined                      = 0,
	Generic                        = 1,
	RelativeLocation               = 2,
	RelativeRotation               = 4,
	RelativeScale3D                = 8,
	Visibility                     = 16,
	Material                       = 32,
	Color                          = 64,
	Option                         = 128,
	EPropertyValueCategory_MAX     = 129,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct VariantManagerContent.FunctionCaller
struct FFunctionCaller
{
public:
	class FName                                  FunctionName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PropertyIndex;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ComponentName;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


