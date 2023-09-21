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
// ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItem
struct FWindowsProfileMatchItem
{
public:
	class FString                                PrimaryGPUBrand;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatch
struct FWIndowProfileMatch
{
public:
	class FString                                Profile;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWindowsProfileMatchItem              Match;                                             // 0x10(0x10)(NativeAccessSpecifierPublic)
};

}


