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

// 0x20 (0x20 - 0x0)
// ScriptStruct RawInput.RegisteredDeviceInfo
struct FRegisteredDeviceInfo
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VendorID;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProductID;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceName;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RawInput.RawInputDeadzoneConfiguration
struct FRawInputDeadzoneConfiguration
{
public:
	float                                        Deadzone;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          Keys;                                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RawInput.RawInputDeviceAxisProperties
struct FRawInputDeviceAxisProperties
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInverted : 1;                                     // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGamepadStick : 1;                                 // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5E : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7BE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset;                                            // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RawInput.RawInputDeviceButtonProperties
struct FRawInputDeviceButtonProperties
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7BF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Key;                                               // 0x8(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RawInput.RawInputDeviceConfiguration
struct FRawInputDeviceConfiguration
{
public:
	class FString                                VendorID;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProductID;                                         // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRawInputDeviceAxisProperties> AxisProperties;                                    // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRawInputDeviceButtonProperties> ButtonProperties;                                  // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


