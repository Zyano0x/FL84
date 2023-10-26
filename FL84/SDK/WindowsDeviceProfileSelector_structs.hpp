#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EWindowsDeviceLevel : uint8
{
	DeviceLevel1                   = 1,
	DeviceLevel2                   = 2,
	DeviceLevel3                   = 3,
	DeviceLevel4                   = 4,
	DeviceLevel5                   = 5,
	DeviceLevel6                   = 6,
	EWindowsDeviceLevel_MAX        = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItemCPU
struct FWindowsProfileMatchItemCPU
{
public:
	class FString                                PrimaryCPUBrand;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatchCPU
struct FWIndowProfileMatchCPU
{
public:
	class FString                                Profile;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWindowsProfileMatchItemCPU           Match;                                             // 0x10(0x10)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItemGPU
struct FWindowsProfileMatchItemGPU
{
public:
	class FString                                PrimaryGPUBrand;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GraphicsMemorySize;                                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatchGPU
struct FWIndowProfileMatchGPU
{
public:
	class FString                                Profile;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWindowsProfileMatchItemGPU           Match;                                             // 0x10(0x20)(NativeAccessSpecifierPublic)
};

}


