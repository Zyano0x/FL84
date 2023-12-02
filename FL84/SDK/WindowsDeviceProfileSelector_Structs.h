#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum WindowsDeviceProfileSelector.EWindowsDeviceLevel
	 */
	enum class EWindowsDeviceLevel : uint8_t
	{
		DeviceLevel1 = 0,
		DeviceLevel2 = 1,
		DeviceLevel3 = 2,
		DeviceLevel4 = 3,
		DeviceLevel5 = 4,
		DeviceLevel6 = 5,
		MAX          = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItemGPU
	 * Size -> 0x0020
	 */
	struct FWindowsProfileMatchItemGPU
	{
	public:
		class FString                                              PrimaryGPUBrand;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GraphicsMemorySize;                                      // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatchGPU
	 * Size -> 0x0030
	 */
	struct FWIndowProfileMatchGPU
	{
	public:
		class FString                                              Profile;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWindowsProfileMatchItemGPU                         Match;                                                   // 0x0010(0x0020) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WindowsDeviceProfileSelector.WindowsProfileMatchItemCPU
	 * Size -> 0x0010
	 */
	struct FWindowsProfileMatchItemCPU
	{
	public:
		class FString                                              PrimaryCPUBrand;                                         // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WindowsDeviceProfileSelector.WIndowProfileMatchCPU
	 * Size -> 0x0020
	 */
	struct FWIndowProfileMatchCPU
	{
	public:
		class FString                                              Profile;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWindowsProfileMatchItemCPU                         Match;                                                   // 0x0010(0x0010) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
