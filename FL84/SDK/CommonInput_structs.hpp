#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonInputType : uint8
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonInput.InputDeviceIdentifierPair
struct FInputDeviceIdentifierPair
{
public:
	class FName                                  InputDeviceName;                                   // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HardwareDeviceIdentifier;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonInput.CommonInputControllerSimpleData
struct FCommonInputControllerSimpleData
{
public:
	class FName                                  GamepadName;                                       // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputDeviceIdentifierPair>    GamepadHardwareIdMapping;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct CommonInput.CommonInputPlatformBaseData
struct FCommonInputPlatformBaseData
{
public:
	uint8                                        Pad_C4D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupported;                                        // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECommonInputType                  DefaultInputType;                                  // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0xB(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DefaultGamepadName;                                // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C4E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UCommonInputBaseControllerData>> ControllerData;                                    // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCommonInputControllerSimpleData> ControllerSimpleData;                              // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct FCommonInputKeySetBrushConfiguration
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x10(0xE0)(Edit, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct FCommonInputKeyBrushConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           KeyBrush;                                          // 0x20(0xE0)(Edit, NativeAccessSpecifierPublic)
};

}


